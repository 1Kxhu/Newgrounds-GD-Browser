#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ChanceObject {
public:
    static constexpr auto CLASS_NAME = "ChanceObject";
    int m_groupID;
    int m_oldGroupID;
    int m_chance;
    int m_unk00c;
};
