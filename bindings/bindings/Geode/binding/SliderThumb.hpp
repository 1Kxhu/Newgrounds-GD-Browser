#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SliderThumb : public cocos2d::CCMenuItemImage {
public:
    static constexpr auto CLASS_NAME = "SliderThumb";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SliderThumb, cocos2d::CCMenuItemImage)
    
private:
    [[deprecated("SliderThumb::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SliderThumb* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3);
public:

    /**
     * @note[short] MacOS (ARM): 0x2895e4
     * @note[short] MacOS (Intel): 0x2ef4f0
     * @note[short] Windows: 0x712b0
     * @note[short] Android
     */
    float getValue();
    
private:
    [[deprecated("SliderThumb::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setMaxOffset(float offset);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setRotated(bool rotated);

    /**
     * @note[short] MacOS (ARM): 0x289668
     * @note[short] MacOS (Intel): 0x2ef590
     * @note[short] Windows: 0x71340
     * @note[short] Android
     */
    void setValue(float p0);
    float m_length;
    bool m_vertical;
};
