#include <Geode/Geode.hpp>
#include <Geode/ui/BasedButtonSprite.hpp>

using namespace geode::prelude;

#include <Geode/modify/CustomSongLayer.hpp>
#include "htmlHelper.hpp"

class CCLayerColorBlockTouch : public CCLayerColor
{
public:
	static CCLayerColorBlockTouch* create(const ccColor4B& color) {
		auto layer = new CCLayerColorBlockTouch();
		if (layer && layer->initWithColor(color)) {
			layer->autorelease();
			return layer;
		}
		delete layer;
		return nullptr;
	}

	virtual bool initWithColor(const ccColor4B& color) {
		if (!CCLayerColor::initWithColor(color)) return false;
		setTouchEnabled(true);
		return true;
	}

	virtual bool ccTouchBegan(CCTouch* touch, CCEvent* event) {
		return true;
	}

	virtual void registerWithTouchDispatcher() {
		CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this, -505, true);
	}
};

namespace {
	CCMenu* CustomSongsCCMenu = nullptr;
	CCTextInputNode* NGSearchField = nullptr;
}

class $modify(MyMenuLayer, CustomSongLayer) {
	bool init(CustomSongDelegate * p0) {
		if (!CustomSongLayer::init(p0)) {
			return false;
		}

		htmlHelper::vanillaSongIDTextField = m_songIDInput->m_textField;

		CCObject* obj;
		CCARRAY_FOREACH(this->getChildren(), obj) {
			if (CCLayer* LayerWithAllTheButtons = typeinfo_cast<CCLayer*>(obj)) {

				CCMenu* tempMenu = nullptr;
				CCObject* child;
				CCARRAY_FOREACH(LayerWithAllTheButtons->getChildren(), child) {
					if ((tempMenu = typeinfo_cast<CCMenu*>(child))) {
						break;
					}
				}

				::CustomSongsCCMenu = tempMenu;

				auto openNGBrowserSprite = CCSprite::create("text.png"_spr);
				auto openNGBrowserButton = CCMenuItemSpriteExtra::create(
					openNGBrowserSprite,
					this,
					menu_selector(MyMenuLayer::onWebButtonClicked)
				);
				openNGBrowserButton->setPosition(69.0f, -81.0f);
				openNGBrowserButton->setScale(1.0f, 0.99f);
				openNGBrowserButton->setZOrder(-1);

				CustomSongsCCMenu->addChild(openNGBrowserButton);
			}
		}

		return true;
	}

	void onCloseButtonClicked(CCObject*)
	{
		htmlHelper::currentWebTask.cancel();
		htmlHelper::NGTouchLayer->removeMeAndCleanup();
		htmlHelper::NGTouchLayer = nullptr;
	}

	void CreateNewgroundsDialog(std::string textFieldContent)
	{
		if (htmlHelper::NGTouchLayer != nullptr)
		{
			htmlHelper::NGTouchLayer->removeMeAndCleanup();
		}

		auto backgroundColor = new ccColor4B({ 0,0,0,192 });
		auto newTouchLayer = CCLayerColorBlockTouch::create(*backgroundColor);
		auto NGTouchMenu = CCMenu::create();
		NGTouchMenu->setPosition(0, 0);

		htmlHelper::NGTouchLayer = newTouchLayer;
		htmlHelper::NGTouchMenu = NGTouchMenu;

		auto CancelButtonSprite = CCSprite::create("close.png"_spr);
		auto CancelButton = CCMenuItemSpriteExtra::create(
			CancelButtonSprite,
			this,
			menu_selector(MyMenuLayer::onCloseButtonClicked)
		);
		CancelButton->setPosition(152.0f, 241.0f);

		auto searchBoxTextField = CCTextInputNode::create(200.0f, 40.0f, "Search for music..", "bigFont.fnt");
		::NGSearchField = searchBoxTextField;
		searchBoxTextField->setPosition(284.0f, 242.0f);
		searchBoxTextField->setString(textFieldContent);

		auto searchBoxBG = CCScale9Sprite::create("searchbar-bg.png"_spr);
		searchBoxBG->setContentSize(CCSizeMake(220.0f, 42.0f));
		searchBoxBG->setPosition(searchBoxTextField->getPosition());

		auto CCNewgroundsLogo = CCSprite::create("newgroundstitle-mono.png"_spr);
		CCNewgroundsLogo->setPosition(CCPointMake(284.0f, 270.0f));

		auto NGSearchSprite = CCSprite::create("search.png"_spr);
		auto NGSearchButton = CCMenuItemSpriteExtra::create(
			NGSearchSprite,
			this,
			menu_selector(MyMenuLayer::onSearchButtonClicked));
		NGSearchButton->setPosition(416.0f, 241.0f);

		auto searchingTextColor = new ccColor3B({ 255,240,207 });
		CCLabelBMFont* searchingUserFeedbackLabel = CCLabelBMFont::create("Searching..", "bigFont.fnt");
		searchingUserFeedbackLabel->setPosition(284.0f, 214.0f);
		searchingUserFeedbackLabel->setScale(0.5f);
		searchingUserFeedbackLabel->setColor(*searchingTextColor);
		searchingUserFeedbackLabel->setOpacity(209);
		searchingUserFeedbackLabel->setVisible(false); // is visible when the user is searching for songs

		htmlHelper::searchingLabel = searchingUserFeedbackLabel;

		NGTouchMenu->addChild(searchBoxTextField, 1);
		NGTouchMenu->addChild(CCNewgroundsLogo, -1);
		NGTouchMenu->addChild(NGSearchButton, 2);
		NGTouchMenu->addChild(CancelButton, 3);
		NGTouchMenu->addChild(searchingUserFeedbackLabel, 4);

		NGTouchMenu->setTouchPriority(-506);
		newTouchLayer->addChild(searchBoxBG, 0);
		newTouchLayer->addChild(NGTouchMenu, 1);
		this->addChild(newTouchLayer, 1);
	}

	void onWebButtonClicked(CCObject*)
	{
		htmlHelper::currentWebTask.cancel();
		CreateNewgroundsDialog("");	// empty string means no search query
	}

	void onSearchButtonClicked(CCObject*)
	{
		htmlHelper::currentWebTask.cancel();

		std::string searchQuery = ::NGSearchField->getString();
		const gd::string baseNewgroundsSearchLink = "https://www.newgrounds.com/search/conduct/audio?suitabilities=etma&terms=";
		gd::string constructedSearchURL = htmlHelper::ResolveLink(baseNewgroundsSearchLink, searchQuery);

		// easy way to remove all previous search results
		CreateNewgroundsDialog(searchQuery);

		// this call actually makes the request
		htmlHelper::ProcessSearchURL(constructedSearchURL);
	}
};
