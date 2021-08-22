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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
// 0x0010 (0x0048 - 0x0038)
struct FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	class UMediaSource*                                MediaSource;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                SectionStartFrame;                                         // 0x0040(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bLoop;                                                     // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FNMY[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// 0x0030
struct FMovieSceneMediaSectionParams
{
	class UMediaSoundComponent*                        MediaSoundComponent;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                                MediaSource;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaTexture*                               MediaTexture;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                SectionStartFrame;                                         // 0x0020(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                SectionEndFrame;                                           // 0x0024(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLooping;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y8IK[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFrameNumber                                StartFrameOffset;                                          // 0x002C(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneMediaSectionParams               Params;                                                    // 0x0020(0x0030) (NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
