#pragma once

#include "..\..\pch.h"


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum PortalWars.EReplayCameraMode
enum class PortalWars_EReplayCameraMode : uint8_t
{
	EReplayCameraMode__Free        = 0,
	EReplayCameraMode__FirstPerson = 1,
	EReplayCameraMode__ThirdPerson = 2,
	EReplayCameraMode__Max         = 3,

};

// Enum PortalWars.EDOMHillState
enum class PortalWars_EDOMHillState : uint8_t
{
	EDOMHillState__None            = 0,
	EDOMHillState__Uncontrolled    = 1,
	EDOMHillState__AlphaTeamControls = 2,
	EDOMHillState__BravoTeamControls = 3,
	EDOMHillState__EDOMHillState_MAX = 4,

};

// Enum PortalWars.EFlagState
enum class PortalWars_EFlagState : uint8_t
{
	EFlagState__None               = 0,
	EFlagState__AtSpawn            = 1,
	EFlagState__Dropped            = 2,
	EFlagState__Taken              = 3,
	EFlagState__Captured           = 4,
	EFlagState__EFlagState_MAX     = 5,

};

// Enum PortalWars.EFuzzyHedge
enum class PortalWars_EFuzzyHedge : uint8_t
{
	EFuzzyHedge__None              = 0,
	EFuzzyHedge__Fairly            = 1,
	EFuzzyHedge__Very              = 2,
	EFuzzyHedge__EFuzzyHedge_MAX   = 3,

};

// Enum PortalWars.EFuzzyDesirability
enum class PortalWars_EFuzzyDesirability : uint8_t
{
	EFuzzyDesirability__Undesirable = 0,
	EFuzzyDesirability__Desirable  = 1,
	EFuzzyDesirability__VeryDesirable = 2,
	EFuzzyDesirability__EFuzzyDesirability_MAX = 3,

};

// Enum PortalWars.EFuzzyConfig
enum class PortalWars_EFuzzyConfig : uint8_t
{
	EFuzzyConfig__Close_High       = 0,
	EFuzzyConfig__Close_Okay       = 1,
	EFuzzyConfig__Close_Low        = 2,
	EFuzzyConfig__Medium_High      = 3,
	EFuzzyConfig__Medium_Okay      = 4,
	EFuzzyConfig__Medium_Low       = 5,
	EFuzzyConfig__Far_High         = 6,
	EFuzzyConfig__Far_Okay         = 7,
	EFuzzyConfig__Far_Low          = 8,
	EFuzzyConfig__MAX              = 9,

};

// Enum PortalWars.EAmmoType
enum class PortalWars_EAmmoType : uint8_t
{
	EAmmoType__None                = 0,
	EAmmoType__Bullet              = 1,
	EAmmoType__Battery             = 2,
	EAmmoType__EAmmoType_MAX       = 3,

};

// Enum PortalWars.EWeaponState
enum class PortalWars_EWeaponState : uint8_t
{
	EWeaponState__NotEquipped      = 0,
	EWeaponState__UnEquipping      = 1,
	EWeaponState__Equipping        = 2,
	EWeaponState__Idle             = 3,
	EWeaponState__Firing           = 4,
	EWeaponState__Reloading        = 5,
	EWeaponState__Meleeing         = 6,
	EWeaponState__Throwing         = 7,
	EWeaponState__FiringPortal     = 8,
	EWeaponState__ClosingPortal    = 9,
	EWeaponState__Inspecting       = 10,
	EWeaponState__EWeaponState_MAX = 11,

};

// Enum PortalWars.EMainMenuState
enum class PortalWars_EMainMenuState : uint8_t
{
	EMainMenuState__None           = 0,
	EMainMenuState__Login          = 1,
	EMainMenuState__Menu           = 2,
	EMainMenuState__EMainMenuState_MAX = 3,

};

// Enum PortalWars.ENavAreaFlag
enum class PortalWars_ENavAreaFlag : uint8_t
{
	ENavAreaFlag__Default          = 0,
	ENavAreaFlag__Jump             = 1,
	ENavAreaFlag__ENavAreaFlag_MAX = 2,

};

// Enum PortalWars.EPortalScreenSize
enum class PortalWars_EPortalScreenSize : uint8_t
{
	EPortalScreenSize__None        = 0,
	EPortalScreenSize__Near        = 1,
	EPortalScreenSize__Medium      = 2,
	EPortalScreenSize__Far         = 3,
	EPortalScreenSize__EPortalScreenSize_MAX = 4,

};

// Enum PortalWars.EAddFriendsState
enum class PortalWars_EAddFriendsState : uint8_t
{
	EAddFriendsState__Enabled      = 0,
	EAddFriendsState__Disabled     = 1,
	EAddFriendsState__EAddFriendsState_MAX = 2,

};

// Enum PortalWars.EFocusGoal
enum class PortalWars_EFocusGoal : uint8_t
{
	EFocusGoal__Enemy              = 0,
	EFocusGoal__EnemyLastLocation  = 1,
	EFocusGoal__Path               = 2,
	EFocusGoal__Override           = 3,
	EFocusGoal__EFocusGoal_MAX     = 4,

};

// Enum PortalWars.EAnimationType
enum class PortalWars_EAnimationType : uint8_t
{
	EAnimationType__FPP            = 0,
	EAnimationType__TPP            = 1,
	EAnimationType__EAnimationType_MAX = 2,

};

