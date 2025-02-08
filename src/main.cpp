#include <Geode/Geode.hpp>
#include <Geode/ui/BasedButtonSprite.hpp>

using namespace geode::prelude;

#include <Geode/modify/CustomSongLayer.hpp>
#include "htmlHelper.cpp"

namespace {
	static CCMenu* menu = nullptr;
	static CCTextInputNode* NGSearchField = nullptr;
}

class $modify(MyMenuLayer, CustomSongLayer) {
	bool init(CustomSongDelegate * p0) {
		if (!CustomSongLayer::init(p0)) {
			return false;
		}

		htmlHelper::vanillaSongIDTextField = m_songIDInput->m_textField;

		CCObject* obj;
		CCARRAY_FOREACH(this->getChildren(), obj) {
			if (CCLayer* LayerWithAllTheButtons = dynamic_cast<CCLayer*>(obj)) {

				CCMenu* tempMenu = nullptr;
				CCObject* child;
				CCARRAY_FOREACH(LayerWithAllTheButtons->getChildren(), child) {
					if ((tempMenu = dynamic_cast<CCMenu*>(child))) {
						break;
					}
				}

				::menu = tempMenu;

				auto spr = CCSprite::create("text.png"_spr);
				auto myButton = CCMenuItemSpriteExtra::create(
					spr,
					this,
					menu_selector(MyMenuLayer::onWebButtonClicked)
				);

				menu->addChild(myButton);
				myButton->setPosition(69.0f, -81.0f);
				myButton->setScale(1.0f, 0.99f);
				myButton->setZOrder(-1);

				//log::warn("Menu: {}", menu);
				//log::warn("Button: {}", myButton);
			}
		}

		return true;
	}

	void onCloseButtonClicked(CCObject*)
	{
		htmlHelper::touchBlockLayer->removeMeAndCleanup();
	}

	void onWebButtonClicked(CCObject*)
	{
		auto a = new ccColor4B({ 0,0,0,192 });
		auto newLayer = TouchBlockerLayer::create(*a);
		auto newMenu = CCMenu::create();
		newMenu->setPosition(0, 0);

		htmlHelper::touchBlockLayer = newLayer;
		htmlHelper::newMenu = newMenu;

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
		searchBoxTextField->setString(""); // setting this seems to properly resize the text inside the textbox

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

		newMenu->addChild(searchBoxTextField, 1);
		newMenu->addChild(CCNewgroundsLogo, -1);
		newMenu->addChild(NGSearchButton, 2);
		newMenu->addChild(CancelButton, 3);

		newMenu->setTouchPriority(-506);
		newLayer->addChild(searchBoxBG, 0);
		newLayer->addChild(newMenu, 1);
		this->addChild(newLayer, 1);
	}

	// hahhaha no i didnt not just copy and paste the previous code that would be silly..
	void onSearchButtonClicked(CCObject*)
	{
		std::string searchQuery = ::NGSearchField->getString();
		const gd::string baseNewgroundsSearchLink = "https://www.newgrounds.com/search/conduct/audio?suitabilities=etma&terms=";
		gd::string constructedSearchURL = htmlHelper::ResolveLink(baseNewgroundsSearchLink, searchQuery);

		//log::info("Making request to: '{}'", constructedSearchURL);

		htmlHelper::touchBlockLayer->removeMeAndCleanup();
		auto a = new ccColor4B({ 0,0,0,192 });
		auto newLayer = TouchBlockerLayer::create(*a);
		auto newMenu = CCMenu::create();
		newMenu->setPosition(0, 0);

		htmlHelper::touchBlockLayer = newLayer;
		htmlHelper::newMenu = newMenu;

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
		searchBoxTextField->setString(searchQuery); // setting this seems to properly resize the text inside the textbox

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

		newMenu->addChild(searchBoxTextField, 1);
		newMenu->addChild(CCNewgroundsLogo, -1);
		newMenu->addChild(NGSearchButton, 2);
		newMenu->addChild(CancelButton, 3);

		newMenu->setTouchPriority(-506);
		newLayer->addChild(searchBoxBG, 0);
		newLayer->addChild(newMenu, 1);
		this->addChild(newLayer, 1);

		// this actually makes the request, previous stuff was just visual + url construction
		htmlHelper::ProcessSearchURL(constructedSearchURL);
	}

	class TouchBlockerLayer : public CCLayerColor
	{
	public:
		static TouchBlockerLayer* create(const ccColor4B& color) {
			auto layer = new TouchBlockerLayer();
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

};
