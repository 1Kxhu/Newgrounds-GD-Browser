#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupStopTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupStopTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupStopTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupStopTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupStopTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupStopTriggerPopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4c4118
     * @note[short] MacOS (Intel): 0x56f820
     * @note[short] iOS: 0x409a2c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupStopTriggerPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4c40a0
     * @note[short] MacOS (Intel): 0x56f7b0
     * @note[short] iOS: 0x4099b4
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupStopTriggerPopup::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4c3b3c
     * @note[short] MacOS (Intel): 0x56f190
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
};