// Enum PortalWars.EMovementDirection
enum class PortalWars_EMovementDirection : uint8_t
{
	EMovementDirection__N          = 0,
	EMovementDirection__E          = 1,
	EMovementDirection__W          = 2,
	EMovementDirection__S          = 3,
	EMovementDirection__EMovementDirection_MAX = 4,

};

// Enum PortalWars.EWeaponType
enum class PortalWars_EWeaponType : uint8_t
{
	EWeaponType__AssaultRifle      = 0,
	EWeaponType__BattleRifle       = 1,
	EWeaponType__Pistol            = 2,
	EWeaponType__PlasmaRifle       = 3,
	EWeaponType__RailGun           = 4,
	EWeaponType__RocketLauncher    = 5,
	EWeaponType__Shotgun           = 6,
	EWeaponType__SMG               = 7,
	EWeaponType__Sniper            = 8,
	EWeaponType__Oddball           = 9,
	EWeaponType__Flag              = 10,
	EWeaponType__Fists             = 11,
	EWeaponType__Bat               = 12,
	EWeaponType__DMR               = 13,
	EWeaponType__EWeaponType_MAX   = 14,

};

// Enum PortalWars.EMovementType
enum class PortalWars_EMovementType : uint8_t
{
	EMovementType__Crouching       = 0,
	EMovementType__Walking         = 1,
	EMovementType__Running         = 2,
	EMovementType__Landing         = 3,
	EMovementType__EMovementType_MAX = 4,

};

// Enum PortalWars.EPWSoundClass
enum class PortalWars_EPWSoundClass : uint8_t
{
	EPWSoundClass__Master          = 0,
	EPWSoundClass__Music           = 1,
	EPWSoundClass__Gameplay        = 2,
	EPWSoundClass__Announcer       = 3,
	EPWSoundClass__VOIP            = 4,
	EPWSoundClass__Ambiance        = 5,
	EPWSoundClass__MAX             = 6,

};

// Enum PortalWars.EInputMode
enum class PortalWars_EInputMode : uint8_t
{
	EInputMode__None               = 0,
	EInputMode__UIOnly             = 1,
	EInputMode__GameAndUI          = 2,
	EInputMode__GameOnly           = 3,
	EInputMode__EInputMode_MAX     = 4,

};

// Enum PortalWars.EBlockedPlayersState
enum class PortalWars_EBlockedPlayersState : uint8_t
{
	EBlockedPlayersState__Succeeded = 0,
	EBlockedPlayersState__Searching = 1,
	EBlockedPlayersState__Failed   = 2,
	EBlockedPlayersState__EBlockedPlayersState_MAX = 3,

};

// Enum PortalWars.ENavRecoveryType
enum class PortalWars_ENavRecoveryType : uint8_t
{
	ENavRecoveryType__OffNavMesh   = 0,
	ENavRecoveryType__OnNavMeshIsland = 1,
	ENavRecoveryType__ENavRecoveryType_MAX = 2,

};

// Enum PortalWars.EBattlePassPurchaseType
enum class PortalWars_EBattlePassPurchaseType : uint8_t
{
	EBattlePassPurchaseType__Premium = 0,
	EBattlePassPurchaseType__PremiumBundle = 1,
	EBattlePassPurchaseType__Levels = 2,
	EBattlePassPurchaseType__EBattlePassPurchaseType_MAX = 3,

};

// Enum PortalWars.ECareerMenuState
enum class PortalWars_ECareerMenuState : uint8_t
{
	ECareerMenuState__Main         = 0,
	ECareerMenuState__Stats        = 1,
	ECareerMenuState__Leaderboards = 2,
	ECareerMenuState__Replays      = 3,
	ECareerMenuState__ECareerMenuState_MAX = 4,

};

// Enum PortalWars.EChallengesSubMenuState
enum class PortalWars_EChallengesSubMenuState : uint8_t
{
	EChallengesSubMenuState__Main  = 0,
	EChallengesSubMenuState__Inspect = 1,
	EChallengesSubMenuState__EChallengesSubMenuState_MAX = 2,

};

// Enum PortalWars.EChallengeMenuState
enum class PortalWars_EChallengeMenuState : uint8_t
{
	EChallengeMenuState__Main      = 0,
	EChallengeMenuState__Inspect   = 1,
	EChallengeMenuState__EChallengeMenuState_MAX = 2,

};

// Enum PortalWars.ECheckInType
enum class PortalWars_ECheckInType : uint8_t
{
	ECheckInType__Claim            = 0,
	ECheckInType__Repair           = 1,
	ECheckInType__ECheckInType_MAX = 2,

};

// Enum PortalWars.EControlCategory
enum class PortalWars_EControlCategory : uint8_t
{
	EControlCategory__Global       = 0,
	EControlCategory__Player       = 1,
	EControlCategory__Spectator    = 2,
	EControlCategory__Tutorial     = 3,
	EControlCategory__Killcam      = 4,
	EControlCategory__EControlCategory_MAX = 5,

};

// Enum PortalWars.EControlSettingsMenuState
enum class PortalWars_EControlSettingsMenuState : uint8_t
{
	EControlSettingsMenuState__Settings = 0,
	EControlSettingsMenuState__Controls = 1,
	EControlSettingsMenuState__EControlSettingsMenuState_MAX = 2,

};

