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

class SetupItemEditTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupItemEditTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupItemEditTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupItemEditTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupItemEditTriggerPopup* create(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupItemEditTriggerPopup::valueDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4bed30
     * @note[short] MacOS (Intel): 0x569870
     * @note[short] iOS: 0x405594
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupItemEditTriggerPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4beb50
     * @note[short] MacOS (Intel): 0x569690
     * @note[short] iOS: 0x4053d4
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x4bc978
     * @note[short] MacOS (Intel): 0x567390
     * @note[short] Windows: 0x4525f0
     * @note[short] Android
     */
    bool init(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupItemEditTriggerPopup::onOpButton not implemented")]]
    /**
     * @note[short] Android
     */
    void onOpButton(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x4bdbf4
     * @note[short] MacOS (Intel): 0x568890
     * @note[short] Windows: 0x453eb0
     * @note[short] Android
     */
    TodoReturn updateFormulaLabel();
    
private:
    [[deprecated("SetupItemEditTriggerPopup::updateOpButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateOpButton(CCMenuItemSpriteExtra* p0, int p1, int p2);
public:
};
