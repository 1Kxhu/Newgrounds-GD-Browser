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
#include "CurrencyRewardDelegate.hpp"

class RewardUnlockLayer : public FLAlertLayer, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardUnlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardUnlockLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x1be624
     * @note[short] MacOS (Intel): 0x209900
     * @note[short] Windows: 0x3b6950
     * @note[short] Android
     */
    static RewardUnlockLayer* create(int p0, RewardsPage* p1);

    /**
     * @note[short] MacOS (ARM): 0x1c25c8
     * @note[short] MacOS (Intel): 0x20dd60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c8e14
     * @note[short] Android: Out of line
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1c25a0
     * @note[short] MacOS (Intel): 0x20dd20
     * @note[short] Windows: 0x3ba210
     * @note[short] iOS: 0x1c8dec
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x1bff18
     * @note[short] MacOS (Intel): 0x20b430
     * @note[short] Windows: 0x3b7850
     * @note[short] Android
     */
    void connectionTimeout();
    
private:
    [[deprecated("RewardUnlockLayer::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1bef6c
     * @note[short] Android
     */
    bool init(int p0, RewardsPage* p1);
public:

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void labelEnterFinishedO(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1bfec0
     * @note[short] MacOS (Intel): 0x20b3d0
     * @note[short] Windows: 0x3ba220
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bfd64
     * @note[short] Windows: 0x3b78b0
     * @note[short] Android
     */
    void playDropSound();
    
private:
    [[deprecated("RewardUnlockLayer::playLabelEffect not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1c1e58
     * @note[short] MacOS (Intel): 0x20d5c0
     * @note[short] Android
     */
    void playLabelEffect(int p0, int p1, cocos2d::CCSprite* p2, cocos2d::CCPoint p3, float p4);
public:
    
private:
    [[deprecated("RewardUnlockLayer::playRewardEffect not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1bff80
     * @note[short] Android
     */
    void playRewardEffect();
public:

    /**
     * @note[short] MacOS (ARM): 0x1be8c8
     * @note[short] MacOS (Intel): 0x209c10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool readyToCollect(GJRewardItem* item);
    
private:
    [[deprecated("RewardUnlockLayer::showCloseButton not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1c2524
     * @note[short] MacOS (Intel): 0x20dc90
     * @note[short] Android
     */
    void showCloseButton();
public:

    /**
     * @note[short] MacOS (ARM): 0x1be8e8
     * @note[short] MacOS (Intel): 0x209c30
     * @note[short] Windows: 0x3b7790
     * @note[short] Android
     */
    bool showCollectReward(GJRewardItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x1bfdf0
     * @note[short] Windows: 0x3b7950
     * @note[short] Android
     */
    void step2();

    /**
     * @note[short] MacOS (Intel): 0x20d5a0
     * @note[short] Windows: 0x3b7a50
     * @note[short] Android
     */
    void step3();
    cocos2d::CCArray* m_backgroundObjects;
    RewardsPage* m_rewardsPage;
    GJChestSprite* m_chestSprite;
    int m_chestType;
    bool m_rewardCollected;
    bool m_animationPlayed;
    GJRewardItem* m_rewardItem;
    cocos2d::CCLabelBMFont* m_wrongLabel;
    CCMenuItemSpriteExtra* m_closeBtn;
    CCMenuItemSpriteExtra* m_rewardBtn;
    float m_unkFloat;
};