// Enum PortalWars.ECurrencyStoreState
enum class PortalWars_ECurrencyStoreState : uint8_t
{
	ECurrencyStoreState__Full      = 0,
	ECurrencyStoreState__Loading   = 1,
	ECurrencyStoreState__Empty     = 2,
	ECurrencyStoreState__ECurrencyStoreState_MAX = 3,

};

// Enum PortalWars.EReportCategory
enum class PortalWars_EReportCategory : uint8_t
{
	EReportCategory__Cheating      = 0,
	EReportCategory__Exploiting    = 1,
	EReportCategory__Profile       = 2,
	EReportCategory__VerbalAbuse   = 3,
	EReportCategory__Scamming      = 4,
	EReportCategory__Spamming      = 5,
	EReportCategory__Other         = 6,
	EReportCategory__EReportCategory_MAX = 7,

};

// Enum PortalWars.ECheatViolationType
enum class PortalWars_ECheatViolationType : uint8_t
{
	ECheatViolationType__MAX       = 0,

};

// Enum PortalWars.ECustomGameMenuState
enum class PortalWars_ECustomGameMenuState : uint8_t
{
	ECustomGameMenuState__Browser  = 0,
	ECustomGameMenuState__Host     = 1,
	ECustomGameMenuState__Error    = 2,
	ECustomGameMenuState__ECustomGameMenuState_MAX = 3,

};

// Enum PortalWars.EScrollCenterLocation
enum class PortalWars_EScrollCenterLocation : uint8_t
{
	EScrollCenterLocation__TopOrLeft = 0,
	EScrollCenterLocation__Center  = 1,
	EScrollCenterLocation__EScrollCenterLocation_MAX = 2,

};

// Enum PortalWars.EWedgeType
enum class PortalWars_EWedgeType : uint8_t
{
	EWedgeType__Emote              = 0,
	EWedgeType__Spray              = 1,
	EWedgeType__InspectWeapon      = 2,
	EWedgeType__EWedgeType_MAX     = 3,

};

// Enum PortalWars.EFriendRequestDialogType
enum class PortalWars_EFriendRequestDialogType : uint8_t
{
	EFriendRequestDialogType__AddFriendCode = 0,
	EFriendRequestDialogType__AddFriendId = 1,
	EFriendRequestDialogType__AcceptFriendRequest = 2,
	EFriendRequestDialogType__DeclineFriendRequest = 3,
	EFriendRequestDialogType__EFriendRequestDialogType_MAX = 4,

};

// Enum PortalWars.EFriendsListState
enum class PortalWars_EFriendsListState : uint8_t
{
	EFriendsListState__Succeeded   = 0,
	EFriendsListState__Searching   = 1,
	EFriendsListState__Failed      = 2,
	EFriendsListState__EFriendsListState_MAX = 3,

};

// Enum PortalWars.EFriendsListMenuState
enum class PortalWars_EFriendsListMenuState : uint8_t
{
	EFriendsListMenuState__PlatformFriends = 0,
	EFriendsListMenuState__Friends = 1,
	EFriendsListMenuState__EFriendsListMenuState_MAX = 2,

};

// Enum PortalWars.ESoundReplicationType
enum class PortalWars_ESoundReplicationType : uint8_t
{
	SRT_All                        = 0,
	SRT_AllButOwner                = 1,
	SRT_OwnerOnly                  = 2,
	SRT_IfSourceNotReplicated      = 3,
	SRT_None                       = 4,
	SRT_MAX                        = 5,

};

// Enum PortalWars.EFFAScoreState
enum class PortalWars_EFFAScoreState : uint8_t
{
	EFFAScoreState__None           = 0,
	EFFAScoreState__Tie            = 1,
	EFFAScoreState__Losing         = 2,
	EFFAScoreState__Winning        = 3,
	EFFAScoreState__EFFAScoreState_MAX = 4,

};

// Enum PortalWars.ETeamScoreState
enum class PortalWars_ETeamScoreState : uint8_t
{
	ETeamScoreState__None          = 0,
	ETeamScoreState__Tie           = 1,
	ETeamScoreState__AlphaTeamLeads = 2,
	ETeamScoreState__BravoTeamLeads = 3,
	ETeamScoreState__ETeamScoreState_MAX = 4,

};

// Enum PortalWars.EItemShopMenuState
enum class PortalWars_EItemShopMenuState : uint8_t
{
	EItemShopMenuState__Main       = 0,
	EItemShopMenuState__Inspect    = 1,
	EItemShopMenuState__EItemShopMenuState_MAX = 2,

};

// Enum PortalWars.EKOTHHillState
enum class PortalWars_EKOTHHillState : uint8_t
{
	EKOTHHillState__None           = 0,
	EKOTHHillState__Uncontrolled   = 1,
	EKOTHHillState__Contested      = 2,
	EKOTHHillState__AlphaTeamControls = 3,
	EKOTHHillState__BravoTeamControls = 4,
	EKOTHHillState__EKOTHHillState_MAX = 5,

};

// Enum PortalWars.ELeaderboardsMenuState
enum class PortalWars_ELeaderboardsMenuState : uint8_t
{
	ELeaderboardsMenuState__Ranked = 0,
	ELeaderboardsMenuState__ELeaderboardsMenuState_MAX = 1,

};

