#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GooglePlayManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GooglePlayManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GooglePlayManager, cocos2d::CCNode)
    
private:
    [[deprecated("GooglePlayManager::sharedState not implemented")]]
    /**
     * @note[short] Android
     */
    static GooglePlayManager* sharedState();
public:
    
private:
    [[deprecated("GooglePlayManager::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3d51f8
     * @note[short] MacOS (Intel): 0x465240
     * @note[short] iOS: 0x45938
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GooglePlayManager::googlePlaySignedIn not implemented")]]
    /**
     * @note[short] Android
     */
    void googlePlaySignedIn();
public:
};
