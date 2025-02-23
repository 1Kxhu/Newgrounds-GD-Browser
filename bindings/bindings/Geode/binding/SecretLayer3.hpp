#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class SecretLayer3 : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer3";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer3, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer3();

    /**
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SecretLayer3* create();
    
private:
    [[deprecated("SecretLayer3::scene not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x48dc80
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();
public:

    /**
     * @note[short] MacOS (ARM): 0x3fd1cc
     * @note[short] MacOS (Intel): 0x490560
     * @note[short] Windows: 0x3d2b20
     * @note[short] iOS: 0x30de60
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("SecretLayer3::onExit not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x401c1c
     * @note[short] MacOS (Intel): 0x4953f0
     * @note[short] iOS: 0x31197c
     * @note[short] Android
     */
    virtual void onExit();
public:

    /**
     * @note[short] MacOS (ARM): 0x401c10
     * @note[short] MacOS (Intel): 0x4953c0
     * @note[short] Windows: 0x3d8420
     * @note[short] iOS: 0x311970
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4018d8
     * @note[short] MacOS (Intel): 0x4950a0
     * @note[short] Windows: 0x3d7e20
     * @note[short] iOS: 0x311714
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
    
private:
    [[deprecated("SecretLayer3::animateEyes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animateEyes();
public:
    
private:
    [[deprecated("SecretLayer3::firstInteractionStep1 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn firstInteractionStep1();
public:
    
private:
    [[deprecated("SecretLayer3::firstInteractionStep2 not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3ffa5c
     * @note[short] MacOS (Intel): 0x493020
     * @note[short] Android
     */
    TodoReturn firstInteractionStep2();
public:
    
private:
    [[deprecated("SecretLayer3::firstInteractionStep3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn firstInteractionStep3();
public:
    
private:
    [[deprecated("SecretLayer3::firstInteractionStep4 not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3fffa0
     * @note[short] MacOS (Intel): 0x4935b0
     * @note[short] Android
     */
    TodoReturn firstInteractionStep4();
public:
    
private:
    [[deprecated("SecretLayer3::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer3::onChest01 not implemented")]]
    /**
     * @note[short] Android
     */
    void onChest01(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer3::onChest02 not implemented")]]
    /**
     * @note[short] Android
     */
    void onChest02(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x3fe930
     * @note[short] MacOS (Intel): 0x491cf0
     * @note[short] Windows: 0x3d5090
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SecretLayer3::revealStep1 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn revealStep1();
public:
    
private:
    [[deprecated("SecretLayer3::revealStep2 not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x400938
     * @note[short] MacOS (Intel): 0x493f90
     * @note[short] Android
     */
    TodoReturn revealStep2();
public:
    
private:
    [[deprecated("SecretLayer3::revealStep3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn revealStep3();
public:
    
private:
    [[deprecated("SecretLayer3::revealStep4 not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x400cdc
     * @note[short] MacOS (Intel): 0x494350
     * @note[short] Android
     */
    TodoReturn revealStep4();
public:
    
private:
    [[deprecated("SecretLayer3::revealStep5 not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x401420
     * @note[short] MacOS (Intel): 0x494b70
     * @note[short] Android
     */
    TodoReturn revealStep5();
public:
    
private:
    [[deprecated("SecretLayer3::showUnlockDialog not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4003cc
     * @note[short] MacOS (Intel): 0x4939e0
     * @note[short] Android
     */
    void showUnlockDialog();
public:
    DungeonBarsSprite* m_dungeonBars;
    bool m_lockInput;
    cocos2d::CCArray* m_locksArray;
    cocos2d::CCSprite* m_demonEyes;
    cocos2d::CCSprite* m_demonBody;
    CCMenuItemSpriteExtra* m_secretChest;
};