// Enum PortalWars.ELockerMenuState
enum class PortalWars_ELockerMenuState : uint8_t
{
	ELockerMenuState__Main         = 0,
	ELockerMenuState__Inspect      = 1,
	ELockerMenuState__ELockerMenuState_MAX = 2,

};

// Enum PortalWars.ELoginMenuState
enum class PortalWars_ELoginMenuState : uint8_t
{
	ELoginMenuState__Welcome       = 0,
	ELoginMenuState__Connecting    = 1,
	ELoginMenuState__Error         = 2,
	ELoginMenuState__ELoginMenuState_MAX = 3,

};

// Enum PortalWars.ELootboxMenuState
enum class PortalWars_ELootboxMenuState : uint8_t
{
	ELootboxMenuState__Main        = 0,
	ELootboxMenuState__Opening     = 1,
	ELootboxMenuState__ELootboxMenuState_MAX = 2,

};

// Enum PortalWars.EMainMenuWidgetState
enum class PortalWars_EMainMenuWidgetState : uint8_t
{
	EMainMenuWidgetState__Play     = 0,
	EMainMenuWidgetState__BattlePass = 1,
	EMainMenuWidgetState__Challenges = 2,
	EMainMenuWidgetState__Locker   = 3,
	EMainMenuWidgetState__Career   = 4,
	EMainMenuWidgetState__Training = 5,
	EMainMenuWidgetState__ItemShop = 6,
	EMainMenuWidgetState__RewardCenter = 7,
	EMainMenuWidgetState__Social   = 8,
	EMainMenuWidgetState__ReferralPass = 9,
	EMainMenuWidgetState__Lootbox  = 10,
	EMainMenuWidgetState__None     = 11,
	EMainMenuWidgetState__EMainMenuWidgetState_MAX = 12,

};

// Enum PortalWars.EMessageType
enum class PortalWars_EMessageType : uint8_t
{
	EMessageType__Error            = 0,
	EMessageType__Notice           = 1,
	EMessageType__EMessageType_MAX = 2,

};

// Enum PortalWars.EBallState
enum class PortalWars_EBallState : uint8_t
{
	EBallState__None               = 0,
	EBallState__AtSpawn            = 1,
	EBallState__Dropped            = 2,
	EBallState__Controlled         = 3,
	EBallState__AlphaTeamControls  = 4,
	EBallState__BravoTeamControls  = 5,
	EBallState__EBallState_MAX     = 6,

};

// Enum PortalWars.EOnlineSessionClientState
enum class PortalWars_EOnlineSessionClientState : uint8_t
{
	EOnlineSessionClientState__None = 0,
	EOnlineSessionClientState__CreatingCustom = 1,
	EOnlineSessionClientState__JoiningCustom = 2,
	EOnlineSessionClientState__Matchmaking = 3,
	EOnlineSessionClientState__WaitingArea = 4,
	EOnlineSessionClientState__Playing = 5,
	EOnlineSessionClientState__EOnlineSessionClientState_MAX = 6,

};

// Enum PortalWars.EPauseMenuState
enum class PortalWars_EPauseMenuState : uint8_t
{
	EPauseMenuState__Main          = 0,
	EPauseMenuState__Settings      = 1,
	EPauseMenuState__Players       = 2,
	EPauseMenuState__Quit          = 3,
	EPauseMenuState__EPauseMenuState_MAX = 4,

};

// Enum PortalWars.EPlayerActionsMenuState
enum class PortalWars_EPlayerActionsMenuState : uint8_t
{
	EPlayerActionsMenuState__Main  = 0,
	EPlayerActionsMenuState__Report = 1,
	EPlayerActionsMenuState__EPlayerActionsMenuState_MAX = 2,

};

// Enum PortalWars.EPlaylistSelectState
enum class PortalWars_EPlaylistSelectState : uint8_t
{
	EPlaylistSelectState__Main     = 0,
	EPlaylistSelectState__GameModeSelection = 1,
	EPlaylistSelectState__EPlaylistSelectState_MAX = 2,

};

// Enum PortalWars.EPlaySelectionMenuState
enum class PortalWars_EPlaySelectionMenuState : uint8_t
{
	EPlaySelectionMenuState__Online = 0,
	EPlaySelectionMenuState__Custom = 1,
	EPlaySelectionMenuState__EPlaySelectionMenuState_MAX = 2,

};

// Enum PortalWars.EPlayMenuState
enum class PortalWars_EPlayMenuState : uint8_t
{
	EPlayMenuState__Main           = 0,
	EPlayMenuState__Selection      = 1,
	EPlayMenuState__EPlayMenuState_MAX = 2,

};

// Enum PortalWars.EPriceType
enum class PortalWars_EPriceType : uint8_t
{
	EPriceType__Normal             = 0,
	EPriceType__Discounted         = 1,
	EPriceType__Original           = 2,
	EPriceType__Premium            = 3,
	EPriceType__EPriceType_MAX     = 4,

};

// Enum PortalWars.ERaceLeaderboardType
enum class PortalWars_ERaceLeaderboardType : uint8_t
{
	ERaceLeaderboardType__Global   = 0,
	ERaceLeaderboardType__Friends  = 1,
	ERaceLeaderboardType__ERaceLeaderboardType_MAX = 2,

};

