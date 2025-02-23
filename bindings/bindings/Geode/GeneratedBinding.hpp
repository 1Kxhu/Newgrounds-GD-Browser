#include "binding/Standalones.hpp"
#include "binding/FMODSound.hpp"
#include "binding/AdvancedFollowInstance.hpp"
#include "binding/SFXTriggerInstance.hpp"
#include "binding/EventTriggerInstance.hpp"
#include "binding/SongChannelState.hpp"
#include "binding/SongTriggerState.hpp"
#include "binding/SFXTriggerState.hpp"
#include "binding/ChanceObject.hpp"
#include "binding/SmartPrefabResult.hpp"
#include "binding/GameObjectPhysics.hpp"
#include "binding/DynamicObjectAction.hpp"
#include "binding/GJTransformState.hpp"
#include "binding/CAState.hpp"
#include "binding/GJPointDouble.hpp"
#include "binding/DynamicSaveObject.hpp"
#include "binding/ActiveSaveObject1.hpp"
#include "binding/ActiveSaveObject2.hpp"
#include "binding/SequenceTriggerState.hpp"
#include "binding/FMODSoundTween.hpp"
#include "binding/FMODQueuedMusic.hpp"
#include "binding/FMODSoundState.hpp"
#include "binding/TimerItem.hpp"
#include "binding/EnterEffectAnimValue.hpp"
#include "binding/DynamicMoveCalculation.hpp"
#include "binding/GJDropDownLayer.hpp"
#include "binding/GJAccountDelegate.hpp"
#include "binding/FLAlertLayerProtocol.hpp"
#include "binding/AccountHelpLayer.hpp"
#include "binding/GJAccountBackupDelegate.hpp"
#include "binding/GJAccountSyncDelegate.hpp"
#include "binding/AccountLayer.hpp"
#include "binding/FLAlertLayer.hpp"
#include "binding/TextInputDelegate.hpp"
#include "binding/GJAccountLoginDelegate.hpp"
#include "binding/AccountLoginLayer.hpp"
#include "binding/GJAccountRegisterDelegate.hpp"
#include "binding/AccountRegisterLayer.hpp"
#include "binding/AchievementBar.hpp"
#include "binding/CCIndexPath.hpp"
#include "binding/TableViewCell.hpp"
#include "binding/AchievementCell.hpp"
#include "binding/AchievementManager.hpp"
#include "binding/AchievementNotifier.hpp"
#include "binding/AchievementsLayer.hpp"
#include "binding/AdToolbox.hpp"
#include "binding/CCSpritePlus.hpp"
#include "binding/GameObject.hpp"
#include "binding/EnhancedGameObject.hpp"
#include "binding/EffectGameObject.hpp"
#include "binding/AdvancedFollowTriggerObject.hpp"
#include "binding/AdvancedFollowEditObject.hpp"
#include "binding/AdvFollowSetup.hpp"
#include "binding/AnimatedSpriteDelegate.hpp"
#include "binding/SpritePartDelegate.hpp"
#include "binding/AnimatedGameObject.hpp"
#include "binding/CCAnimatedSprite.hpp"
#include "binding/AnimatedShopKeeper.hpp"
#include "binding/AppDelegate.hpp"
#include "binding/ArtistCell.hpp"
#include "binding/ArtTriggerGameObject.hpp"
#include "binding/TableViewCellDelegate.hpp"
#include "binding/MusicDownloadDelegate.hpp"
#include "binding/AudioAssetsBrowser.hpp"
#include "binding/AudioEffectsLayer.hpp"
#include "binding/AudioLineGuideGameObject.hpp"
#include "binding/BitmapFontCache.hpp"
#include "binding/BonusDropdown.hpp"
#include "binding/BoomListLayer.hpp"
#include "binding/TableViewDelegate.hpp"
#include "binding/TableViewDataSource.hpp"
#include "binding/BoomListView.hpp"
#include "binding/BoomScrollLayer.hpp"
#include "binding/BoomScrollLayerDelegate.hpp"
#include "binding/BrowseSmartTemplateLayer.hpp"
#include "binding/BrowseSmartKeyLayer.hpp"
#include "binding/ButtonPage.hpp"
#include "binding/ButtonSprite.hpp"
#include "binding/CameraTriggerGameObject.hpp"
#include "binding/CCAlertCircle.hpp"
#include "binding/CCAnimateFrameCache.hpp"
#include "binding/CCBlockLayer.hpp"
#include "binding/CCCircleWave.hpp"
#include "binding/CCCircleAlert.hpp"
#include "binding/CCCircleWaveDelegate.hpp"
#include "binding/CCContentLayer.hpp"
#include "binding/CCCountdown.hpp"
#include "binding/CCCounterLabel.hpp"
#include "binding/CCExtenderNode.hpp"
#include "binding/CCLightFlash.hpp"
#include "binding/CCLightStrip.hpp"
#include "binding/CCMenuItemSpriteExtra.hpp"
#include "binding/CCMenuItemToggler.hpp"
#include "binding/CCMoveCNode.hpp"
#include "binding/CCNodeContainer.hpp"
#include "binding/CCPartAnimSprite.hpp"
#include "binding/CCScrollLayerExt.hpp"
#include "binding/CCScrollLayerExtDelegate.hpp"
#include "binding/CCSpriteCOpacity.hpp"
#include "binding/CCSpriteWithHue.hpp"
#include "binding/CCSpriteGrayscale.hpp"
#include "binding/CCSpritePart.hpp"
#include "binding/CCTextInputNode.hpp"
#include "binding/CCURLObject.hpp"
#include "binding/GJChallengeDelegate.hpp"
#include "binding/CurrencyRewardDelegate.hpp"
#include "binding/ChallengesPage.hpp"
#include "binding/GJChallengeItem.hpp"
#include "binding/ChallengeNode.hpp"
#include "binding/ChanceTriggerGameObject.hpp"
#include "binding/CharacterColorDelegate.hpp"
#include "binding/CharacterColorPage.hpp"
#include "binding/CheckpointGameObject.hpp"
#include "binding/EnterEffectInstance.hpp"
#include "binding/GJValueTween.hpp"
#include "binding/GJGameState.hpp"
#include "binding/GJShaderState.hpp"
#include "binding/FMODAudioState.hpp"
#include "binding/PulseEffectAction.hpp"
#include "binding/CountTriggerAction.hpp"
#include "binding/OpacityEffectAction.hpp"
#include "binding/TouchToggleAction.hpp"
#include "binding/CollisionTriggerAction.hpp"
#include "binding/ToggleTriggerAction.hpp"
#include "binding/SpawnTriggerAction.hpp"
#include "binding/KeyframeObject.hpp"
#include "binding/GroupCommandObject2.hpp"
#include "binding/TimerTriggerAction.hpp"
#include "binding/EffectManagerState.hpp"
#include "binding/CheckpointObject.hpp"
#include "binding/CollisionBlockPopup.hpp"
#include "binding/ColorAction.hpp"
#include "binding/ColorAction2.hpp"
#include "binding/ColorActionSprite.hpp"
#include "binding/ColorChannelSprite.hpp"
#include "binding/ColorSelectDelegate.hpp"
#include "binding/ColorSelectLiveOverlay.hpp"
#include "binding/ConfigureValuePopupDelegate.hpp"
#include "binding/SliderDelegate.hpp"
#include "binding/SetupTriggerPopup.hpp"
#include "binding/GJSpecialColorSelectDelegate.hpp"
#include "binding/ColorSelectPopup.hpp"
#include "binding/ColorSetupDelegate.hpp"
#include "binding/LikeItemDelegate.hpp"
#include "binding/CommentCell.hpp"
#include "binding/CommentUploadDelegate.hpp"
#include "binding/CommunityCreditNode.hpp"
#include "binding/CommunityCreditsPage.hpp"
#include "binding/ConfigureHSVWidget.hpp"
#include "binding/ConfigureValuePopup.hpp"
#include "binding/CountTriggerGameObject.hpp"
#include "binding/CreateGuidelinesLayer.hpp"
#include "binding/CreateMenuItem.hpp"
#include "binding/CreateParticlePopup.hpp"
#include "binding/DialogDelegate.hpp"
#include "binding/CreatorLayer.hpp"
#include "binding/CurrencyRewardLayer.hpp"
#include "binding/CurrencySprite.hpp"
#include "binding/HSVWidgetDelegate.hpp"
#include "binding/CustomizeObjectLayer.hpp"
#include "binding/CustomizeObjectSettingsPopup.hpp"
#include "binding/CustomListView.hpp"
#include "binding/CustomSongDelegate.hpp"
#include "binding/CustomSongCell.hpp"
#include "binding/CustomMusicCell.hpp"
#include "binding/CustomSFXDelegate.hpp"
#include "binding/CustomSFXCell.hpp"
#include "binding/CustomSFXWidget.hpp"
#include "binding/GJDropDownLayerDelegate.hpp"
#include "binding/MusicBrowserDelegate.hpp"
#include "binding/CustomSongLayer.hpp"
#include "binding/CustomSongLayerDelegate.hpp"
#include "binding/GJAssetDownloadAction.hpp"
#include "binding/CustomSongWidget.hpp"
#include "binding/DailyLevelNode.hpp"
#include "binding/GJDailyLevelDelegate.hpp"
#include "binding/LevelDownloadDelegate.hpp"
#include "binding/DailyLevelPage.hpp"
#include "binding/RingObject.hpp"
#include "binding/DashRingObject.hpp"
#include "binding/DemonFilterDelegate.hpp"
#include "binding/DemonFilterSelectLayer.hpp"
#include "binding/DemonInfoPopup.hpp"
#include "binding/TextAreaDelegate.hpp"
#include "binding/DialogLayer.hpp"
#include "binding/DialogObject.hpp"
#include "binding/DownloadMessageDelegate.hpp"
#include "binding/DrawGridLayer.hpp"
#include "binding/DungeonBarsSprite.hpp"
#include "binding/DynamicBitset.hpp"
#include "binding/DynamicScrollDelegate.hpp"
#include "binding/EditButtonBar.hpp"
#include "binding/EditGameObjectPopup.hpp"
#include "binding/UploadActionDelegate.hpp"
#include "binding/UploadPopupDelegate.hpp"
#include "binding/SetIDPopupDelegate.hpp"
#include "binding/EditLevelLayer.hpp"
#include "binding/GJOptionsLayer.hpp"
#include "binding/EditorOptionsLayer.hpp"
#include "binding/EditorPauseLayer.hpp"
#include "binding/GameObjectEditorState.hpp"
#include "binding/GJRotationControlDelegate.hpp"
#include "binding/GJScaleControlDelegate.hpp"
#include "binding/GJTransformControlDelegate.hpp"
#include "binding/EditorUI.hpp"
#include "binding/EditTriggersPopup.hpp"
#include "binding/EndLevelLayer.hpp"
#include "binding/EndPortalObject.hpp"
#include "binding/EndTriggerGameObject.hpp"
#include "binding/EnhancedTriggerObject.hpp"
#include "binding/EnterEffectObject.hpp"
#include "binding/EventLinkTrigger.hpp"
#include "binding/ExplodeItemNode.hpp"
#include "binding/ExplodeItemSprite.hpp"
#include "binding/ExtendedLayer.hpp"
#include "binding/FileOperation.hpp"
#include "binding/GManager.hpp"
#include "binding/FileSaveManager.hpp"
#include "binding/FindBPMLayer.hpp"
#include "binding/SetIDPopup.hpp"
#include "binding/FindObjectPopup.hpp"
#include "binding/FMODMusic.hpp"
#include "binding/FMODQueuedEffect.hpp"
#include "binding/FMODAudioEngine.hpp"
#include "binding/FMODLevelVisualizer.hpp"
#include "binding/GameRateDelegate.hpp"
#include "binding/RewardedVideoDelegate.hpp"
#include "binding/FollowRewardPage.hpp"
#include "binding/FontObject.hpp"
#include "binding/ForceBlockGameObject.hpp"
#include "binding/FriendRequestDelegate.hpp"
#include "binding/FRequestProfilePage.hpp"
#include "binding/FriendRequestPopup.hpp"
#include "binding/UserListDelegate.hpp"
#include "binding/FriendsProfilePage.hpp"
#include "binding/GameCell.hpp"
#include "binding/GameEffectsManager.hpp"
#include "binding/GameLevelManager.hpp"
#include "binding/GameLevelOptionsLayer.hpp"
#include "binding/UIButtonConfig.hpp"
#include "binding/GameManager.hpp"
#include "binding/GameObjectCopy.hpp"
#include "binding/GameOptionsLayer.hpp"
#include "binding/GameOptionsTrigger.hpp"
#include "binding/GameStatsManager.hpp"
#include "binding/GameToolbox.hpp"
#include "binding/LevelManagerDelegate.hpp"
#include "binding/GauntletLayer.hpp"
#include "binding/GauntletNode.hpp"
#include "binding/GauntletSelectLayer.hpp"
#include "binding/GauntletSprite.hpp"
#include "binding/GhostTrailEffect.hpp"
#include "binding/GJAccountManager.hpp"
#include "binding/GJAccountSettingsDelegate.hpp"
#include "binding/GJAccountSettingsLayer.hpp"
#include "binding/GJActionManager.hpp"
#include "binding/PlayerButtonCommand.hpp"
#include "binding/TriggerEffectDelegate.hpp"
#include "binding/GJBaseGameLayer.hpp"
#include "binding/GJBigSprite.hpp"
#include "binding/GJBigSpriteNode.hpp"
#include "binding/GJChestSprite.hpp"
#include "binding/GJColorSetupLayer.hpp"
#include "binding/GJComment.hpp"
#include "binding/GJCommentListLayer.hpp"
#include "binding/GJDifficultySprite.hpp"
#include "binding/GJEffectManager.hpp"
#include "binding/GJGroundLayer.hpp"
#include "binding/GJFlyGroundLayer.hpp"
#include "binding/GJFollowCommandLayer.hpp"
#include "binding/GJFriendRequest.hpp"
#include "binding/GJGameLevel.hpp"
#include "binding/GJGameLoadingLayer.hpp"
#include "binding/ListButtonBarDelegate.hpp"
#include "binding/GJGarageLayer.hpp"
#include "binding/GJGradientLayer.hpp"
#include "binding/GJHttpResult.hpp"
#include "binding/GJItemIcon.hpp"
#include "binding/GJLevelList.hpp"
#include "binding/GJLevelScoreCell.hpp"
#include "binding/GJListLayer.hpp"
#include "binding/GJLocalLevelScoreCell.hpp"
#include "binding/GJLocalScore.hpp"
#include "binding/GJMapObject.hpp"
#include "binding/GJMapPack.hpp"
#include "binding/GJMessageCell.hpp"
#include "binding/GJMessagePopup.hpp"
#include "binding/GJMGLayer.hpp"
#include "binding/GJMoreGamesLayer.hpp"
#include "binding/GJMPDelegate.hpp"
#include "binding/GJMultiplayerManager.hpp"
#include "binding/GJObjectDecoder.hpp"
#include "binding/GJOnlineRewardDelegate.hpp"
#include "binding/GJPurchaseDelegate.hpp"
#include "binding/GJPathPage.hpp"
#include "binding/GJPathRewardPopup.hpp"
#include "binding/GJPathsLayer.hpp"
#include "binding/GJPathSprite.hpp"
#include "binding/GJPFollowCommandLayer.hpp"
#include "binding/GJPromoPopup.hpp"
#include "binding/GJRequestCell.hpp"
#include "binding/GJRewardDelegate.hpp"
#include "binding/GJRewardItem.hpp"
#include "binding/GJRewardObject.hpp"
#include "binding/GJRobotSprite.hpp"
#include "binding/GJRotateCommandLayer.hpp"
#include "binding/GJRotationControl.hpp"
#include "binding/GJScaleControl.hpp"
#include "binding/GJScoreCell.hpp"
#include "binding/GJSearchObject.hpp"
#include "binding/GJShopLayer.hpp"
#include "binding/GJSmartBlockPreview.hpp"
#include "binding/GJSmartBlockPreviewSprite.hpp"
#include "binding/GJSmartPrefab.hpp"
#include "binding/GJSmartTemplate.hpp"
#include "binding/GJSongBrowser.hpp"
#include "binding/GJSpecialColorSelect.hpp"
#include "binding/GJSpiderSprite.hpp"
#include "binding/GJSpriteColor.hpp"
#include "binding/GJStoreItem.hpp"
#include "binding/GJTransformControl.hpp"
#include "binding/GJUINode.hpp"
#include "binding/GJUnlockableItem.hpp"
#include "binding/GJUserCell.hpp"
#include "binding/GJUserMessage.hpp"
#include "binding/GJUserScore.hpp"
#include "binding/GJWorldNode.hpp"
#include "binding/UploadMessageDelegate.hpp"
#include "binding/GJWriteMessagePopup.hpp"
#include "binding/GooglePlayDelegate.hpp"
#include "binding/GooglePlayManager.hpp"
#include "binding/GradientTriggerObject.hpp"
#include "binding/GraphicsReloadLayer.hpp"
#include "binding/GravityEffectSprite.hpp"
#include "binding/HardStreak.hpp"
#include "binding/HSVLiveOverlay.hpp"
#include "binding/HSVWidgetPopup.hpp"
#include "binding/InfoAlertButton.hpp"
#include "binding/LevelCommentDelegate.hpp"
#include "binding/InfoLayer.hpp"
#include "binding/InheritanceNode.hpp"
#include "binding/ItemInfoPopup.hpp"
#include "binding/ItemTriggerGameObject.hpp"
#include "binding/KeybindingsLayer.hpp"
#include "binding/KeybindingsManager.hpp"
#include "binding/KeyframeAnimTriggerObject.hpp"
#include "binding/KeyframeGameObject.hpp"
#include "binding/LabelGameObject.hpp"
#include "binding/LeaderboardManagerDelegate.hpp"
#include "binding/LeaderboardsLayer.hpp"
#include "binding/LevelAreaInnerLayer.hpp"
#include "binding/LevelAreaLayer.hpp"
#include "binding/SetTextPopupDelegate.hpp"
#include "binding/ShareCommentDelegate.hpp"
#include "binding/LevelBrowserLayer.hpp"
#include "binding/LevelCell.hpp"
#include "binding/LevelDeleteDelegate.hpp"
#include "binding/LevelSettingsDelegate.hpp"
#include "binding/LevelEditorLayer.hpp"
#include "binding/LevelFeatureLayer.hpp"
#include "binding/LevelUpdateDelegate.hpp"
#include "binding/RateLevelDelegate.hpp"
#include "binding/NumberInputDelegate.hpp"
#include "binding/LevelInfoLayer.hpp"
#include "binding/LevelLeaderboard.hpp"
#include "binding/LevelListCell.hpp"
#include "binding/LevelListDeleteDelegate.hpp"
#include "binding/SelectListIconDelegate.hpp"
#include "binding/LevelListLayer.hpp"
#include "binding/LevelOptionsLayer.hpp"
#include "binding/LevelOptionsLayer2.hpp"
#include "binding/LevelPage.hpp"
#include "binding/LevelSearchLayer.hpp"
#include "binding/LevelSelectLayer.hpp"
#include "binding/SelectArtDelegate.hpp"
#include "binding/SelectSettingDelegate.hpp"
#include "binding/LevelSettingsLayer.hpp"
#include "binding/LevelSettingsObject.hpp"
#include "binding/LevelTools.hpp"
#include "binding/LevelUploadDelegate.hpp"
#include "binding/LikeItemLayer.hpp"
#include "binding/ListButtonBar.hpp"
#include "binding/ListButtonPage.hpp"
#include "binding/ListCell.hpp"
#include "binding/ListUploadDelegate.hpp"
#include "binding/LoadingCircle.hpp"
#include "binding/LoadingCircleSprite.hpp"
#include "binding/LoadingLayer.hpp"
#include "binding/LocalLevelManager.hpp"
#include "binding/MapPackCell.hpp"
#include "binding/MapSelectLayer.hpp"
#include "binding/MenuGameLayer.hpp"
#include "binding/MenuLayer.hpp"
#include "binding/MessageListDelegate.hpp"
#include "binding/MessagesProfilePage.hpp"
#include "binding/MoreOptionsLayer.hpp"
#include "binding/MoreSearchLayer.hpp"
#include "binding/MoreVideoOptionsLayer.hpp"
#include "binding/MPLobbyLayer.hpp"
#include "binding/MultilineBitmapFont.hpp"
#include "binding/MultiplayerLayer.hpp"
#include "binding/MultiTriggerPopup.hpp"
#include "binding/MusicArtistObject.hpp"
#include "binding/MusicBrowser.hpp"
#include "binding/MusicDelegateHandler.hpp"
#include "binding/PlatformDownloadDelegate.hpp"
#include "binding/MusicDownloadManager.hpp"
#include "binding/OptionsObjectDelegate.hpp"
#include "binding/MusicSearchResult.hpp"
#include "binding/NCSInfoLayer.hpp"
#include "binding/NewgroundsInfoLayer.hpp"
#include "binding/NodePoint.hpp"
#include "binding/NumberInputLayer.hpp"
#include "binding/OBB2D.hpp"
#include "binding/ObjectControlGameObject.hpp"
#include "binding/ObjectManager.hpp"
#include "binding/ObjectToolbox.hpp"
#include "binding/OnlineListDelegate.hpp"
#include "binding/OptionsCell.hpp"
#include "binding/OptionsLayer.hpp"
#include "binding/OptionsObject.hpp"
#include "binding/OptionsScrollLayer.hpp"
#include "binding/ParentalOptionsLayer.hpp"
#include "binding/ParticleGameObject.hpp"
#include "binding/ParticlePreviewLayer.hpp"
#include "binding/PauseLayer.hpp"
#include "binding/PlatformToolbox.hpp"
#include "binding/PlayerCheckpoint.hpp"
#include "binding/PlayerControlGameObject.hpp"
#include "binding/PlayerFireBoostSprite.hpp"
#include "binding/PlayerObject.hpp"
#include "binding/PlayLayer.hpp"
#include "binding/PointNode.hpp"
#include "binding/PriceLabel.hpp"
#include "binding/UserInfoDelegate.hpp"
#include "binding/ProfilePage.hpp"
#include "binding/PromoInterstitial.hpp"
#include "binding/PurchaseItemPopup.hpp"
#include "binding/RandTriggerGameObject.hpp"
#include "binding/RateDemonLayer.hpp"
#include "binding/RateLevelLayer.hpp"
#include "binding/RateStarsLayer.hpp"
#include "binding/RetryLevelLayer.hpp"
#include "binding/RewardsPage.hpp"
#include "binding/RewardUnlockLayer.hpp"
#include "binding/RotateGameplayGameObject.hpp"
#include "binding/ScrollingLayer.hpp"
#include "binding/SearchButton.hpp"
#include "binding/SetTextPopup.hpp"
#include "binding/SearchSFXPopup.hpp"
#include "binding/SecretGame01Layer.hpp"
#include "binding/SecretLayer.hpp"
#include "binding/SecretLayer2.hpp"
#include "binding/SecretLayer3.hpp"
#include "binding/SecretLayer4.hpp"
#include "binding/SecretLayer5.hpp"
#include "binding/SecretLayer6.hpp"
#include "binding/SecretNumberLayer.hpp"
#include "binding/SecretRewardsLayer.hpp"
#include "binding/SelectArtLayer.hpp"
#include "binding/SelectEventLayer.hpp"
#include "binding/SelectFontLayer.hpp"
#include "binding/SelectListIconLayer.hpp"
#include "binding/SelectPremadeDelegate.hpp"
#include "binding/SelectPremadeLayer.hpp"
#include "binding/SelectSettingLayer.hpp"
#include "binding/SelectSFXSortDelegate.hpp"
#include "binding/SelectSFXSortLayer.hpp"
#include "binding/SequenceTriggerGameObject.hpp"
#include "binding/SetColorIDPopup.hpp"
#include "binding/SetFolderPopup.hpp"
#include "binding/SetGroupIDLayer.hpp"
#include "binding/SetItemIDLayer.hpp"
#include "binding/SetLevelOrderPopup.hpp"
#include "binding/SetTargetIDLayer.hpp"
#include "binding/SetupAdvFollowEditPhysicsPopup.hpp"
#include "binding/SetupAdvFollowPopup.hpp"
#include "binding/SetupAdvFollowRetargetPopup.hpp"
#include "binding/SetupAnimationPopup.hpp"
#include "binding/SetupAnimSettingsPopup.hpp"
#include "binding/SetupAreaMoveTriggerPopup.hpp"
#include "binding/SetupAreaTintTriggerPopup.hpp"
#include "binding/SetupAreaAnimTriggerPopup.hpp"
#include "binding/SetupAreaFadeTriggerPopup.hpp"
#include "binding/SetupAreaRotateTriggerPopup.hpp"
#include "binding/SetupAreaTransformTriggerPopup.hpp"
#include "binding/SetupAreaTriggerPopup.hpp"
#include "binding/SetupArtSwitchPopup.hpp"
#include "binding/SetupAudioLineGuidePopup.hpp"
#include "binding/SetupAudioTriggerPopup.hpp"
#include "binding/SetupBGSpeedTrigger.hpp"
#include "binding/SetupCameraEdgePopup.hpp"
#include "binding/SetupCameraGuidePopup.hpp"
#include "binding/SetupCameraModePopup.hpp"
#include "binding/SetupCameraOffsetTrigger.hpp"
#include "binding/SetupCameraRotatePopup.hpp"
#include "binding/SetupCameraRotatePopup2.hpp"
#include "binding/SetupCheckpointPopup.hpp"
#include "binding/SetupCoinLayer.hpp"
#include "binding/SetupInstantCollisionTriggerPopup.hpp"
#include "binding/SetupCollisionStateTriggerPopup.hpp"
#include "binding/SetupCollisionTriggerPopup.hpp"
#include "binding/SetupCountTriggerPopup.hpp"
#include "binding/SetupDashRingPopup.hpp"
#include "binding/SetupEndPopup.hpp"
#include "binding/SetupEnterEffectPopup.hpp"
#include "binding/SetupEnterTriggerPopup.hpp"
#include "binding/SetupEventLinkPopup.hpp"
#include "binding/SetupForceBlockPopup.hpp"
#include "binding/SetupGameplayOffsetPopup.hpp"
#include "binding/SetupGradientPopup.hpp"
#include "binding/SetupGravityModPopup.hpp"
#include "binding/SetupGravityTriggerPopup.hpp"
#include "binding/SetupInstantCountPopup.hpp"
#include "binding/SetupInteractObjectPopup.hpp"
#include "binding/SetupItemCompareTriggerPopup.hpp"
#include "binding/SetupItemEditTriggerPopup.hpp"
#include "binding/SetupKeyframeAnimPopup.hpp"
#include "binding/SetupKeyframePopup.hpp"
#include "binding/SetupMGTrigger.hpp"
#include "binding/SetupMoveCommandPopup.hpp"
#include "binding/SetupObjectControlPopup.hpp"
#include "binding/SetupObjectOptions2Popup.hpp"
#include "binding/SetupObjectOptionsPopup.hpp"
#include "binding/SetupObjectTogglePopup.hpp"
#include "binding/SetupOpacityPopup.hpp"
#include "binding/SetupOptionsTriggerPopup.hpp"
#include "binding/SetupPersistentItemTriggerPopup.hpp"
#include "binding/SetupPickupTriggerPopup.hpp"
#include "binding/SetupPlatformerEndPopup.hpp"
#include "binding/SetupPlayerControlPopup.hpp"
#include "binding/SetupPortalPopup.hpp"
#include "binding/SetupPulsePopup.hpp"
#include "binding/SetupRandAdvTriggerPopup.hpp"
#include "binding/SetupRandTriggerPopup.hpp"
#include "binding/SetupResetTriggerPopup.hpp"
#include "binding/SetupReverbPopup.hpp"
#include "binding/SetupRotateCommandPopup.hpp"
#include "binding/SetupRotateGameplayPopup.hpp"
#include "binding/SetupRotatePopup.hpp"
#include "binding/SetupSequenceTriggerPopup.hpp"
#include "binding/SetupSFXEditPopup.hpp"
#include "binding/SFXBrowserDelegate.hpp"
#include "binding/SetupSFXPopup.hpp"
#include "binding/SetupShaderEffectPopup.hpp"
#include "binding/SetupShakePopup.hpp"
#include "binding/SetupSmartBlockLayer.hpp"
#include "binding/SetupSmartTemplateLayer.hpp"
#include "binding/SongPlaybackDelegate.hpp"
#include "binding/SetupSongTriggerPopup.hpp"
#include "binding/SetupSpawnParticlePopup.hpp"
#include "binding/SetupSpawnPopup.hpp"
#include "binding/SetupStaticCameraPopup.hpp"
#include "binding/SetupStopTriggerPopup.hpp"
#include "binding/SetupTeleportPopup.hpp"
#include "binding/SetupTimerControlTriggerPopup.hpp"
#include "binding/SetupTimerEventTriggerPopup.hpp"
#include "binding/SetupTimerTriggerPopup.hpp"
#include "binding/SetupTimeWarpPopup.hpp"
#include "binding/SetupTouchTogglePopup.hpp"
#include "binding/SetupTransformPopup.hpp"
#include "binding/SetupZoomTriggerPopup.hpp"
#include "binding/SFXBrowser.hpp"
#include "binding/SFXInfoObject.hpp"
#include "binding/SFXFolderObject.hpp"
#include "binding/SFXSearchResult.hpp"
#include "binding/SFXTriggerGameObject.hpp"
#include "binding/ShaderGameObject.hpp"
#include "binding/ShaderLayer.hpp"
#include "binding/ShardsPage.hpp"
#include "binding/ShareCommentLayer.hpp"
#include "binding/ShareLevelLayer.hpp"
#include "binding/ShareLevelSettingsLayer.hpp"
#include "binding/ShareListLayer.hpp"
#include "binding/SimpleObject.hpp"
#include "binding/SimplePlayer.hpp"
#include "binding/SlideInLayer.hpp"
#include "binding/SliderThumb.hpp"
#include "binding/SliderTouchLogic.hpp"
#include "binding/Slider.hpp"
#include "binding/SmartGameObject.hpp"
#include "binding/SmartTemplateCell.hpp"
#include "binding/SongCell.hpp"
#include "binding/SongInfoLayer.hpp"
#include "binding/SongInfoObject.hpp"
#include "binding/SongObject.hpp"
#include "binding/SongOptionsLayer.hpp"
#include "binding/SongSelectNode.hpp"
#include "binding/SongsLayer.hpp"
#include "binding/SongTriggerGameObject.hpp"
#include "binding/SpawnParticleGameObject.hpp"
#include "binding/SpawnTriggerGameObject.hpp"
#include "binding/SpecialAnimGameObject.hpp"
#include "binding/SpriteAnimationManager.hpp"
#include "binding/SpriteDescription.hpp"
#include "binding/StarInfoPopup.hpp"
#include "binding/StartPosObject.hpp"
#include "binding/StatsCell.hpp"
#include "binding/StatsLayer.hpp"
#include "binding/StatsObject.hpp"
#include "binding/SupportLayer.hpp"
#include "binding/TableView.hpp"
#include "binding/TeleportPortalObject.hpp"
#include "binding/TextAlertPopup.hpp"
#include "binding/TextArea.hpp"
#include "binding/TextGameObject.hpp"
#include "binding/TextStyleSection.hpp"
#include "binding/TimerTriggerGameObject.hpp"
#include "binding/TopArtistsLayer.hpp"
#include "binding/TOSPopup.hpp"
#include "binding/TransformTriggerGameObject.hpp"
#include "binding/TriggerControlGameObject.hpp"
#include "binding/TutorialLayer.hpp"
#include "binding/TutorialPopup.hpp"
#include "binding/UILayer.hpp"
#include "binding/UIObjectSettingsPopup.hpp"
#include "binding/UIOptionsLayer.hpp"
#include "binding/UIPOptionsLayer.hpp"
#include "binding/UISaveLoadLayer.hpp"
#include "binding/UISettingsGameObject.hpp"
#include "binding/UndoObject.hpp"
#include "binding/UpdateAccountSettingsPopup.hpp"
#include "binding/UploadActionPopup.hpp"
#include "binding/UploadListPopup.hpp"
#include "binding/UploadPopup.hpp"
#include "binding/URLCell.hpp"
#include "binding/URLViewLayer.hpp"
#include "binding/VideoOptionsLayer.hpp"
#include "binding/WorldLevelPage.hpp"
#include "binding/WorldSelectLayer.hpp"
