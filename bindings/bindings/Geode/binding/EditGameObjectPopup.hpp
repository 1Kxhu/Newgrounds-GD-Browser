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

class EditGameObjectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditGameObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditGameObjectPopup, SetupTriggerPopup)
    
private:
    [[deprecated("EditGameObjectPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EditGameObjectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);
public:
    
private:
    [[deprecated("EditGameObjectPopup::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x23facc
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);
public:
};
