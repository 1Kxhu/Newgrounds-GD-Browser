#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChanceObject.hpp"
#include "EffectGameObject.hpp"

class ChanceTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ChanceTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ChanceTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("ChanceTriggerGameObject::editChanceObject not implemented")]]
    /**
     * @note[short] Android
     */
    void editChanceObject(int p0, int p1);
public:
    
private:
    [[deprecated("ChanceTriggerGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:

    /**
     * @note[short] Windows: 0x49b580
     * @note[short] Android
     */
    void remapChanceObjects(gd::unordered_map<int, int> const* p0);
    
private:
    [[deprecated("ChanceTriggerGameObject::revertChanceRemap not implemented")]]
    /**
     * @note[short] Android
     */
    void revertChanceRemap();
public:
    gd::vector<ChanceObject> m_chanceObjects;
};
