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

class SetupTimerTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTimerTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTimerTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupTimerTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupTimerTriggerPopup* create(TimerTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupTimerTriggerPopup::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x31cd50
     * @note[short] MacOS (Intel): 0x38db20
     * @note[short] Android
     */
    bool init(TimerTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
};
