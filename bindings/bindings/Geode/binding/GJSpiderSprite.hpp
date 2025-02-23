#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJRobotSprite.hpp"

class GJSpiderSprite : public GJRobotSprite {
public:
    static constexpr auto CLASS_NAME = "GJSpiderSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSpiderSprite, GJRobotSprite)

    /**
     * @note[short] MacOS (ARM): 0x4fa09c
     * @note[short] Windows: 0x2a0420
     * @note[short] Android
     */
    static GJSpiderSprite* create(int p0);
    
private:
    [[deprecated("GJSpiderSprite::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4fa1d0
     * @note[short] MacOS (Intel): 0x5c5230
     * @note[short] Android
     */
    bool init(int p0);
public:
};
