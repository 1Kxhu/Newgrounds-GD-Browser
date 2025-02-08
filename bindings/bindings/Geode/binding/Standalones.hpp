#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


    /**
     * @note[short] MacOS (ARM): 0x1aba8c
     * @note[short] MacOS (Intel): 0x1f5fa0
     * @note[short] Windows
     * @note[short] Android
     */
    void kmGLPushMatrix();

    /**
     * @note[short] MacOS (ARM): 0x1abad0
     * @note[short] MacOS (Intel): 0x1f5fe0
     * @note[short] Windows
     * @note[short] Android
     */
    void kmGLPopMatrix();
