#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_initScenes
		#define GEODE_STATICS_initScenes
		GEODE_AS_STATIC_FUNCTION(initScenes) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initScenes
		#define GEODE_CONCEPT_CHECK_initScenes
		GEODE_CONCEPT_FUNCTION_CHECK(initScenes) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionMoveInR> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionMoveInR>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionMoveInR>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionMoveInR>>::ModifyBase;
		using Base = cocos2d::CCTransitionMoveInR;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCScene*>::func(&cocos2d::CCTransitionMoveInR::create)), Default, cocos2d::CCTransitionMoveInR, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionMoveInR::initScenes)), Thiscall, cocos2d::CCTransitionMoveInR, initScenes, )
		}
	};
}
