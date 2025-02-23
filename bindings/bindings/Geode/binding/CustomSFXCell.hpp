#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"
#include "CustomSFXDelegate.hpp"

class CustomSFXCell : public TableViewCell, public CustomSFXDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSFXCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSFXCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1f17e8
     * @note[short] MacOS (Intel): 0x2421a0
     * @note[short] Windows: 0xb4410
     * @note[short] iOS: 0x11316c
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("CustomSFXCell::draw not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1f188c
     * @note[short] MacOS (Intel): 0x2422a0
     * @note[short] iOS: 0x113210
     * @note[short] Android
     */
    virtual void draw();
public:

    /**
     * @note[short] MacOS (ARM): 0x1f17f8
     * @note[short] MacOS (Intel): 0x2421c0
     * @note[short] Windows: 0xb4520
     * @note[short] iOS: 0x11317c
     * @note[short] Android
     */
    virtual void sfxObjectSelected(SFXInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1f1854
     * @note[short] MacOS (Intel): 0x242240
     * @note[short] Windows: 0xb4110
     * @note[short] iOS: 0x1131d8
     * @note[short] Android
     */
    virtual int getActiveSFXID();

    /**
     * @note[short] Windows: 0xb4430
     * @note[short] Android
     */
    void loadFromObject(SFXInfoObject* p0);
    
private:
    [[deprecated("CustomSFXCell::shouldReload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldReload();
public:

    /**
     * @note[short] Windows: 0xb4560
     * @note[short] Android
     */
    void updateBGColor(int p0);
};
