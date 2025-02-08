// originally wanted to do many things different, i tried 5+ libraries and only got cpr to work
// there are probably many unnecessary things here

#include <Geode/Geode.hpp>
using namespace geode::prelude;

#include <iostream>
#include <cpr/cpr.h>

namespace htmlHelper
{
	static CCMenu* newMenu;
	static size_t numberOfSongsParsed = 0;
	static CCTextFieldTTF* vanillaSongIDTextField = nullptr;
	static CCLayerColor* touchBlockLayer = nullptr; // hopefully doesnt crash my game WILL IT HAHAHAHAHAHAHGHSJDRFSGFJDGJDFG
	static std::string responseText = "";

	#include <functional>

	class MyMenuItemSprite : public CCMenuItemSpriteExtra {
	public:
		using Callback = std::function<void(CCObject*)>;

		static MyMenuItemSprite* create(cocos2d::CCNode* normalSprite, cocos2d::CCNode* target, Callback callback) {
			MyMenuItemSprite* pRet = new MyMenuItemSprite();
			if (pRet && pRet->init(normalSprite, target, callback)) {
				pRet->autorelease();
				return pRet;
			}
			else {
				delete pRet;
				return nullptr;
			}
		}

		bool init(cocos2d::CCNode* normalSprite, cocos2d::CCNode* target, Callback callback) {
			if (!CCMenuItemSpriteExtra::init(normalSprite, normalSprite, target, menu_selector(MyMenuItemSprite::onClick))) {
				return false;
			}
			return true;
		}

		// subclass just for this lol
		void onClick(CCObject* sender) {
			if (auto btn = dynamic_cast<MyMenuItemSprite*>(sender))
			{
				htmlHelper::vanillaSongIDTextField->setString(btn->getID().c_str());
				htmlHelper::touchBlockLayer->removeMeAndCleanup();
			}
		}
	};

	static gd::string ResolveLink(gd::string baseURL, gd::string searchQuery)
	{
		std::replace(searchQuery.begin(), searchQuery.end(), ' ', '+');
		return baseURL + searchQuery;
	}

	static std::string SearchFor(const std::string& content, const std::string& startString, const std::string& endString)
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

	#include <string>
	#include <sstream>
	#include <cctype>

	static std::string htmlStringToStandardString(std::string inputHtmlString) {
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
							// yeah ur on ur own buddy
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

	static bool startsWithNumber(const std::string& inputString) {
		return !inputString.empty() && std::isdigit(static_cast<unsigned char>(inputString[0]));
	}

	#include <stdlib.h>
	static void ParseLiElementIntoSong(std::string liElement)
	{
		//log::warn("     {}", liElement);
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
		while (true)
		{
			if (views.starts_with("<") || !startsWithNumber(views))
			{
				views = views + " Views</dd>";
				views = SearchFor(views, "<dd>", " Views</dd>");
				continue;
			}

			break;
		}

		std::string durationInSeconds_str = SearchFor(liElement, "audio-duration=\"", "\"");
		//log::info("Precalc time: {}", durationInSeconds_str);

		size_t durationInSeconds = std::strtoul(durationInSeconds_str.c_str(), nullptr, 10);
		size_t minutes = durationInSeconds / 60;
		size_t seconds = durationInSeconds % 60;

		char time[6];  // "MM:SS\0"
		std::snprintf(time, sizeof(time), "%zu:%02zu", minutes, seconds);
		std::string result(time);

		// By ARTISTNAME, Length: XX:XX, Views: 1.9B 
		// ARTISTNAME, XX:XX, 1.9B Views
		std::string formattedInfo = artist + ", " + time + ", " + views + " Views";
		//log::info(formattedInfo);
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

		htmlHelper::newMenu->addChild(songIDLabel);
		htmlHelper::newMenu->addChild(additionalDataLabel);

		auto spr = CCSprite::create("select.png"_spr);
		auto myButton = MyMenuItemSprite::create(
			spr,
			htmlHelper::newMenu->m_pParent,
			nullptr
		);

		myButton->setScale(1);
		myButton->setAnchorPoint(CCPointMake(0.5f, 0.56f));
		myButton->setPosition(189.0f, songIDLabel->getPositionY());
		myButton->setID(songID);

		songIDLabel->setPositionX(songIDLabel->getPositionX() + myButton->getContentWidth());

		myButton->setTag(69);
		songIDLabel->setTag(69);
		additionalDataLabel->setTag(69);

		htmlHelper::newMenu->addChild(myButton);
		htmlHelper::newMenu->addChild(songIDLabel);

		htmlHelper::numberOfSongsParsed++;
	}

	static void ParseHTML(std::string htmlResponse)
	{
		std::string ulContent = "";

		// FIND UL TAG (THE ONE THAT CONTAINS ALL THE SONGS DIV WRAPPERS)
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

		htmlHelper::numberOfSongsParsed = 0;
		size_t obtainedSongs = 0;

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
					if (liContent.starts_with("<a href=\"https://"))
					{
						continue;
					}

					//log::info("   Found <li>:");
					htmlHelper::ParseLiElementIntoSong(liContent);
					obtainedSongs++;
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

	#include <thread>

	// dont let anyone see this code
	static void ProcessSearchURL(gd::string constructedSearchURL)
	{
		htmlHelper::responseText = "";

		// async get
		std::thread([constructedSearchURL]() {
			cpr::Response response = cpr::Get(cpr::Url{ constructedSearchURL });

			if (response.status_code != 200) {
				log::error("Request failed with status: {}", response.status_code);
				htmlHelper::responseText = "~" + response.status_code;
				return;
			}

			//log::info("STATUS_CODE: {}", response.status_code);

			htmlHelper::responseText = response.text;
			}).detach();

			// 'dont call this manually' pluh
			CCDirector::get()->drawScene();

			while (htmlHelper::responseText.empty())
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(16));
			}

			if (htmlHelper::responseText.starts_with("~"))
			{
				std::string errorString = "Error " + htmlHelper::responseText.substr(1);
				const char* errorCString = errorString.c_str();

				FLAlertLayer::create(
					errorCString,   
					"Song search failed, please check your internet connection.", 
					"Bruh"
				)->show();
			}
			else
			{
				htmlHelper::ParseHTML(htmlHelper::responseText);
			}
	}
}