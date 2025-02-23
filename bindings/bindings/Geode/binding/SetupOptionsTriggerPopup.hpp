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

class SetupOptionsTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupOptionsTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupOptionsTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupOptionsTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupOptionsTriggerPopup* create(GameOptionsTrigger* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x503958
     * @note[short] MacOS (Intel): 0x5cf620
     * @note[short] Windows: 0x41e720
     * @note[short] iOS: 0x40be4c
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupOptionsTriggerPopup::addOption not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addOption(int p0, gd::string p1);
public:
    
private:
    [[deprecated("SetupOptionsTriggerPopup::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x502f58
     * @note[short] MacOS (Intel): 0x5ceaf0
     * @note[short] Android
     */
    bool init(GameOptionsTrigger* p0, cocos2d::CCArray* p1);
public:
};