// Enum PortalWars.ERecentPlayersState
enum class PortalWars_ERecentPlayersState : uint8_t
{
	ERecentPlayersState__Succeeded = 0,
	ERecentPlayersState__Searching = 1,
	ERecentPlayersState__Failed    = 2,
	ERecentPlayersState__ERecentPlayersState_MAX = 3,

};

// Enum PortalWars.ERewardCenterMenuState
enum class PortalWars_ERewardCenterMenuState : uint8_t
{
	ERewardCenterMenuState__ReferFriend = 0,
	ERewardCenterMenuState__DailyCheckIn = 1,
	ERewardCenterMenuState__DailyPlayStreak = 2,
	ERewardCenterMenuState__Drops  = 3,
	ERewardCenterMenuState__ERewardCenterMenuState_MAX = 4,

};

// Enum PortalWars.ERewardReceivedType
enum class PortalWars_ERewardReceivedType : uint8_t
{
	ERewardReceivedType__Drops     = 0,
	ERewardReceivedType__Challenges = 1,
	ERewardReceivedType__BattlePass = 2,
	ERewardReceivedType__ReferralPass = 3,
	ERewardReceivedType__ERewardReceivedType_MAX = 4,

};

// Enum PortalWars.ERewardReceivedState
enum class PortalWars_ERewardReceivedState : uint8_t
{
	ERewardReceivedState__Rewards  = 0,
	ERewardReceivedState__Inspect  = 1,
	ERewardReceivedState__ERewardReceivedState_MAX = 2,

};

// Enum PortalWars.EServerBrowserState
enum class PortalWars_EServerBrowserState : uint8_t
{
	EServerBrowserState__None      = 0,
	EServerBrowserState__Searching = 1,
	EServerBrowserState__Succeeded = 2,
	EServerBrowserState__Failed    = 3,
	EServerBrowserState__EServerBrowserState_MAX = 4,

};

// Enum PortalWars.ESettingsMenuState
enum class PortalWars_ESettingsMenuState : uint8_t
{
	ESettingsMenuState__Video      = 0,
	ESettingsMenuState__Gameplay   = 1,
	ESettingsMenuState__Gamepad    = 2,
	ESettingsMenuState__Audio      = 3,
	ESettingsMenuState__UI         = 4,
	ESettingsMenuState__Privacy    = 5,
	ESettingsMenuState__ESettingsMenuState_MAX = 6,

};

// Enum PortalWars.EInviteMenuState
enum class PortalWars_EInviteMenuState : uint8_t
{
	EInviteMenuState__Friends      = 0,
	EInviteMenuState__RecentPlayers = 1,
	EInviteMenuState__AddFriends   = 2,
	EInviteMenuState__Invites      = 3,
	EInviteMenuState__BlockedPlayers = 4,
	EInviteMenuState__EInviteMenuState_MAX = 5,

};

// Enum PortalWars.EStatsMenuState
enum class PortalWars_EStatsMenuState : uint8_t
{
	EStatsMenuState__Overview      = 0,
	EStatsMenuState__Social        = 1,
	EStatsMenuState__Ranked        = 2,
	EStatsMenuState__EStatsMenuState_MAX = 3,

};

// Enum PortalWars.ETakedownState
enum class PortalWars_ETakedownState : uint8_t
{
	ETakedownState__Default        = 0,
	ETakedownState__OneAllyLeft    = 1,
	ETakedownState__OneEnemyLeft   = 2,
	ETakedownState__OneOnOne       = 3,
	ETakedownState__ETakedownState_MAX = 4,

};

// Enum PortalWars.EGoalType
enum class PortalWars_EGoalType : uint8_t
{
	EGoalType__Overlap             = 0,
	EGoalType__Kill                = 1,
	EGoalType__Melee               = 2,
	EGoalType__EMP                 = 3,
	EGoalType__Teleport            = 4,
	EGoalType__Link                = 5,
	EGoalType__SpawnPortal         = 6,
	EGoalType__Pickup              = 7,
	EGoalType__ClosePortal         = 8,
	EGoalType__TeamChat            = 9,
	EGoalType__ProxChat            = 10,
	EGoalType__Emote               = 11,
	EGoalType__EmoteWheel          = 12,
	EGoalType__EGoalType_MAX       = 13,

};

// Enum PortalWars.ETxnDialogState
enum class PortalWars_ETxnDialogState : uint8_t
{
	ETxnDialogState__Confirmation  = 0,
	ETxnDialogState__Processing    = 1,
	ETxnDialogState__Success       = 2,
	ETxnDialogState__Fail          = 3,
	ETxnDialogState__ETxnDialogState_MAX = 4,

};

// Enum PortalWars.ECommunicationType
enum class PortalWars_ECommunicationType : uint8_t
{
	ECommunicationType__Voice      = 0,
	ECommunicationType__Text       = 1,
	ECommunicationType__ECommunicationType_MAX = 2,

};

// Enum PortalWars.EBodyPart
enum class PortalWars_EBodyPart : uint8_t
{
	EBodyPart__Torso               = 0,
	EBodyPart__Head                = 1,
	EBodyPart__Feet                = 2,
	EBodyPart__EBodyPart_MAX       = 3,

};

