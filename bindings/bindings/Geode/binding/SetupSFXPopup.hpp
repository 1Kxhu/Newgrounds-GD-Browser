#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAudioTriggerPopup.hpp"
#include "CustomSFXDelegate.hpp"
#include "SFXBrowserDelegate.hpp"

class SetupSFXPopup : public SetupAudioTriggerPopup, public CustomSFXDelegate, public SFXBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSFXPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSFXPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x40f2fc
     * @note[short] Windows: 0x42ee10
     * @note[short] Android
     */
    static SetupSFXPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupSFXPopup::pageChanged not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x410784
     * @note[short] MacOS (Intel): 0x4a6f10
     * @note[short] iOS: 0x184220
     * @note[short] Android
     */
    virtual void pageChanged();
public:

    /**
     * @note[short] MacOS (ARM): 0x4107dc
     * @note[short] MacOS (Intel): 0x4a6f70
     * @note[short] Windows: 0x430230
     * @note[short] iOS: 0x184278
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupSFXPopup::onPlusButton not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x410c1c
     * @note[short] MacOS (Intel): 0x4a7430
     * @note[short] iOS: 0x184638
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSFXPopup::valueDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x410af8
     * @note[short] MacOS (Intel): 0x4a7310
     * @note[short] iOS: 0x184550
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x410a4c
     * @note[short] MacOS (Intel): 0x4a7230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1844d4
     * @note[short] Android: Out of line
     */
    virtual void sfxObjectSelected(SFXInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x410a54
     * @note[short] MacOS (Intel): 0x4a7250
     * @note[short] Windows: 0x430920
     * @note[short] iOS: 0x1844dc
     * @note[short] Android
     */
    virtual int getActiveSFXID();

    /**
     * @note[short] MacOS (ARM): 0x410a64
     * @note[short] MacOS (Intel): 0x4a7270
     * @note[short] Windows: 0x430930
     * @note[short] iOS: 0x1844ec
     * @note[short] Android
     */
    virtual bool overridePlaySFX(SFXInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x410ccc
     * @note[short] MacOS (Intel): 0x4a74d0
     * @note[short] Windows: 0x431050
     * @note[short] iOS: 0x1846e0
     * @note[short] Android
     */
    virtual void sfxBrowserClosed(SFXBrowser* p0);
    
private:
    [[deprecated("SetupSFXPopup::createSFXWidget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSFXWidget();
public:
    
private:
    [[deprecated("SetupSFXPopup::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x40f4a0
     * @note[short] MacOS (Intel): 0x4a5870
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupSFXPopup::onBrowseSFX not implemented")]]
    /**
     * @note[short] Android
     */
    void onBrowseSFX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSFXPopup::updateLength not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLength();
public:
};
