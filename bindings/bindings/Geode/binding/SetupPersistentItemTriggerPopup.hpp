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

class SetupPersistentItemTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPersistentItemTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPersistentItemTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupPersistentItemTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupPersistentItemTriggerPopup* create(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupPersistentItemTriggerPopup::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4c1454
     * @note[short] MacOS (Intel): 0x56c420
     * @note[short] Android
     */
    bool init(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
};