// Enum PortalWars.EHitDirection
enum class PortalWars_EHitDirection : uint8_t
{
	EHitDirection__F               = 0,
	EHitDirection__FL              = 1,
	EHitDirection__FR              = 2,
	EHitDirection__B               = 3,
	EHitDirection__BL              = 4,
	EHitDirection__BR              = 5,
	EHitDirection__L               = 6,
	EHitDirection__R               = 7,
	EHitDirection__EHitDirection_MAX = 8,

};

// Enum PortalWars.EPWHitType
enum class PortalWars_EPWHitType : uint8_t
{
	EPWHitType__Normal             = 0,
	EPWHitType__Headshot           = 1,
	EPWHitType__Death              = 2,
	EPWHitType__EPWHitType_MAX     = 3,

};

// Enum PortalWars.EChatType
enum class PortalWars_EChatType : uint8_t
{
	EChatType__General             = 0,
	EChatType__Team                = 1,
	EChatType__EChatType_MAX       = 2,

};

// Enum PortalWars.EWidgetPlatformVisibility
enum class PortalWars_EWidgetPlatformVisibility : uint8_t
{
	EWidgetPlatformVisibility__AllPlatforms = 0,
	EWidgetPlatformVisibility__PCOnly = 1,
	EWidgetPlatformVisibility__ConsoleOnly = 2,
	EWidgetPlatformVisibility__EWidgetPlatformVisibility_MAX = 3,

};

// Enum PortalWars.EItemPreviewType
enum class PortalWars_EItemPreviewType : uint8_t
{
	EItemPreviewType__Inspect      = 0,
	EItemPreviewType__Locker       = 1,
	EItemPreviewType__Lootbox      = 2,
	EItemPreviewType__EItemPreviewType_MAX = 3,

};

// Enum PortalWars.EScoreboardType
enum class PortalWars_EScoreboardType : uint8_t
{
	EScoreboardType__Name          = 0,
	EScoreboardType__Score         = 1,
	EScoreboardType__Timer         = 2,
	EScoreboardType__EScoreboardType_MAX = 3,

};

// Enum PortalWars.ETextAlignment
enum class PortalWars_ETextAlignment : uint8_t
{
	ETextAlignment__Left           = 0,
	ETextAlignment__Center         = 1,
	ETextAlignment__Right          = 2,
	ETextAlignment__ETextAlignment_MAX = 3,

};

// Enum PortalWars.PTTKey
enum class PortalWars_EPTTKey : uint8_t
{
	PTTKey__PTTTeamChannel         = 0,
	PTTKey__PTTAreaChannel         = 1,
	PTTKey__PTTKey_MAX             = 2,

};

