#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class KeyframeObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeObject";

    /**
     * @note[short] Windows: 0x2b9730
     * @note[short] Android
     */
    void setupSpline(gd::vector<KeyframeObject*>& p0);
    double m_unk000;
    int m_unk008;
    float m_unk00c;
    bool m_unk010;
    int m_unk014;
    float m_unk018;
    bool m_unk01c;
    bool m_unk01d;
    bool m_unk01e;
    gd::vector<double> m_spline1X;
    gd::vector<double> m_spline1Y;
    gd::vector<double> m_spline1B;
    gd::vector<double> m_spline1C;
    gd::vector<double> m_spline1D;
    double m_spline1C0;
    int m_spline1Type;
    int m_spline1Left;
    int m_spline1Right;
    double m_spline1LeftValue;
    double m_spline1RightValue;
    bool m_spline1MadeMonotonic;
    gd::vector<double> m_spline2X;
    gd::vector<double> m_spline2Y;
    gd::vector<double> m_spline2B;
    gd::vector<double> m_spline2C;
    gd::vector<double> m_spline2D;
    double m_spline2C0;
    int m_spline2Type;
    int m_spline2Left;
    int m_spline2Right;
    double m_spline2LeftValue;
    double m_spline2RightValue;
    bool m_spline2MadeMonotonic;
    double m_unk170;
    double m_unk178;
    int m_unk180;
    int m_unk184;
    cocos2d::CCPoint m_unk188;
    cocos2d::CCPoint m_unk190;
    double m_unk198;
    double m_unk1a0;
    double m_unk1a8;
    double m_unk1b0;
    float m_unk1b8;
};
