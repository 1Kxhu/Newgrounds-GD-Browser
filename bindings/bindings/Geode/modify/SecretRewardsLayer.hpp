#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretRewardsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerMoved
		#define GEODE_STATICS_scrollLayerMoved
		GEODE_AS_STATIC_FUNCTION(scrollLayerMoved) 
	#endif

	#ifndef GEODE_STATICS_createSecondaryLayer
		#define GEODE_STATICS_createSecondaryLayer
		GEODE_AS_STATIC_FUNCTION(createSecondaryLayer) 
	#endif

	#ifndef GEODE_STATICS_fadeInMusic
		#define GEODE_STATICS_fadeInMusic
		GEODE_AS_STATIC_FUNCTION(fadeInMusic) 
	#endif

	#ifndef GEODE_STATICS_fadeInOutMusic
		#define GEODE_STATICS_fadeInOutMusic
		GEODE_AS_STATIC_FUNCTION(fadeInOutMusic) 
	#endif

	#ifndef GEODE_STATICS_generateChestItems
		#define GEODE_STATICS_generateChestItems
		GEODE_AS_STATIC_FUNCTION(generateChestItems) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_moveToMainLayer
		#define GEODE_STATICS_moveToMainLayer
		GEODE_AS_STATIC_FUNCTION(moveToMainLayer) 
	#endif

	#ifndef GEODE_STATICS_moveToSecondaryLayer
		#define GEODE_STATICS_moveToSecondaryLayer
		GEODE_AS_STATIC_FUNCTION(moveToSecondaryLayer) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onChestType
		#define GEODE_STATICS_onChestType
		GEODE_AS_STATIC_FUNCTION(onChestType) 
	#endif

	#ifndef GEODE_STATICS_onGoldChest
		#define GEODE_STATICS_onGoldChest
		GEODE_AS_STATIC_FUNCTION(onGoldChest) 
	#endif

	#ifndef GEODE_STATICS_onSelectItem
		#define GEODE_STATICS_onSelectItem
		GEODE_AS_STATIC_FUNCTION(onSelectItem) 
	#endif

	#ifndef GEODE_STATICS_onShop
		#define GEODE_STATICS_onShop
		GEODE_AS_STATIC_FUNCTION(onShop) 
	#endif

	#ifndef GEODE_STATICS_onSpecialItem
		#define GEODE_STATICS_onSpecialItem
		GEODE_AS_STATIC_FUNCTION(onSpecialItem) 
	#endif

	#ifndef GEODE_STATICS_onSwitchPage
		#define GEODE_STATICS_onSwitchPage
		GEODE_AS_STATIC_FUNCTION(onSwitchPage) 
	#endif

	#ifndef GEODE_STATICS_showDialog01
		#define GEODE_STATICS_showDialog01
		GEODE_AS_STATIC_FUNCTION(showDialog01) 
	#endif

	#ifndef GEODE_STATICS_showDialog03
		#define GEODE_STATICS_showDialog03
		GEODE_AS_STATIC_FUNCTION(showDialog03) 
	#endif

	#ifndef GEODE_STATICS_showDialogDiamond
		#define GEODE_STATICS_showDialogDiamond
		GEODE_AS_STATIC_FUNCTION(showDialogDiamond) 
	#endif

	#ifndef GEODE_STATICS_showDialogMechanic
		#define GEODE_STATICS_showDialogMechanic
		GEODE_AS_STATIC_FUNCTION(showDialogMechanic) 
	#endif

	#ifndef GEODE_STATICS_showLockedChest
		#define GEODE_STATICS_showLockedChest
		GEODE_AS_STATIC_FUNCTION(showLockedChest) 
	#endif

	#ifndef GEODE_STATICS_switchToOpenedState
		#define GEODE_STATICS_switchToOpenedState
		GEODE_AS_STATIC_FUNCTION(switchToOpenedState) 
	#endif

	#ifndef GEODE_STATICS_updateBackButton
		#define GEODE_STATICS_updateBackButton
		GEODE_AS_STATIC_FUNCTION(updateBackButton) 
	#endif

	#ifndef GEODE_STATICS_updateUnlockedGoldLabel
		#define GEODE_STATICS_updateUnlockedGoldLabel
		GEODE_AS_STATIC_FUNCTION(updateUnlockedGoldLabel) 
	#endif

	#ifndef GEODE_STATICS_updateUnlockedLabel
		#define GEODE_STATICS_updateUnlockedLabel
		GEODE_AS_STATIC_FUNCTION(updateUnlockedLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dialogClosed
		#define GEODE_CONCEPT_CHECK_dialogClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dialogClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayerMoved
		#define GEODE_CONCEPT_CHECK_scrollLayerMoved
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayerMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSecondaryLayer
		#define GEODE_CONCEPT_CHECK_createSecondaryLayer
		GEODE_CONCEPT_FUNCTION_CHECK(createSecondaryLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInMusic
		#define GEODE_CONCEPT_CHECK_fadeInMusic
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInOutMusic
		#define GEODE_CONCEPT_CHECK_fadeInOutMusic
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInOutMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateChestItems
		#define GEODE_CONCEPT_CHECK_generateChestItems
		GEODE_CONCEPT_FUNCTION_CHECK(generateChestItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPageColor
		#define GEODE_CONCEPT_CHECK_getPageColor
		GEODE_CONCEPT_FUNCTION_CHECK(getPageColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToPage
		#define GEODE_CONCEPT_CHECK_goToPage
		GEODE_CONCEPT_FUNCTION_CHECK(goToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveToMainLayer
		#define GEODE_CONCEPT_CHECK_moveToMainLayer
		GEODE_CONCEPT_FUNCTION_CHECK(moveToMainLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveToSecondaryLayer
		#define GEODE_CONCEPT_CHECK_moveToSecondaryLayer
		GEODE_CONCEPT_FUNCTION_CHECK(moveToSecondaryLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChestType
		#define GEODE_CONCEPT_CHECK_onChestType
		GEODE_CONCEPT_FUNCTION_CHECK(onChestType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGoldChest
		#define GEODE_CONCEPT_CHECK_onGoldChest
		GEODE_CONCEPT_FUNCTION_CHECK(onGoldChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectItem
		#define GEODE_CONCEPT_CHECK_onSelectItem
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShop
		#define GEODE_CONCEPT_CHECK_onShop
		GEODE_CONCEPT_FUNCTION_CHECK(onShop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSpecialItem
		#define GEODE_CONCEPT_CHECK_onSpecialItem
		GEODE_CONCEPT_FUNCTION_CHECK(onSpecialItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSwitchPage
		#define GEODE_CONCEPT_CHECK_onSwitchPage
		GEODE_CONCEPT_FUNCTION_CHECK(onSwitchPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showDialog01
		#define GEODE_CONCEPT_CHECK_showDialog01
		GEODE_CONCEPT_FUNCTION_CHECK(showDialog01) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showDialog03
		#define GEODE_CONCEPT_CHECK_showDialog03
		GEODE_CONCEPT_FUNCTION_CHECK(showDialog03) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showDialogDiamond
		#define GEODE_CONCEPT_CHECK_showDialogDiamond
		GEODE_CONCEPT_FUNCTION_CHECK(showDialogDiamond) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showDialogMechanic
		#define GEODE_CONCEPT_CHECK_showDialogMechanic
		GEODE_CONCEPT_FUNCTION_CHECK(showDialogMechanic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLockedChest
		#define GEODE_CONCEPT_CHECK_showLockedChest
		GEODE_CONCEPT_FUNCTION_CHECK(showLockedChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showShop
		#define GEODE_CONCEPT_CHECK_showShop
		GEODE_CONCEPT_FUNCTION_CHECK(showShop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToOpenedState
		#define GEODE_CONCEPT_CHECK_switchToOpenedState
		GEODE_CONCEPT_FUNCTION_CHECK(switchToOpenedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBackButton
		#define GEODE_CONCEPT_CHECK_updateBackButton
		GEODE_CONCEPT_FUNCTION_CHECK(updateBackButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUnlockedGoldLabel
		#define GEODE_CONCEPT_CHECK_updateUnlockedGoldLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateUnlockedGoldLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUnlockedLabel
		#define GEODE_CONCEPT_CHECK_updateUnlockedLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateUnlockedLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SecretRewardsLayer> : ModifyBase<ModifyDerive<Der, SecretRewardsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretRewardsLayer>>;
		using ModifyBase<ModifyDerive<Der, SecretRewardsLayer>>::ModifyBase;
		using Base = SecretRewardsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretRewardsLayer, create, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bb1a0, Default, SecretRewardsLayer, scene, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SecretRewardsLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c0a90, Thiscall, SecretRewardsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bf570, Thiscall, SecretRewardsLayer, dialogClosed, DialogLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bda10, Thiscall, SecretRewardsLayer, scrollLayerMoved, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bdf70, Thiscall, SecretRewardsLayer, createSecondaryLayer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SecretRewardsLayer, fadeInMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SecretRewardsLayer, fadeInOutMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3be3c0, Thiscall, SecretRewardsLayer, generateChestItems, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretRewardsLayer, getPageColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretRewardsLayer, goToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bb300, Thiscall, SecretRewardsLayer, init, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SecretRewardsLayer, moveToMainLayer, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SecretRewardsLayer, moveToSecondaryLayer, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c08b0, Thiscall, SecretRewardsLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bdce0, Thiscall, SecretRewardsLayer, onChestType, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c0020, Thiscall, SecretRewardsLayer, onGoldChest, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bedd0, Thiscall, SecretRewardsLayer, onSelectItem, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bf360, Thiscall, SecretRewardsLayer, onShop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bf760, Thiscall, SecretRewardsLayer, onSpecialItem, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bd950, Thiscall, SecretRewardsLayer, onSwitchPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c0ae0, Thiscall, SecretRewardsLayer, showDialog01, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SecretRewardsLayer, showDialog03, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c4980, Thiscall, SecretRewardsLayer, showDialogDiamond, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c36f0, Thiscall, SecretRewardsLayer, showDialogMechanic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SecretRewardsLayer, showLockedChest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretRewardsLayer, showShop, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bfb80, Thiscall, SecretRewardsLayer, switchToOpenedState, CCMenuItemSpriteExtra*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bde30, Thiscall, SecretRewardsLayer, updateBackButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SecretRewardsLayer, updateUnlockedGoldLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SecretRewardsLayer, updateUnlockedLabel, )
		}
	};
}