// Enum PortalWars.EVoiceChannelType
enum class PortalWars_EVoiceChannelType : uint8_t
{
	EVoiceChannelType__Party       = 0,
	EVoiceChannelType__Lobby       = 1,
	EVoiceChannelType__Team        = 2,
	EVoiceChannelType__Proximity   = 3,
	EVoiceChannelType__EVoiceChannelType_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PortalWars.WeaponData
// 0x002C
struct FWeaponData
{
	int                                                MaxAmmo;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmmoPerClip;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InitialClips;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PortalWars_EAmmoType                               AmmoType;                                                  // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J7HZ[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeBetweenShots;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSingleShot;                                             // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y873[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NoAnimReloadDuration;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanZoom;                                                   // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CZV5[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ZoomFOV;                                                   // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanSwapForSameWeapon;                                      // 0x0024(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O9EL[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MeleeDamage;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.RecoilData
// 0x0018
struct FRecoilData
{
	float                                              recoilRiseTime;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              recoilTotalTime;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              verticalRecoilAmount;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              horizontalRecoilAmount;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              recoilKick;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              visualRecoil;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.AutoAimData
// 0x0028
struct FAutoAimData
{
	float                                              AutoAimRadius;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoAimRadiusZoomed;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoAimMaxRadiusMultiplier;                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoAimMaxRadiusAutoScale;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoAimMinRadiusRange;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoAimMaxRadiusRange;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoAimRange;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MagnetismRange;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MagnetismAngle;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldUseMagnetism;                                        // 0x0024(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDynamicAutoAimRadius;                                     // 0x0025(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K8VL[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.WeaponAnimMontage
// 0x0010
struct FWeaponAnimMontage
{
	class UAnimMontage*                                FPP;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                TPP;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.WeaponBlendSpace1D
// 0x0010
struct FWeaponBlendSpace1D
{
	class UBlendSpace1D*                               FPP;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               TPP;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.WeaponAnimSequence
// 0x0010
struct FWeaponAnimSequence
{
	class UAnimSequence*                               FPP;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               TPP;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.FuzzyConfig
// 0x0002
struct FFuzzyConfig
{
	PortalWars_EFuzzyDesirability                      Desirability;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PortalWars_EFuzzyHedge                             Hedge;                                                     // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.WeaponAnimList
// 0x0060
struct FWeaponAnimList
{
	struct FWeaponBlendSpace1D                         WalkBlendSpace;                                            // 0x0000(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponBlendSpace1D                         LeanBlendSpace;                                            // 0x0010(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimSequence                         SprintAnim;                                                // 0x0020(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimSequence                         JumpStartAnim;                                             // 0x0030(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimSequence                         JumpLoopAnim;                                              // 0x0040(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimSequence                         JumpEndAnim;                                               // 0x0050(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.LineTraceInfo
// 0x0018
struct FLineTraceInfo
{
	struct FVector_NetQuantize                         StartTrace;                                                // 0x0000(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         EndTrace;                                                  // 0x000C(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.BurstLineTraceGunData
// 0x0008
struct FBurstLineTraceGunData
{
	int                                                NumberOfBurstShots;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeBetweenBurstShots;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.DecalData
// 0x0010
struct FDecalData
{
	class UMaterial*                                   DecalMaterial;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecalSize;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeSpan;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.ProjectileWeaponData
// 0x0020
struct FProjectileWeaponData
{
	class UClass*                                      ProjectileClass;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectileLife;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExplosionDamage;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumDamage;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageType;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.LineTraceGunData
// 0x0050
struct FLineTraceGunData
{
	float                                              WeaponSpread;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeaponSpreadZoomed;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FiringSpreadIncrement;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FiringSpreadIncrementZoomed;                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FiringSpreadMax;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FiringSpreadMaxZoomed;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           SpreadPattern;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              WeaponRange;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              damageDropOffDistance1;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              damageDropOffDistance2;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              damageDropOffModifier;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitDamage;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeadShotDamage;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageType;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClientSideHitLeeway;                                       // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AllowedViewDotHitDir;                                      // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.RewardPassEntryData
// 0x0030
struct FRewardPassEntryData
{
	struct FRewardData                                 RewardData;                                                // 0x0000(0x0028) (NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPremium;                                                // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CTY1[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.SavedPosition
// 0x002C
struct FSavedPosition
{
	unsigned char                                      UnknownData_XV3A[0x2C];                                    // 0x0000(0x002C) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.IgnoreMovementCorrections
// 0x0002
struct FIgnoreMovementCorrections
{
	unsigned char                                      bIgnoreServerCorrections : 1;                              // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ForceRep;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.NavRecoverySettings
// 0x0024
struct FNavRecoverySettings
{
	int                                                FailureCountUntilRecovery;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FailureTimeUntilRecovery;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRecoveryAttemptTime;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SearchInnerRadius;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SearchOuterRadius;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InnerSearchRadiusGrowthRate;                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterSearchRadiusGrowthRate;                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NavFailureTimeBeforeShrinkExtent;                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NavRecoverySkipFrames;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.EnemyInfo
// 0x0040
struct FEnemyInfo
{
	float                                              LastSeenTime;                                              // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FirstSeenTime;                                             // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LastSeenLocation;                                          // 0x0008(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasLoS;                                                   // 0x0014(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1SHI[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class APortalWarsCharacter>         Character;                                                 // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Threat;                                                    // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasLoSViaPortal;                                          // 0x0024(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M8GH[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LastSeenLocationVirtual;                                   // 0x0028(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APortal>                      Portal;                                                    // 0x0034(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSensedFromDamage;                                         // 0x003C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasBeenFocused;                                           // 0x003D(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2Z8O[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.BotDebugInfo
// 0x0118
struct FBotDebugInfo
{
	struct FString                                     Tree;                                                      // 0x0000(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Task;                                                      // 0x0010(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortalWarsCharacter*                        Enemy;                                                     // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PortalWars_EFocusGoal                              FocusGoal;                                                 // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NUAZ[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEnemyInfo                                  EnemyInfo;                                                 // 0x002C(0x0040) (Transient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0WZX[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEnemyInfo>                          SeenEnemies;                                               // 0x0070(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	float                                              Difficulty;                                                // 0x0080(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWantsToFire;                                              // 0x0084(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_39J3[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TrackingOffsetError;                                       // 0x0088(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TrackingPredictionError;                                   // 0x008C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ChosenPickup;                                              // 0x0090(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHeardSound;                                               // 0x00A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L1F9[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     HeardSoundInstigator;                                      // 0x00A8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAdaptive;                                               // 0x00B8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBrainOn;                                                // 0x00B9(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8AS0[0x2];                                     // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RotationRate;                                              // 0x00BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FocalPoint;                                                // 0x00C0(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T50C[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             FocusPriorities;                                           // 0x00D0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	float                                              FOV;                                                       // 0x00E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BulletScale;                                               // 0x00E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DifficultyFromTarget;                                      // 0x00E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnemyRank;                                                 // 0x00EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsingAdaptiveDifficulty;                                  // 0x00F0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZZOF[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumBlacklistedPickups;                                     // 0x00F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnemyMeleeTime;                                            // 0x00F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A2WH[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      WeaponScores;                                              // 0x0100(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                               bIsSprinting;                                              // 0x0110(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PortalWars_EWeaponState                            WeaponState;                                               // 0x0111(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZJYQ[0x6];                                     // 0x0112(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.TextChatData
// 0x0060
struct FTextChatData
{
	struct FString                                     SenderName;                                                // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            SenderID;                                                  // 0x0010(0x0028) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SenderText;                                                // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NiceText;                                                  // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PortalWars_EChatType                               ChatType;                                                  // 0x0058(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJWS[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.CheatViolations
// 0x0010
struct FCheatViolations
{
	TArray<int>                                        Counts;                                                    // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.HitInfo
// 0x00F0
struct FHitInfo
{
	unsigned char                                      ActualDamage;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LX84[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDamageEvent                                DamageEvent;                                               // 0x0008(0x0010) (NativeAccessSpecifierPublic)
	PortalWars_EHitDirection                           HitDirection;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PortalWars_EBodyPart                               BodyPart;                                                  // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QCNS[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class ACharacter>                   HitPawn;                                                   // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PortalWars_EPWHitType                              HitType;                                                   // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X2N3[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector_NetQuantize                         DamageOrigin;                                              // 0x0028(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZX99[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bIsThroughPortal : 1;                                      // 0x0038(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5KGT[0xAF];                                    // 0x0039(0x00AF) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      EnsureReplicationByte;                                     // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BKBH[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.ActorOriginAndExtent
// 0x0028
struct FActorOriginAndExtent
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q4CD[0x20];                                    // 0x0008(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.NavBarItem
// 0x0020
struct FNavBarItem
{
	struct FText                                       Title;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bSectionHeader;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PortalWars_EWidgetPlatformVisibility               PlatformVisibility;                                        // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AUIG[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.KeyConfigurationInfo
// 0x0090
struct FKeyConfigurationInfo
{
	struct FName                                       GameActionTag;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PortalWars_EControlCategory                        Category;                                                  // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FO4T[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       MenuText;                                                  // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FKey                                        PrimaryKey;                                                // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        SecondaryKey;                                              // 0x0040(0x0018) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        GamepadKey;                                                // 0x0058(0x0018) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                            // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                              // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.PlaylistPreference
// 0x0010
struct FPlaylistPreference
{
	TArray<struct FString>                             UnselectedGameModes;                                       // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.DefaultInventoryClass
// 0x0010
struct FDefaultInventoryClass
{
	TArray<class UClass*>                              DefaultInventoryClasses;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.VIPInfo
// 0x0002
struct FVIPInfo
{
	unsigned char                                      bIsVIP : 1;                                                // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CharacterID;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.VoteOption
// 0x0028
struct FVoteOption
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ModeAlias;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRandom;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideMode;                                                 // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GRCT[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.RocketStateSpecificMontages
// 0x0020
struct FRocketStateSpecificMontages
{
	struct FWeaponAnimMontage                          EmptyMontage;                                              // 0x0000(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontage                          FullMontage;                                               // 0x0010(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.PWPointDamageEvent
// 0x0008 (0x00B0 - 0x00A8)
struct FPWPointDamageEvent : public FPointDamageEvent
{
	bool                                               bThruPortal;                                               // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TOJK[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ShotNumber;                                                // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.DamageEvents
// 0x0010
struct FDamageEvents
{
	TArray<struct FPWPointDamageEvent>                 dmgEvents;                                                 // 0x0000(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.Transform_NetQuantize
// 0x0000 (0x0030 - 0x0030)
struct FTransform_NetQuantize : public FTransform
{

};

// ScriptStruct PortalWars.Bunch
// 0x0010
struct FBunch
{
	unsigned char                                      UnknownData_I42Y[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.ControllerKeybindPreset
// 0x0070
struct FControllerKeybindPreset
{
	struct FText                                       PresetName;                                                // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	TMap<struct FName, struct FKey>                    Controls;                                                  // 0x0018(0x0050) (NativeAccessSpecifierPublic)
	bool                                               bToggleSprint;                                             // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bToggleZoom;                                               // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bToggleCrouch;                                             // 0x006A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GYHM[0x5];                                     // 0x006B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.PWRadialDamageEvent
// 0x0018 (0x0058 - 0x0040)
struct FPWRadialDamageEvent : public FRadialDamageEvent
{
	bool                                               bThruPortal;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XN24[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGun*                                        MeleeWeapon;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShotNumber;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5YVU[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.PendingInvite
// 0x0008 (0x0048 - 0x0040)
struct FPendingInvite : public FInviteInfo
{
	double                                             ExpireTime;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.PortalHistory
// 0x0018
struct FPortalHistory
{
	unsigned char                                      UnknownData_5EIB[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.LineTraceHitResult
// 0x0048
struct FLineTraceHitResult
{
	unsigned char                                      bBlockingHit : 1;                                          // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShotThruPortal : 1;                                       // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q4SG[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Distance;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         ImpactPoint;                                               // 0x0008(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                              // 0x0014(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         TraceStart;                                                // 0x0020(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         TraceEnd;                                                  // 0x002C(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.AutoAimQueryParams
// 0x001C
struct FAutoAimQueryParams
{
	float                                              AutoAimRange;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoAimSphereRadius;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoAimMaxSphereRadiusMultiplier;                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoAimMaxRadiusAutoScale;                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoAimMinRadiusRange;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoAimMaxRadiusRange;                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDynamicAutoAimRadius;                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoAutoAim;                                                // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_23NC[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWars.PendingBotInfo
// 0x0010
struct FPendingBotInfo
{
	int                                                BotId;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DesiredTeamNum;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z435[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                CreationTimerHandle;                                       // 0x0008(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWars.FontMeshData
// 0x0038 (0x0040 - 0x0008)
struct FFontMeshData : public FTableRowBase
{
	struct FString                                     Character;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Mesh[0x28];                                                // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
