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

// Enum OnlineSubsystem1047.EPlaylistGameModeType
enum class OnlineSubsystem1047_EPlaylistGameModeType : uint8_t
{
	EPlaylistGameModeType__Standard = 0,
	EPlaylistGameModeType__Featured = 1,
	EPlaylistGameModeType__EPlaylistGameModeType_MAX = 2,

};

// Enum OnlineSubsystem1047.EFriendRequestType
enum class OnlineSubsystem1047_EFriendRequestType : uint8_t
{
	EFriendRequestType__Incoming   = 0,
	EFriendRequestType__Outgoing   = 1,
	EFriendRequestType__EFriendRequestType_MAX = 2,

};

// Enum OnlineSubsystem1047.EStoreSectionType
enum class OnlineSubsystem1047_EStoreSectionType : uint8_t
{
	EStoreSectionType__Small       = 0,
	EStoreSectionType__Medium      = 1,
	EStoreSectionType__Big         = 2,
	EStoreSectionType__Featured    = 3,
	EStoreSectionType__EStoreSectionType_MAX = 4,

};

// Enum OnlineSubsystem1047.EStoreItemType
enum class OnlineSubsystem1047_EStoreItemType : uint8_t
{
	EStoreItemType__Customization  = 0,
	EStoreItemType__Bundle         = 1,
	EStoreItemType__EStoreItemType_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystem1047.InviteInfo
// 0x0040
struct FInviteInfo
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Type;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EncodedCompositePlatformId;                                // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.ReportPlayerRequestArgs
// 0x0050
struct FReportPlayerRequestArgs
{
	struct FString                                     EncodedCompositeUserId;                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EncodedCompositePlatformUserId;                            // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Category;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameSessionId;                                             // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.SendClientLogsRequestArgs
// 0x0020
struct FSendClientLogsRequestArgs
{
	struct FString                                     MetaData;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Logs;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RankLevelNotificationData
// 0x0020
struct FRankLevelNotificationData
{
	struct FString                                     PlaylistType;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RatingBefore;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RatingAfter;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelBefore;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelAfter;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RewardNotificationData
// 0x0020
struct FRewardNotificationData
{
	struct FString                                     Reason;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRewardData>                         Rewards;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.ItemShopMenuData
// 0x0010
struct FItemShopMenuData
{
	struct FString                                     ItemId;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.TutorialStageCompletedData
// 0x0004
struct FTutorialStageCompletedData
{
	int                                                Level;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.TutorialStartedData
// 0x0001
struct FTutorialStartedData
{
	bool                                               IsAutomaticStart;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.GetVivoxTokenResponseArgs
// 0x0080
struct FGetVivoxTokenResponseArgs
{
	bool                                               Success;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JARU[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FErrorInfo                                  ErrorInfo;                                                 // 0x0008(0x0058) (NativeAccessSpecifierPublic)
	struct FString                                     Uri;                                                       // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                     // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.GetVivoxTokenRequestArgs
// 0x0018
struct FGetVivoxTokenRequestArgs
{
	struct FString                                     Type;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HU3E[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.FinishRaceCourseRequestArgs
// 0x0018
struct FFinishRaceCourseRequestArgs
{
	struct FString                                     Map;                                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeMs;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LU5R[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.RaceCourseResult
// 0x0018
struct FRaceCourseResult
{
	struct FString                                     Map;                                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BestTimeMs;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5L81[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.UserRaceCourseInfo
// 0x0010 (0x0030 - 0x0020)
struct FUserRaceCourseInfo : public FUserInfo
{
	TArray<struct FRaceCourseResult>                   RaceCourseResults;                                         // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.GetRaceCourseResultsResponseArgs
// 0x0040
struct FGetRaceCourseResultsResponseArgs
{
	struct FUserRaceCourseInfo                         User;                                                      // 0x0000(0x0030) (NativeAccessSpecifierPublic)
	TArray<struct FUserRaceCourseInfo>                 Friends;                                                   // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.GetRaceCourseResultsRequestArgs
// 0x0010
struct FGetRaceCourseResultsRequestArgs
{
	TArray<struct FString>                             EncodedCompositePlatformIds;                               // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.LootboxItemInfo
// 0x0010
struct FLootboxItemInfo
{
	int                                                CustomizationKey;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CustomizationValue;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Duplicate;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IKPU[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CustomizationRarity;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.OpenLootboxResponseArgs
// 0x0010
struct FOpenLootboxResponseArgs
{
	TArray<struct FLootboxItemInfo>                    LootboxContents;                                           // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RedeemDlcKeyRequestArgs
// 0x0010
struct FRedeemDlcKeyRequestArgs
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RedeemItemRequestArgs
// 0x0010
struct FRedeemItemRequestArgs
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RedeemBattlePassLevelsRequestArgs
// 0x0004
struct FRedeemBattlePassLevelsRequestArgs
{
	int                                                NumLevels;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RedeemBattlePassPremiumRequestArgs
// 0x0001
struct FRedeemBattlePassPremiumRequestArgs
{
	bool                                               IsBundle;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.FinalizeTransactionRequestArgs
// 0x0040
struct FFinalizeTransactionRequestArgs
{
	struct FString                                     TransactionId;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PurchasableId;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_00XX[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CreatorCode;                                               // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Price;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BKUC[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrencyCode;                                              // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.SendInviteRequestArgs
// 0x0000 (0x0040 - 0x0040)
struct FSendInviteRequestArgs : public FInviteInfo
{

};

// ScriptStruct OnlineSubsystem1047.AcceptInviteRequestArgs
// 0x0000 (0x0040 - 0x0040)
struct FAcceptInviteRequestArgs : public FInviteInfo
{

};

// ScriptStruct OnlineSubsystem1047.GameSessionConfigArgs
// 0x0050
struct FGameSessionConfigArgs
{
	struct FString                                     GameSessionId;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformSessionID;                                         // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ip;                                                        // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8MOX[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EncryptionKey;                                             // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCrossplay;                                               // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FQ6N[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.GameSessionReconnectResponseArgs
// 0x0000 (0x0050 - 0x0050)
struct FGameSessionReconnectResponseArgs : public FGameSessionConfigArgs
{

};

// ScriptStruct OnlineSubsystem1047.GameSessionReconnectRequestArgs
// 0x0018
struct FGameSessionReconnectRequestArgs
{
	struct FString                                     GameSessionId;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsReconnect;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RXS0[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.CustomGameResponseInfo
// 0x00B8
struct FCustomGameResponseInfo
{
	struct FString                                     GameSessionId;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerType;                                                // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerCount;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayerCount;                                            // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpectatorCount;                                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSpectatorCount;                                         // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Map;                                                       // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Mode;                                                      // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GroupName;                                                 // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCrossplay;                                               // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8LLV[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUserInfo                                   CreatedBy;                                                 // 0x0098(0x0020) (NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.FindCustomGamesResponseArgs
// 0x0010
struct FFindCustomGamesResponseArgs
{
	TArray<struct FCustomGameResponseInfo>             Sessions;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.JoinCustomGameRequestArgs
// 0x0028
struct FJoinCustomGameRequestArgs
{
	struct FString                                     GameSessionId;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AsSpectator;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X6EY[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.CreateCustomGameRequestArgs
// 0x0058
struct FCreateCustomGameRequestArgs
{
	struct FString                                     ServerType;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCrossplay;                                               // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZHWB[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.CancelMatchmakingRequestArgs
// 0x0010
struct FCancelMatchmakingRequestArgs
{
	struct FString                                     MatchmakingTicketID;                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.MatchmakingPlaylistInfo
// 0x0020
struct FMatchmakingPlaylistInfo
{
	struct FString                                     Type;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             GameModes;                                                 // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.StartMatchmakingRequestArgs
// 0x0038
struct FStartMatchmakingRequestArgs
{
	TArray<struct FMatchmakingPlaylistInfo>            Playlists;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCrossplay;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MDV8[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     QueueReason;                                               // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.BlockActionRequestArgs
// 0x0020
struct FBlockActionRequestArgs
{
	struct FString                                     EncodedCompositeUserId;                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EncodedCompositePlatformId;                                // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.FriendRequestActionRequestArgs
// 0x0010
struct FFriendRequestActionRequestArgs
{
	struct FString                                     EncodedCompositeUserId;                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.FriendRequestRequestArgs
// 0x0020
struct FFriendRequestRequestArgs
{
	struct FString                                     EncodedCompositePlatformId;                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FriendId;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.FriendUserInfo
// 0x0008 (0x0028 - 0x0020)
struct FFriendUserInfo : public FUserInfo
{
	bool                                               IsOnline;                                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1PNN[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.GetBlockedPlayersResponseArgs
// 0x0010
struct FGetBlockedPlayersResponseArgs
{
	TArray<struct FFriendUserInfo>                     BlockedUsers;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RecentPlayerInfo
// 0x0008 (0x0030 - 0x0028)
struct FRecentPlayerInfo : public FFriendUserInfo
{
	int64_t                                            EncounteredAt;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.GetRecentPlayersResponseArgs
// 0x0010
struct FGetRecentPlayersResponseArgs
{
	TArray<struct FRecentPlayerInfo>                   RecentlyEncounteredUsers;                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.GetFriendsResponseArgs
// 0x0010
struct FGetFriendsResponseArgs
{
	TArray<struct FFriendUserInfo>                     Friends;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.PromotePartyMemberRequestArgs
// 0x0010
struct FPromotePartyMemberRequestArgs
{
	struct FString                                     EncodedCompositeUserId;                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.KickPartyMemberRequestArgs
// 0x0010
struct FKickPartyMemberRequestArgs
{
	struct FString                                     EncodedCompositeUserId;                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.OpenDropResponseArgs
// 0x0018
struct FOpenDropResponseArgs
{
	struct FCustomizationId                            Customization;                                             // 0x0000(0x0018) (HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.ClaimChallengeRequestArgs
// 0x0008
struct FClaimChallengeRequestArgs
{
	PortalWarsGlobals_EChallengeType                   ChallengeType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q353[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ChallengeId;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RedeemReferFriendCodeRequestArgs
// 0x0010
struct FRedeemReferFriendCodeRequestArgs
{
	struct FString                                     ReferralCode;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UpdateUserLocationDataRequestArgs
// 0x0010
struct FUpdateUserLocationDataRequestArgs
{
	TArray<struct FPingToRegionInfo>                   Pings;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UpdateChosenCustomizationsRequestArgs
// 0x0010
struct FUpdateChosenCustomizationsRequestArgs
{
	TArray<struct FCustomizationId>                    ChosenCustomizations;                                      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RefreshAuthTokenResponseArgs
// 0x0018
struct FRefreshAuthTokenResponseArgs
{
	struct FString                                     AuthToken;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            RefreshInMs;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RefreshAuthTokenRequestArgs
// 0x0010
struct FRefreshAuthTokenRequestArgs
{
	struct FString                                     PlatformAuthToken;                                         // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.GetAuthTokenResponseArgs
// 0x0028
struct FGetAuthTokenResponseArgs
{
	struct FString                                     AuthToken;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userId;                                                    // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            RefreshInMs;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.GetAuthTokenRequestArgs
// 0x0068
struct FGetAuthTokenRequestArgs
{
	struct FString                                     Platform;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformAuthToken;                                         // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformTitleId;                                           // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformEnvironment;                                       // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformOs;                                                // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuthToken;                                                 // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeDifferenceFromUTC;                                     // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_94LR[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.GetServerStatusResponseArgs
// 0x0030
struct FGetServerStatusResponseArgs
{
	bool                                               IsLive;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WOP9[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ErrorCode;                                                 // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ErrorText;                                                 // 0x0018(0x0018) (NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.GetServerStatusRequestArgs
// 0x0010
struct FGetServerStatusRequestArgs
{
	struct FString                                     EncodedCompositePlatformId;                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.PlaylistGameModeInfo
// 0x0028
struct FPlaylistGameModeInfo
{
	struct FString                                     GameMode;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	OnlineSubsystem1047_EPlaylistGameModeType          Type;                                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SFQD[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxPartySize;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            EndAtMs;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinProgressionLevel;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_07LF[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.PlaylistStatusInfo
// 0x0048
struct FPlaylistStatusInfo
{
	struct FString                                     PlaylistType;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPartySize;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsActive;                                                  // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RJMZ[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            StartAtMs;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            EndAtMs;                                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XpBoostPercentage;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinProgressionLevel;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlaylistGameModeInfo>               GameModes;                                                 // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MinNumGameModesToSelect;                                   // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WO84[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.NewsFeedInfo
// 0x0078
struct FNewsFeedInfo
{
	struct FText                                       Title;                                                     // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0018(0x0018) (NativeAccessSpecifierPublic)
	struct FString                                     ImageUrl;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ActionType;                                                // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ActionTitle;                                               // 0x0050(0x0018) (NativeAccessSpecifierPublic)
	struct FString                                     ActionValue;                                               // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.LeaderboardPlayerInfo
// 0x0000 (0x0020 - 0x0020)
struct FLeaderboardPlayerInfo : public FUserInfo
{

};

// ScriptStruct OnlineSubsystem1047.RaceLeaderboardPlayerInfo
// 0x0008 (0x0028 - 0x0020)
struct FRaceLeaderboardPlayerInfo : public FLeaderboardPlayerInfo
{
	int                                                TimeMs;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U9TA[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.RacePlatformLeaderboardInfo
// 0x0020
struct FRacePlatformLeaderboardInfo
{
	struct FString                                     Platform;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRaceLeaderboardPlayerInfo>          Leaders;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RaceLeaderboardInfo
// 0x0030
struct FRaceLeaderboardInfo
{
	struct FString                                     Map;                                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRaceLeaderboardPlayerInfo>          Leaders;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRacePlatformLeaderboardInfo>        PlatformLeaders;                                           // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RankLeaderboardPlayerInfo
// 0x0008 (0x0028 - 0x0020)
struct FRankLeaderboardPlayerInfo : public FLeaderboardPlayerInfo
{
	int                                                RankXP;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KADC[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.RankPlatformLeaderboardInfo
// 0x0020
struct FRankPlatformLeaderboardInfo
{
	struct FString                                     Platform;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRankLeaderboardPlayerInfo>          Leaders;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RankLeaderboardInfo
// 0x0030
struct FRankLeaderboardInfo
{
	struct FString                                     PlaylistType;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRankLeaderboardPlayerInfo>          Leaders;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRankPlatformLeaderboardInfo>        PlatformLeaders;                                           // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.NoticeStatus
// 0x0028
struct FNoticeStatus
{
	struct FString                                     NoticeCode;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FErrorData>                          NoticeData;                                                // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int64_t                                            ExpirationTimeMs;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.FriendRequestInfo
// 0x0010 (0x0030 - 0x0020)
struct FFriendRequestInfo : public FUserInfo
{
	int64_t                                            InvitedAt;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	OnlineSubsystem1047_EFriendRequestType             Type;                                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TZN2[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.PartyUserInfo
// 0x00D0 (0x00F0 - 0x0020)
struct FPartyUserInfo : public FUserInfo
{
	TArray<struct FUserRankInfo>                       UserRanks;                                                 // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUserStatsInfo                              UserStats;                                                 // 0x0030(0x0080) (NativeAccessSpecifierPublic)
	TArray<struct FCustomizationId>                    UserChosenCustomizations;                                  // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUserProgressionInfo                        UserProgression;                                           // 0x00C0(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct FUserDailyStreakInfo                        DailyPlayStreak;                                           // 0x00C8(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	bool                                               IsLeader;                                                  // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B6VB[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.StoreSectionInfo
// 0x0058
struct FStoreSectionInfo
{
	struct FText                                       Title;                                                     // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	OnlineSubsystem1047_EStoreSectionType              Type;                                                      // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6133[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            ExpirationTimeMs;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Items;                                                     // 0x0038(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FM1W[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.StoreCategoryInfo
// 0x0028
struct FStoreCategoryInfo
{
	struct FText                                       Title;                                                     // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	TArray<struct FStoreSectionInfo>                   Sections;                                                  // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.StoreItemInfo
// 0x0028
struct FStoreItemInfo
{
	unsigned char                                      UnknownData_TP3H[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ID;                                                        // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyCost;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	OnlineSubsystem1047_EStoreItemType                 ItemType;                                                  // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MBDH[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PurchasableId;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M4Y6[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.StoreBundleItemInfo
// 0x0058 (0x0080 - 0x0028)
struct FStoreBundleItemInfo : public FStoreItemInfo
{
	struct FText                                       Title;                                                     // 0x0028(0x0018) (NativeAccessSpecifierPublic)
	struct FString                                     ImageUrl;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Rarity;                                                    // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Items;                                                     // 0x0060(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1HRI[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.StoreCustomizationItemInfo
// 0x0018 (0x0040 - 0x0028)
struct FStoreCustomizationItemInfo : public FStoreItemInfo
{
	struct FCustomizationId                            Customization;                                             // 0x0028(0x0018) (HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserChallengeUpdate
// 0x0014
struct FUserChallengeUpdate
{
	PortalWarsGlobals_EChallengeType                   Type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LRBR[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ID;                                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PrevValue;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewValue;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bJustCompleted;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7N5O[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.UserRankUpdate
// 0x0050
struct FUserRankUpdate
{
	struct FString                                     RankType;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUserRankInfo                               PrevRank;                                                  // 0x0010(0x0020) (NativeAccessSpecifierPublic)
	struct FUserRankInfo                               NewRank;                                                   // 0x0030(0x0020) (NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserProgressionUpdate
// 0x0040
struct FUserProgressionUpdate
{
	TArray<struct FXPAllocation>                       XpAllocations;                                             // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               IsPostGame;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JJO1[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUserProgressionInfo                        PrevProgression;                                           // 0x0014(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct FUserProgressionInfo                        NewProgression;                                            // 0x001C(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct FUserBattlePassProgressionInfo              PrevBattlePassProgression;                                 // 0x0024(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FUserBattlePassProgressionInfo              NewBattlePassProgression;                                  // 0x0030(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7SGF[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.UserPostGameStat
// 0x0030
struct FUserPostGameStat
{
	struct FString                                     StatName;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Unit;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifetimeAvg;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ImprovementPercentage;                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Placement;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RequestClientLogsEventArgs
// 0x0010
struct FRequestClientLogsEventArgs
{
	struct FString                                     MetaData;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RaceLeaderboardUpdateEventArgs
// 0x0010
struct FRaceLeaderboardUpdateEventArgs
{
	TArray<struct FRaceLeaderboardInfo>                Leaderboards;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.RankLeaderboardUpdateEventArgs
// 0x0010
struct FRankLeaderboardUpdateEventArgs
{
	TArray<struct FRankLeaderboardInfo>                Leaderboards;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.NewsFeedUpdateEventArgs
// 0x0010
struct FNewsFeedUpdateEventArgs
{
	TArray<struct FNewsFeedInfo>                       NewsFeedEntries;                                           // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.HappyHourStatusUpdateEventArgs
// 0x0010
struct FHappyHourStatusUpdateEventArgs
{
	int64_t                                            StartTimeMs;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            EndTimeMs;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.PlaylistStatusUpdateEventArgs
// 0x0010
struct FPlaylistStatusUpdateEventArgs
{
	TArray<struct FPlaylistStatusInfo>                 Playlists;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserLimitedTimeOfferUpdateEventArgs
// 0x0028
struct FUserLimitedTimeOfferUpdateEventArgs
{
	struct FStoreCategoryInfo                          LimitedTimeOfferCategory;                                  // 0x0000(0x0028) (NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.StoreUpdateEventArgs
// 0x0010
struct FStoreUpdateEventArgs
{
	TArray<struct FStoreCategoryInfo>                  Categories;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserInviteEventArgs
// 0x0000 (0x0040 - 0x0040)
struct FUserInviteEventArgs : public FInviteInfo
{

};

// ScriptStruct OnlineSubsystem1047.GameSessionReconnectAvailableEventArgs
// 0x0018
struct FGameSessionReconnectAvailableEventArgs
{
	struct FString                                     GameSessionId;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DurationMs;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UMPT[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.CustomGameFailedEventArgs
// 0x0058
struct FCustomGameFailedEventArgs
{
	struct FErrorInfo                                  ErrorInfo;                                                 // 0x0000(0x0058) (NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.CustomGameJoinedEventArgs
// 0x0008 (0x0058 - 0x0050)
struct FCustomGameJoinedEventArgs : public FGameSessionConfigArgs
{
	bool                                               AsSpectator;                                               // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_45FH[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.WaitingAreaFailedEventArgs
// 0x0058
struct FWaitingAreaFailedEventArgs
{
	struct FErrorInfo                                  ErrorInfo;                                                 // 0x0000(0x0058) (NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.WaitingAreaJoinedEventArgs
// 0x0000 (0x0050 - 0x0050)
struct FWaitingAreaJoinedEventArgs : public FGameSessionConfigArgs
{

};

// ScriptStruct OnlineSubsystem1047.MatchmakingFailedEventArgs
// 0x0058
struct FMatchmakingFailedEventArgs
{
	struct FErrorInfo                                  ErrorInfo;                                                 // 0x0000(0x0058) (NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.MatchmakingCompletedEventArgs
// 0x0000 (0x0050 - 0x0050)
struct FMatchmakingCompletedEventArgs : public FGameSessionConfigArgs
{

};

// ScriptStruct OnlineSubsystem1047.MatchmakingCanceledEventArgs
// 0x0001
struct FMatchmakingCanceledEventArgs
{
	unsigned char                                      UnknownData_O5HZ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.MatchmakingStartedEventArgs
// 0x0020
struct FMatchmakingStartedEventArgs
{
	TArray<struct FMatchmakingPlaylistInfo>            Playlists;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     MatchmakingTicketID;                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.FriendRequestAcceptedEventArgs
// 0x0000 (0x0030 - 0x0030)
struct FFriendRequestAcceptedEventArgs : public FFriendRequestInfo
{

};

// ScriptStruct OnlineSubsystem1047.FriendRequestEventArgs
// 0x0000 (0x0030 - 0x0030)
struct FFriendRequestEventArgs : public FFriendRequestInfo
{

};

// ScriptStruct OnlineSubsystem1047.UserFriendRequestsUpdateEventArgs
// 0x0020
struct FUserFriendRequestsUpdateEventArgs
{
	TArray<struct FFriendRequestInfo>                  IncomingFriendRequests;                                    // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFriendRequestInfo>                  OutgoingFriendRequests;                                    // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.PartyUpdateEventArgs
// 0x0030
struct FPartyUpdateEventArgs
{
	struct FString                                     partyId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformSessionID;                                         // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPartyUserInfo>                      Players;                                                   // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserAchievementsUnlockedEventArgs
// 0x0010
struct FUserAchievementsUnlockedEventArgs
{
	TArray<int>                                        Achievements;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.SeasonChallengesUpdateEventArgs
// 0x0010
struct FSeasonChallengesUpdateEventArgs
{
	int64_t                                            ExpirationTimeMs;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentPhase;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ACAC[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.WeeklyChallengesUpdateEventArgs
// 0x0010
struct FWeeklyChallengesUpdateEventArgs
{
	int64_t                                            ExpirationTimeMs;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentPhase;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YB8Z[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.DailyChallengesUpdateEventArgs
// 0x0018
struct FDailyChallengesUpdateEventArgs
{
	int64_t                                            ExpirationTimeMs;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        DailyChallenges;                                           // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserAlertEventArgs
// 0x0020
struct FUserAlertEventArgs
{
	struct FString                                     AlertCode;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FErrorData>                          AlertData;                                                 // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserFriendIdUpdateEventArgs
// 0x0010
struct FUserFriendIdUpdateEventArgs
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserReferralsUpdateEventArgs
// 0x0028
struct FUserReferralsUpdateEventArgs
{
	struct FUserReferFriendInfo                        Referrals;                                                 // 0x0000(0x0028) (NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserPostGameStatsEventArgs
// 0x0010
struct FUserPostGameStatsEventArgs
{
	TArray<struct FUserPostGameStat>                   PostGameStats;                                             // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserProgressionUpdateEventArgs
// 0x0030
struct FUserProgressionUpdateEventArgs
{
	struct FUserProgressionInfo                        Progression;                                               // 0x0000(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct FUserBattlePassProgressionInfo              BattlePassProgression;                                     // 0x0008(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q5W8[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FXPAllocation>                       XpAllocations;                                             // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               IsPostGame;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_05H1[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem1047.UserSeasonRewardsUpdateEventArgs
// 0x0000 (0x0008 - 0x0008)
struct FUserSeasonRewardsUpdateEventArgs : public FUserSeasonRewardInfo
{

};

// ScriptStruct OnlineSubsystem1047.UserDailyPlayStreakUpdateEventArgs
// 0x0020
struct FUserDailyPlayStreakUpdateEventArgs
{
	struct FUserDailyStreakInfo                        DailyPlayStreak;                                           // 0x0000(0x0020) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserDailyCheckInUpdateEventArgs
// 0x0020
struct FUserDailyCheckInUpdateEventArgs
{
	struct FUserDailyCheckInInfo                       DailyCheckIn;                                              // 0x0000(0x0020) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserRewardsEventArgs
// 0x0020
struct FUserRewardsEventArgs
{
	struct FString                                     Type;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRewardData>                         Rewards;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserChallengesUpdateEventArgs
// 0x0040
struct FUserChallengesUpdateEventArgs
{
	struct FUserChallengesInfo                         Daily;                                                     // 0x0000(0x0010) (NativeAccessSpecifierPublic)
	struct FUserChallengesInfo                         Weekly;                                                    // 0x0010(0x0010) (NativeAccessSpecifierPublic)
	struct FUserChallengesInfo                         Season;                                                    // 0x0020(0x0010) (NativeAccessSpecifierPublic)
	struct FUserChallengesInfo                         Weapon;                                                    // 0x0030(0x0010) (NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserDropsUpdateEventArgs
// 0x0004
struct FUserDropsUpdateEventArgs
{
	int                                                Count;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserCurrencyUpdateEventArgs
// 0x0008
struct FUserCurrencyUpdateEventArgs
{
	int                                                Currency;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondaryCurrency;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserChosenCustomizationsUpdateEventArgs
// 0x0010
struct FUserChosenCustomizationsUpdateEventArgs
{
	TArray<struct FCustomizationId>                    ChosenCustomizations;                                      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UnlockedCustomizations
// 0x0018
struct FUnlockedCustomizations
{
	PortalWarsGlobals_ECustomizationType               CustomizationType;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EJNX[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             CustomizationValues;                                       // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserCustomizationsUpdateEventArgs
// 0x0010
struct FUserCustomizationsUpdateEventArgs
{
	TArray<struct FUnlockedCustomizations>             Customizations;                                            // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserRanksUpdateEventArgs
// 0x0010
struct FUserRanksUpdateEventArgs
{
	TArray<struct FUserRankInfo>                       Ranks;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserStatsUpdateEventArgs
// 0x00D0
struct FUserStatsUpdateEventArgs
{
	struct FUserStatsInfo                              Overall;                                                   // 0x0000(0x0080) (NativeAccessSpecifierPublic)
	TMap<struct FString, struct FUserStatsInfo>        Seasons;                                                   // 0x0080(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.UserSessionUpdateEventArgs
// 0x0010
struct FUserSessionUpdateEventArgs
{
	struct FString                                     SessionId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem1047.ReloginEventArgs
// 0x0010
struct FReloginEventArgs
{
	struct FString                                     Reason;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
