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

class SetupEnterTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupEnterTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEnterTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupEnterTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupEnterTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupEnterTriggerPopup::determineStartValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x232768
     * @note[short] MacOS (Intel): 0x2896f0
     * @note[short] iOS: 0x2d3498
     * @note[short] Android
     */
    virtual void determineStartValues();
public:
    
private:
    [[deprecated("SetupEnterTriggerPopup::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x232188
     * @note[short] MacOS (Intel): 0x289090
     * @note[short] Android
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupEnterTriggerPopup::onEnterType not implemented")]]
    /**
     * @note[short] Android
     */
    void onEnterType(cocos2d::CCObject* sender);
public:
};
