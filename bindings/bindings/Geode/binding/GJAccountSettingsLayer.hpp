#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"

class GJAccountSettingsLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "GJAccountSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJAccountSettingsLayer, FLAlertLayer)
	inline GJAccountSettingsLayer() {
        m_accountID = 0;
        m_messageStatus = 0;
        m_friendStatus = 0;
        m_commentHistoryStatus = 0;
        m_youtubeURL = "";
        m_twitterURL = "";
        m_twitchURL = "";
        m_youtubeInput = nullptr;
        m_twitterInput = nullptr;
        m_twitchInput = nullptr;
        m_messageSettings = nullptr;
        m_friendRequestSettings = nullptr;
        m_commentSettings = nullptr;
    }

    /**
     * @note[short] MacOS (ARM): 0x235cbc
     * @note[short] MacOS (Intel): 0x28d2c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJAccountSettingsLayer* create(int a1);

    /**
     * @note[short] MacOS (ARM): 0x238098
     * @note[short] MacOS (Intel): 0x28f970
     * @note[short] Windows: 0x28d1f0
     * @note[short] iOS: 0x2d7798
     * @note[short] Android
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("GJAccountSettingsLayer::textInputShouldOffset not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x237af0
     * @note[short] MacOS (Intel): 0x28f380
     * @note[short] iOS: 0x2d734c
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::textInputReturn not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x237bc0
     * @note[short] MacOS (Intel): 0x28f440
     * @note[short] iOS: 0x2d73b8
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::createToggleButton not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x28ec10
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, float p5, float p6);
public:

    /**
     * @note[short] MacOS (ARM): 0x235dd4
     * @note[short] MacOS (Intel): 0x28d440
     * @note[short] Windows: 0x28a850
     * @note[short] Android
     */
    bool init(int p0);
    
private:
    [[deprecated("GJAccountSettingsLayer::onClose not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x28ef80
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onCommentSetting not implemented")]]
    /**
     * @note[short] Android
     */
    void onCommentSetting(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onFriendRequests not implemented")]]
    /**
     * @note[short] Android
     */
    void onFriendRequests(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onMessageSetting not implemented")]]
    /**
     * @note[short] Android
     */
    void onMessageSetting(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::updateScoreValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateScoreValues();
public:
    int m_accountID;
    int m_messageStatus;
    int m_friendStatus;
    int m_commentHistoryStatus;
    gd::string m_youtubeURL;
    gd::string m_twitterURL;
    gd::string m_twitchURL;
    CCTextInputNode* m_youtubeInput;
    CCTextInputNode* m_twitterInput;
    CCTextInputNode* m_twitchInput;
    cocos2d::CCArray* m_messageSettings;
    cocos2d::CCArray* m_friendRequestSettings;
    cocos2d::CCArray* m_commentSettings;
};
