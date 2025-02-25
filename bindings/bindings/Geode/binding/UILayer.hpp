#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UILayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "UILayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UILayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("UILayer::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x41cac4
     * @note[short] MacOS (Intel): 0x4b4870
     * @note[short] Android
     */
    static UILayer* create(GJBaseGameLayer* p0);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static UILayer* get();

    /**
     * @note[short] MacOS (ARM): 0x41e594
     * @note[short] MacOS (Intel): 0x4b6710
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4dcc8
     * @note[short] Android: Out of line
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x41e5e4
     * @note[short] MacOS (Intel): 0x4b6760
     * @note[short] Windows: 0x4b55a0
     * @note[short] iOS: 0x4dd08
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x41e840
     * @note[short] MacOS (Intel): 0x4b6940
     * @note[short] Windows: 0x4b5730
     * @note[short] iOS: 0x4df14
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x41e974
     * @note[short] MacOS (Intel): 0x4b6a40
     * @note[short] Windows: 0x4b5750
     * @note[short] iOS: 0x4df48
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("UILayer::ccTouchCancelled not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x41f284
     * @note[short] MacOS (Intel): 0x4b7280
     * @note[short] iOS: 0x4e4c4
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("UILayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x41f2a0
     * @note[short] MacOS (Intel): 0x4b72c0
     * @note[short] iOS: 0x4e4e0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x41e1a8
     * @note[short] MacOS (Intel): 0x4b62f0
     * @note[short] Windows: 0x4b5300
     * @note[short] iOS: 0x4db78
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x41e168
     * @note[short] MacOS (Intel): 0x4b6250
     * @note[short] Windows: 0x4b52e0
     * @note[short] iOS: 0x4db38
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x41e188
     * @note[short] MacOS (Intel): 0x4b62a0
     * @note[short] Windows: 0x4b52f0
     * @note[short] iOS: 0x4db58
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
    
private:
    [[deprecated("UILayer::disableMenu not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x4b5c30
     * @note[short] Android
     */
    void disableMenu();
public:
    
private:
    [[deprecated("UILayer::doPause not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x4b63b0
     * @note[short] Android
     */
    void doPause();
public:
    
private:
    [[deprecated("UILayer::editorPlaytest not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x4b5c50
     * @note[short] Android
     */
    TodoReturn editorPlaytest(bool p0);
public:
    
private:
    [[deprecated("UILayer::enableEditorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void enableEditorMode();
public:
    
private:
    [[deprecated("UILayer::enableMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enableMenu();
public:

    /**
     * @note[short] MacOS (ARM): 0x41de7c
     * @note[short] MacOS (Intel): 0x4b5d70
     * @note[short] Windows: 0x4b4c40
     * @note[short] Android
     */
    void handleKeypress(cocos2d::enumKeyCodes p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x41cbc4
     * @note[short] MacOS (Intel): 0x4b49b0
     * @note[short] Windows: 0x4b3f20
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* p0);
    
private:
    [[deprecated("UILayer::isJumpButtonPressed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x41e598
     * @note[short] MacOS (Intel): 0x4b6720
     * @note[short] Android
     */
    bool isJumpButtonPressed(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x41d3e8
     * @note[short] MacOS (Intel): 0x4b5230
     * @note[short] Windows: 0x4b54d0
     * @note[short] Android
     */
    void onCheck(cocos2d::CCObject* sender);
    
private:
    [[deprecated("UILayer::onDeleteCheck not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteCheck(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x41d39c
     * @note[short] MacOS (Intel): 0x4b51e0
     * @note[short] Windows: 0x4b53c0
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41e6ec
     * @note[short] MacOS (Intel): 0x4b6880
     * @note[short] Windows: 0x4b5820
     * @note[short] Android
     */
    bool processUINodesTouch(GJUITouchEvent p0, cocos2d::CCTouch* p1);

    /**
     * @note[short] Windows: 0x4b58d0
     * @note[short] Android
     */
    bool processUINodeTouch(GJUITouchEvent p0, int p1, cocos2d::CCPoint p2, GJUINode* p3);
    
private:
    [[deprecated("UILayer::refreshDpad not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x4b55f0
     * @note[short] Android
     */
    TodoReturn refreshDpad();
public:
    
private:
    [[deprecated("UILayer::resetAllButtons not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x41e4b4
     * @note[short] MacOS (Intel): 0x4b6620
     * @note[short] Android
     */
    void resetAllButtons();
public:

    /**
     * @note[short] MacOS (ARM): 0x41dac0
     * @note[short] MacOS (Intel): 0x4b5990
     * @note[short] Windows: 0x4b4aa0
     * @note[short] Android
     */
    void resetUINodeState();
    
private:
    [[deprecated("UILayer::toggleCheckpointsMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleCheckpointsMenu(bool p0);
public:
    
private:
    [[deprecated("UILayer::toggleMenuVisibility not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x41e384
     * @note[short] MacOS (Intel): 0x4b64e0
     * @note[short] Android
     */
    void toggleMenuVisibility(bool p0);
public:
    
private:
    [[deprecated("UILayer::togglePlatformerMode not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x4b5470
     * @note[short] Android
     */
    void togglePlatformerMode(bool p0);
public:
    
private:
    [[deprecated("UILayer::updateCheckState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCheckState();
public:
    
private:
    [[deprecated("UILayer::updateDualMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDualMode(bool p0);
public:
    
private:
    [[deprecated("UILayer::updateUINodeVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateUINodeVisibility(bool p0);
public:
    void* m_stupidDelegate;
    void* m_pUnknown1;
    cocos2d::CCMenu* m_checkpointMenu;
    CCMenuItemSpriteExtra* m_pauseBtn;
    bool m_bUnknown2;
    bool m_bUnknown3;
    bool m_p1Jumping;
    bool m_p2Jumping;
    bool m_checkpointBtnDown;
    int m_p1TouchId;
    int m_p2TouchId;
    float m_clkTimer;
    bool m_inPlatformer;
    GJBaseGameLayer* m_gameLayer;
    bool m_initialized;
    cocos2d::CCArray* m_uiNodes;
    bool m_dualMode;
    bool m_dpadType;
    bool m_editorMode;
};
