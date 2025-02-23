#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class CameraTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CameraTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CameraTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("CameraTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CameraTriggerGameObject* create(char const* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x18823c
     * @note[short] MacOS (Intel): 0x1cc3f0
     * @note[short] Windows: 0x4a4cd0
     * @note[short] iOS: 0x38b8e8
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
    
private:
    [[deprecated("CameraTriggerGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x18b600
     * @note[short] MacOS (Intel): 0x1d0760
     * @note[short] iOS: 0x38c820
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("CameraTriggerGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1883f8
     * @note[short] MacOS (Intel): 0x1cc650
     * @note[short] iOS: 0x38baa4
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("CameraTriggerGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
};
