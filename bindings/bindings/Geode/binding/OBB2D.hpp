#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class OBB2D : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "OBB2D";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(OBB2D, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x50edb8
     * @note[short] MacOS (Intel): 0x5dbcf0
     * @note[short] Windows: 0x6d880
     * @note[short] Android
     */
    static OBB2D* create(cocos2d::CCPoint center, float width, float height, float rotationAngle);

    /**
     * @note[short] MacOS (ARM): 0x50ef3c
     * @note[short] MacOS (Intel): 0x5dbe20
     * @note[short] Windows: 0x6da50
     * @note[short] Android
     */
    void calculateWithCenter(cocos2d::CCPoint center, float width, float height, float rotationAngle);
    
private:
    [[deprecated("OBB2D::computeAxes not implemented")]]
    /**
     * @note[short] Android
     */
    void computeAxes();
public:
    
private:
    [[deprecated("OBB2D::getBoundingRect not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCRect getBoundingRect();
public:
    
private:
    [[deprecated("OBB2D::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x50eebc
     * @note[short] MacOS (Intel): 0x5dbdb0
     * @note[short] Android
     */
    bool init(cocos2d::CCPoint center, float width, float height, float rotationAngle);
public:

    /**
     * @note[short] Windows: 0x6dd70
     * @note[short] Android
     */
    void orderCorners();
    
private:
    [[deprecated("OBB2D::overlaps not implemented")]]
    /**
     * @note[short] Android
     */
    bool overlaps(OBB2D* p0);
public:

    /**
     * @note[short] Windows: 0x6e100
     * @note[short] Android
     */
    bool overlaps1Way(OBB2D* p0);
    std::array<cocos2d::CCPoint, 4> m_corners;
    std::array<cocos2d::CCPoint, 4> m_positions;
    cocos2d::CCPoint m_horizontalDifference;
    cocos2d::CCPoint m_verticalDifference;
    std::array<cocos2d::CCPoint, 4> m_axes;
    cocos2d::CCPoint m_center;
};
