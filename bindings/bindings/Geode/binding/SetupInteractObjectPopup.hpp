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

class SetupInteractObjectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInteractObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInteractObjectPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupInteractObjectPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupInteractObjectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupInteractObjectPopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x45904c
     * @note[short] MacOS (Intel): 0x4f8bf0
     * @note[short] iOS: 0x40b148
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInteractObjectPopup::onPlusButton not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x458f68
     * @note[short] MacOS (Intel): 0x4f8b00
     * @note[short] iOS: 0x40b0ec
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInteractObjectPopup::valueDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x458fa0
     * @note[short] MacOS (Intel): 0x4f8b40
     * @note[short] iOS: 0x40b124
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupInteractObjectPopup::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4586c0
     * @note[short] MacOS (Intel): 0x4f80b0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupInteractObjectPopup::updateItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateItems();
public:
};
