#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSmartTemplate : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJSmartTemplate";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartTemplate, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x2a92e0
     * @note[short] Android
     */
    static GJSmartTemplate* create();

    /**
     * @note[short] MacOS (ARM): 0x3912e8
     * @note[short] MacOS (Intel): 0x415960
     * @note[short] Windows: 0x2ae150
     * @note[short] iOS: 0xc430
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x390f40
     * @note[short] MacOS (Intel): 0x415580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xc1c4
     * @note[short] Android: Out of line
     */
    virtual bool canEncode();

    /**
     * @note[short] Windows: 0x2ac080
     * @note[short] Android
     */
    static void applyTransformationsForType(SmartBlockType p0, cocos2d::CCSprite* p1);

    /**
     * @note[short] MacOS (ARM): 0x390f48
     * @note[short] MacOS (Intel): 0x415590
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJSmartTemplate* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] Windows: 0x2ade80
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Windows: 0x2ac9b0
     * @note[short] Android
     */
    static SmartBlockType flipBlockType(SmartBlockType p0, bool p1, bool p2);
    
private:
    [[deprecated("GJSmartTemplate::flipBlockTypeX not implemented")]]
    /**
     * @note[short] Android
     */
    static SmartBlockType flipBlockTypeX(SmartBlockType p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::flipBlockTypeY not implemented")]]
    /**
     * @note[short] Android
     */
    static SmartBlockType flipBlockTypeY(SmartBlockType p0);
public:

    /**
     * @note[short] Windows: 0x2acfc0
     * @note[short] Android
     */
    static gd::string flipKey(gd::string p0, bool p1, bool p2);
    
private:
    [[deprecated("GJSmartTemplate::generateRemapDict not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCDictionary* generateRemapDict();
public:

    /**
     * @note[short] Windows: 0x2aa300
     * @note[short] Android
     */
    gd::string getNoCornerKey(gd::string p0);
    
private:
    [[deprecated("GJSmartTemplate::getPrefab not implemented")]]
    /**
     * @note[short] Android
     */
    GJSmartPrefab* getPrefab(cocos2d::CCPoint p0, SmartGameObject* p1, SmartGameObject* p2, SmartGameObject* p3, SmartGameObject* p4, SmartGameObject* p5, SmartGameObject* p6, SmartGameObject* p7, SmartGameObject* p8, SmartGameObject* p9);
public:

    /**
     * @note[short] Windows: 0x2ab4e0
     * @note[short] Android
     */
    GJSmartPrefab* getPrefab(gd::string p0, bool p1, bool p2);
    
private:
    [[deprecated("GJSmartTemplate::getPrefabs not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getPrefabs(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x2abdd0
     * @note[short] Android
     */
    GJSmartPrefab* getPrefabWithID(gd::string p0, int p1);
    
private:
    [[deprecated("GJSmartTemplate::getRandomPrefab not implemented")]]
    /**
     * @note[short] Android
     */
    GJSmartPrefab* getRandomPrefab(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x2a9a10
     * @note[short] Android
     */
    static gd::string getSimplifiedKey(gd::string p0);
    
private:
    [[deprecated("GJSmartTemplate::getSimplifiedType not implemented")]]
    /**
     * @note[short] Android
     */
    static SmartBlockType getSimplifiedType(SmartBlockType p0, bool& p1);
public:

    /**
     * @note[short] Windows: 0x2ad890
     * @note[short] Android
     */
    void getTemplateState(gd::vector<SmartPrefabResult>& p0);

    /**
     * @note[short] Windows: 0x2ab2b0
     * @note[short] Android
     */
    int getTotalChanceForPrefab(gd::string p0);

    /**
     * @note[short] MacOS (Intel): 0x411170
     * @note[short] Windows: 0x2aa1f0
     * @note[short] Android
     */
    static gd::string getVerySimplifiedKey(gd::string p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Windows: 0x2ad6f0
     * @note[short] Android
     */
    bool isUnrequired(gd::string p0);

    /**
     * @note[short] Windows: 0x2ac450
     * @note[short] Android
     */
    static gd::string keyFromNeighbors(cocos2d::CCPoint p0, SmartGameObject* p1, SmartGameObject* p2, SmartGameObject* p3, SmartGameObject* p4, SmartGameObject* p5, SmartGameObject* p6, SmartGameObject* p7, SmartGameObject* p8, SmartGameObject* p9);
    
private:
    [[deprecated("GJSmartTemplate::keyFromNeighbors not implemented")]]
    /**
     * @note[short] Android
     */
    static gd::string keyFromNeighbors(SmartBlockType p0, SmartBlockType p1, SmartBlockType p2, SmartBlockType p3, SmartBlockType p4, SmartBlockType p5, SmartBlockType p6, SmartBlockType p7, SmartBlockType p8);
public:
    
private:
    [[deprecated("GJSmartTemplate::keyFromNeighborsOld not implemented")]]
    /**
     * @note[short] Android
     */
    static gd::string keyFromNeighborsOld(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7);
public:

    /**
     * @note[short] MacOS (ARM): 0x390450
     * @note[short] MacOS (Intel): 0x4148f0
     * @note[short] Windows: 0x2ad2f0
     * @note[short] Android
     */
    gd::string logTemplateStatus(bool p0);

    /**
     * @note[short] Windows: 0x2abe90
     * @note[short] Android
     */
    static cocos2d::CCPoint offsetForDir(GJSmartDirection p0, int p1);
    
private:
    [[deprecated("GJSmartTemplate::offsetForObject not implemented")]]
    /**
     * @note[short] Android
     */
    static cocos2d::CCPoint offsetForObject(SmartGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x2abf90
     * @note[short] Android
     */
    static cocos2d::CCPoint offsetForType(SmartBlockType p0);
    
private:
    [[deprecated("GJSmartTemplate::removePrefab not implemented")]]
    /**
     * @note[short] Android
     */
    void removePrefab(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJSmartTemplate::resetScannedPrefabs not implemented")]]
    /**
     * @note[short] Android
     */
    void resetScannedPrefabs();
public:

    /**
     * @note[short] Windows: 0x2ac840
     * @note[short] Android
     */
    static SmartBlockType rotateBlockType(SmartBlockType p0, int p1);
    
private:
    [[deprecated("GJSmartTemplate::rotateBlockType90 not implemented")]]
    /**
     * @note[short] Android
     */
    static SmartBlockType rotateBlockType90(SmartBlockType p0);
public:

    /**
     * @note[short] Windows: 0x2acc60
     * @note[short] Android
     */
    static gd::string rotateKey(gd::string p0, int p1);
    
private:
    [[deprecated("GJSmartTemplate::savePrefab not implemented")]]
    /**
     * @note[short] Android
     */
    void savePrefab(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] Windows: 0x2a9460
     * @note[short] Android
     */
    void saveRemap(gd::string p0);

    /**
     * @note[short] MacOS (Intel): 0x410e20
     * @note[short] Windows: 0x2a9830
     * @note[short] Android
     */
    void saveRemapToDict(gd::string p0, gd::string p1, cocos2d::CCDictionary* p2);

    /**
     * @note[short] Windows: 0x2aa480
     * @note[short] Android
     */
    SmartPrefabResult scanForPrefab(gd::string p0);
    
private:
    [[deprecated("GJSmartTemplate::shouldDiscardObject not implemented")]]
    /**
     * @note[short] Android
     */
    static bool shouldDiscardObject(SmartBlockType p0, GJSmartDirection p1);
public:

    /**
     * @note[short] Windows: 0x2ac1c0
     * @note[short] Android
     */
    static SmartBlockType smartObjectToType(SmartGameObject* p0, cocos2d::CCPoint p1);
    
private:
    [[deprecated("GJSmartTemplate::smartTypeToObjectKey not implemented")]]
    /**
     * @note[short] Android
     */
    static int smartTypeToObjectKey(SmartBlockType p0);
public:
    cocos2d::CCDictionary* m_prefabArrays;
    cocos2d::CCDictionary* m_remapDict1;
    cocos2d::CCDictionary* m_remapDict2;
    cocos2d::CCDictionary* m_remapDict3;
    cocos2d::CCDictionary* m_remapDict4;
    cocos2d::CCDictionary* m_remapDict5;
    cocos2d::CCDictionary* m_remapDict6;
    gd::map<gd::string, SmartPrefabResult> m_prefabResults;
    bool m_allowFlipX;
    bool m_allowFlipY;
    bool m_allowRotation;
    bool m_ignoreCorners;
    gd::string m_templateName;
    gd::string m_unk0a8;
    int m_nameIndex;
    int m_prefabIndex;
};
