#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "GJAccountSettingsDelegate.hpp"

class UpdateAccountSettingsPopup : public FLAlertLayer, public GJAccountSettingsDelegate {
public:
    static constexpr auto CLASS_NAME = "UpdateAccountSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UpdateAccountSettingsPopup, FLAlertLayer)
    
private:
    [[deprecated("UpdateAccountSettingsPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static UpdateAccountSettingsPopup* create(GJAccountSettingsLayer* p0, int p1, int p2, int p3, gd::string p4, gd::string p5, gd::string p6);
public:

    /**
     * @note[short] MacOS (ARM): 0x238b68
     * @note[short] MacOS (Intel): 0x2905c0
     * @note[short] Windows: 0x28db10
     * @note[short] iOS: 0x2d7f70
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x238964
     * @note[short] MacOS (Intel): 0x2903b0
     * @note[short] Windows: 0x28d790
     * @note[short] iOS: 0x2d7dc0
     * @note[short] Android
     */
    virtual void updateSettingsFinished();

    /**
     * @note[short] MacOS (ARM): 0x238a7c
     * @note[short] MacOS (Intel): 0x2904d0
     * @note[short] Windows: 0x28d890
     * @note[short] iOS: 0x2d7ea4
     * @note[short] Android
     */
    virtual void updateSettingsFailed();
    
private:
    [[deprecated("UpdateAccountSettingsPopup::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2383a0
     * @note[short] Android
     */
    bool init(GJAccountSettingsLayer* p0, int p1, int p2, int p3, gd::string p4, gd::string p5, gd::string p6);
public:
    
private:
    [[deprecated("UpdateAccountSettingsPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
};
