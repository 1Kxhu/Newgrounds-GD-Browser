// originally wanted to do many things different, i tried 5+ libraries and only got cpr to work
// there are probably many unnecessary things here

#include "htmlHelper.hpp"
#include <iostream>
#include <functional>
#include <sstream>
#include <cctype>

namespace htmlHelper
{
	CCMenu* NGTouchMenu;
	size_t numberOfSongsParsed = 0;
	CCTextFieldTTF* vanillaSongIDTextField = nullptr;
	CCLayerColor* NGTouchLayer = nullptr;
	std::string m_responseTextHTML = "";
	EventListener<geode::utils::web::WebTask> m_webRequestTaskListener;
	CCLabelBMFont* searchingLabel = nullptr;

	gd::string ResolveLink(gd::string baseURL, gd::string searchQuery)
	{
		std::replace(searchQuery.begin(), searchQuery.end(), ' ', '+');
		return baseURL + searchQuery;
	}

	std::string SearchFor(const std::string& content, const std::string& startString, const std::string& endString)
	{
		size_t startPos = content.find(startString);
		if (startPos == std::string::npos) {
			//log::error("Start string not found!");
			return "";
		}
		startPos += startString.length();

		size_t endPos = content.find(endString, startPos);
		if (endPos == std::string::npos) {
			//log::error("End string not found!");
			return "";
		}

		return content.substr(startPos, endPos - startPos);
	}

	std::string htmlStringToStandardString(std::string inputHtmlString) {
		std::string outputString;
		size_t i = 0;
		while (i < inputHtmlString.size()) {
			if (inputHtmlString[i] == '&') {
				size_t semicolon_pos = inputHtmlString.find(';', i);
				if (semicolon_pos != std::string::npos && semicolon_pos > i) {
					std::string entity = inputHtmlString.substr(i + 1, semicolon_pos - i - 1);
					if (entity[0] == '#') {
						try {
							int code = std::stoi(entity.substr(1)); // Handle &#xxx;
							outputString += static_cast<char>(code);
						}
						catch (const std::invalid_argument&) {
							outputString += '&';
							outputString += entity;
							outputString += ';';
						}
					}
					else {
						if (entity == "amp") {
							outputString += '&';
						}
						else if (entity == "lt") {
							outputString += '<';
						}
						else if (entity == "gt") {
							outputString += '>';
						}
						else if (entity == "quot") {
							outputString += '"';
						}
						else if (entity == "apos") {
							outputString += '\'';
						}
						else {
							// not recognized, treats as actual text
							outputString += '&';
							outputString += entity;
							outputString += ';';
						}
					}
					i = semicolon_pos + 1;
				}
				else {
					// & is the actual character
					outputString += '&';
					++i;
				}
			}
			else {
				outputString += inputHtmlString[i];
				++i;
			}
		}
		return outputString;
	}

	bool startsWithNumber(const std::string& inputString) {
		return !inputString.empty() && std::isdigit(static_cast<unsigned char>(inputString[0]));
	}

	class HTMLHelper {
	public:
		void onSelectSongClick(CCObject* sender) {
			if (auto btn = dynamic_cast<CCMenuItemSpriteExtra*>(sender)) {
				htmlHelper::vanillaSongIDTextField->setString(btn->getID().c_str());
				htmlHelper::NGTouchLayer->removeMeAndCleanup();
				htmlHelper::NGTouchLayer = nullptr;
			}
		}


	};

	void ParseLiElementIntoSong(std::string liElement)
	{
		std::string songID = SearchFor(liElement, "<a href=\"https://www.newgrounds.com/audio/listen/", "\"");
		if (songID == "")
		{
			return;
		}

		std::string artist = SearchFor(liElement, "<strong>", "</strong>");
		std::string title = SearchFor(liElement, "title=\"", "\">");
		artist = htmlStringToStandardString(artist);
		title = htmlStringToStandardString(title);

		std::string views = SearchFor(liElement, "<dd>", " Views</dd>");
		while (views.starts_with("<") || !startsWithNumber(views))
		{
			views = views + " Views</dd>";
			views = SearchFor(views, "<dd>", " Views</dd>");
		}

		std::string durationInSeconds_str = SearchFor(liElement, "audio-duration=\"", "\"");

		size_t durationInSeconds = std::strtoul(durationInSeconds_str.c_str(), nullptr, 10);
		size_t minutes = durationInSeconds / 60;
		size_t seconds = durationInSeconds % 60;

		char time[6];  // "MM:SS\0"
		std::snprintf(time, sizeof(time), "%zu:%02zu", minutes, seconds);
		std::string result(time);

		// formattedInfo can look like this for example: 
		// "ARTISTNAME, XX:XX, 1.9B Views"
		std::string formattedInfo = artist + ", " + time + ", " + views + " Views";

		CCLabelBMFont* songIDLabel = CCLabelBMFont::create(title.c_str(), "bigFont.fnt");
		songIDLabel->setAnchorPoint(CCPointMake(0.0f, 0.3f));
		songIDLabel->setScale(0.5f);
		songIDLabel->setPositionX(174.0f);
		songIDLabel->setPositionY(207.0f - (htmlHelper::numberOfSongsParsed * 32.5f));

		CCLabelBMFont* additionalDataLabel = CCLabelBMFont::create(formattedInfo.c_str(), "bigFont.fnt");
		additionalDataLabel->setAnchorPoint(CCPointMake(0.0f, 0.3f));
		additionalDataLabel->setScale(0.33f);
		additionalDataLabel->setPositionX(206.0f);
		additionalDataLabel->setPositionY(197.0f - (htmlHelper::numberOfSongsParsed * 32.5f));
		additionalDataLabel->setOpacity(192);

		htmlHelper::NGTouchMenu->addChild(songIDLabel);
		htmlHelper::NGTouchMenu->addChild(additionalDataLabel);

		auto spr = CCSprite::create("select.png"_spr);
		auto myButton = CCMenuItemSpriteExtra::create(
			spr,
			htmlHelper::NGTouchMenu->m_pParent,
			menu_selector(HTMLHelper::onSelectSongClick)
		);

		myButton->setScale(1);
		myButton->setAnchorPoint(CCPointMake(0.5f, 0.56f));
		myButton->setPosition(189.0f, songIDLabel->getPositionY());
		myButton->setID(songID);

		songIDLabel->setPositionX(songIDLabel->getPositionX() + myButton->getContentWidth());

		htmlHelper::NGTouchMenu->addChild(myButton);
		htmlHelper::NGTouchMenu->addChild(songIDLabel);

		htmlHelper::numberOfSongsParsed++;
	}

	void ParseHTML(std::string htmlResponse)
	{
		std::string ulContent = "";

		// FIND UL TAG (THE ONE THAT CONTAINS ALL THE SONGS DIV WRAPPERS)
		// all of it's children are expected to be <li>
		size_t startPos = htmlResponse.find("<ul class=\"itemlist spaced\">");
		if (startPos != std::string::npos)
		{
			size_t endPos = htmlResponse.find("</ul>", startPos);

			if (endPos != std::string::npos)
			{
				ulContent = htmlResponse.substr(startPos, endPos - startPos + 5);
				//log::info("Found <ul>");
			}
			else {
				//log::error("</ul> Tag not found!");
			}
		}
		else
		{
			//log::error("<ul> Tag not found!");
		}

		// reset global counter
		htmlHelper::numberOfSongsParsed = 0;

		// SORT THROUGH EACH LI ELEMENT
		while (true && htmlHelper::numberOfSongsParsed < 5)
		{
			startPos = htmlResponse.find("<li>") + 4;
			if (startPos != std::string::npos)
			{
				size_t endPos = htmlResponse.find("</li>", startPos);

				if (endPos != std::string::npos)
				{
					std::string liContent = htmlResponse.substr(startPos, endPos - startPos);
					htmlResponse = htmlResponse.substr(endPos + 5);

					// filter out unrelated <li> elements
					if (liContent.starts_with("<a href=\"https://"))
					{
						continue;
					}

					//log::info("   Found <li>:");
					htmlHelper::ParseLiElementIntoSong(liContent);
				}
				else {
					break;
				}
			}
			else
			{
				break;
			}
		}

		if (htmlHelper::numberOfSongsParsed < 1)
		{
			FLAlertLayer::create(
				"0 results.",
				"Try to simplify your search, or try searching for another song.",
				"Okay"
			)->show();
		}

		//log::info("Obtained {} songs.", obtainedSongs);
	}

	geode::utils::web::WebTask currentWebTask;

	void ProcessSearchURL(gd::string constructedSearchURL)
	{
		htmlHelper::m_responseTextHTML = "";

		htmlHelper::m_webRequestTaskListener.bind([](web::WebTask::Event* event) {
			if (geode::utils::web::WebResponse* response = event->getValue())
			{
				htmlHelper::searchingLabel->setVisible(false);
				htmlHelper::m_responseTextHTML = response->string().unwrap().c_str();

				if (htmlHelper::m_responseTextHTML.starts_with("~"))
				{
					std::string errorString = "Error " + htmlHelper::m_responseTextHTML.substr(1);
					const char* errorCString = errorString.c_str();

					FLAlertLayer::create(
						errorCString,
						"Song search failed, try checking your internet connection.",
						"Okay"
					)->show();
				}
				else
				{
					htmlHelper::ParseHTML(htmlHelper::m_responseTextHTML);
				}
			}
		});

		web::WebRequest req = web::WebRequest();
		std::string url = constructedSearchURL;
		currentWebTask = req.get(url);

		htmlHelper::searchingLabel->setVisible(true);
		m_webRequestTaskListener.setFilter(currentWebTask);
	}
}