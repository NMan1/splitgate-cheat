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
// Parameters
//---------------------------------------------------------------------------

// Function AudioMixer.SynthComponent.Stop
struct USynthComponent_Stop_Params
{
};

// Function AudioMixer.SynthComponent.Start
struct USynthComponent_Start_Params
{
};

// Function AudioMixer.SynthComponent.SetVolumeMultiplier
struct USynthComponent_SetVolumeMultiplier_Params
{
	float                                              VolumeMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SynthComponent.SetSubmixSend
struct USynthComponent_SetSubmixSend_Params
{
	class USoundSubmixBase*                            Submix;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SendLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SynthComponent.SetOutputToBusOnly
struct USynthComponent_SetOutputToBusOnly_Params
{
	bool                                               bInOutputToBusOnly;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
struct USynthComponent_SetLowPassFilterFrequency_Params
{
	float                                              InLowPassFilterFrequency;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
struct USynthComponent_SetLowPassFilterEnabled_Params
{
	bool                                               InLowPassFilterEnabled;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SynthComponent.IsPlaying
struct USynthComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
struct UAudioMixerBlueprintLibrary_TrimAudioCache_Params
{
	float                                              InMegabytesToFree;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
struct UAudioMixerBlueprintLibrary_StopRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAudioRecordingExportType                   ExportType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Path;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToRecord;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                                  ExistingSoundWaveToOverwrite;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
struct UAudioMixerBlueprintLibrary_StopAudioBus_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioBus*                                   AudioBus;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToStopAnalyzing;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
struct UAudioMixerBlueprintLibrary_StartRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExpectedDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToRecord;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
struct UAudioMixerBlueprintLibrary_StartAudioBus_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioBus*                                   AudioBus;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToAnalyze;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EFFTSize                                    FFTSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EFFTPeakInterpolationMethod                 InterpolationMethod;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EFFTWindowType                              WindowType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HopSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAudioSpectrumType                          SpectrumType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
struct UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SoundSubmix;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundEffectSubmixPreset*>            SubmixEffectPresetChain;                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              FadeTimeSec;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
struct UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               PresetChain;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EntryIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBypassed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
struct UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToPause;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
struct UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                InSoundSubmix;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubmixChainIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SoundSubmix;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubmixChainIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SoundSubmix;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
struct UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               PresetChain;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EntryIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
struct UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params
{
	class USoundWave*                                  SoundWave;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnLoadCompletion;                                          // (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
struct UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params
{
	class USoundCue*                                   SoundCue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
struct UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToPause;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Params
{
	Engine_EAudioSpectrumBandPresetType                InBandPresetType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InNumBands;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InAttackTimeMsec;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InReleaseTimeMsec;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Params
{
	int                                                InNumSemitones;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AudioMixer_EMusicalNoteName                        InStartingMusicalNote;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InStartingOctave;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InAttackTimeMsec;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InReleaseTimeMsec;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Params
{
	int                                                InNumBands;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InMinimumFrequency;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InMaximumFrequency;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InAttackTimeMsec;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InReleaseTimeMsec;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
struct UAudioMixerBlueprintLibrary_IsAudioBusActive_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioBus*                                   AudioBus;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
struct UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Frequencies;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                      Phases;                                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToAnalyze;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
struct UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               PresetChain;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
struct UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Frequencies;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                      Magnitudes;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToAnalyze;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SoundSubmix;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
struct UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SoundSubmix;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeTimeSec;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
struct UAudioMixerBlueprintLibrary_AddSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SoundSubmix;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
struct UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               PresetChain;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSourceEffectChainEntry                     Entry;                                                     // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
struct UQuartzClockHandle_UnsubscribeFromTimeDivision_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EQuartzCommandQuantization                  InQuantizationBoundary;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
struct UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
struct UQuartzClockHandle_SubscribeToQuantizationEvent_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EQuartzCommandQuantization                  InQuantizationBoundary;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnQuantizationEvent;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
struct UQuartzClockHandle_SubscribeToAllQuantizationEvents_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnQuantizationEvent;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
struct UQuartzClockHandle_SetTicksPerSecond_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzQuantizationBoundary                 QuantizationBoundary;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              TicksPerSecond;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
struct UQuartzClockHandle_SetThirtySecondNotesPerMinute_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzQuantizationBoundary                 QuantizationBoundary;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              ThirtySecondsNotesPerMinute;                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
struct UQuartzClockHandle_SetSecondsPerTick_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzQuantizationBoundary                 QuantizationBoundary;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              SecondsPerTick;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
struct UQuartzClockHandle_SetMillisecondsPerTick_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzQuantizationBoundary                 QuantizationBoundary;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              MillisecondsPerTick;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
struct UQuartzClockHandle_SetBeatsPerMinute_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzQuantizationBoundary                 QuantizationBoundary;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              BeatsPerMinute;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.ResumeClock
struct UQuartzClockHandle_ResumeClock_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.ResetTransport
struct UQuartzClockHandle_ResetTransport_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InDelegate;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.PauseClock
struct UQuartzClockHandle_PauseClock_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
struct UQuartzClockHandle_GetTicksPerSecond_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
struct UQuartzClockHandle_GetThirtySecondNotesPerMinute_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
struct UQuartzClockHandle_GetSecondsPerTick_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
struct UQuartzClockHandle_GetMillisecondsPerTick_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
struct UQuartzClockHandle_GetBeatsPerMinute_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
struct USubmixEffectDynamicsProcessorPreset_SetSettings_Params
{
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
struct USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Params
{
	class USoundSubmix*                                Submix;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
struct USubmixEffectDynamicsProcessorPreset_SetAudioBus_Params
{
	class UAudioBus*                                   AudioBus;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey
struct USubmixEffectDynamicsProcessorPreset_ResetKey_Params
{
};

// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
struct USubmixEffectSubmixEQPreset_SetSettings_Params
{
	struct FSubmixEffectSubmixEQSettings               InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
struct USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params
{
	class UReverbEffect*                               InReverbEffect;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WetLevel;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryLevel;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
struct USubmixEffectReverbPreset_SetSettings_Params
{
	struct FSubmixEffectReverbSettings                 InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.IsQuartzEnabled
struct UQuartzSubsystem_IsQuartzEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
struct UQuartzSubsystem_GetRoundTripMinLatency_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
struct UQuartzSubsystem_GetRoundTripMaxLatency_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
struct UQuartzSubsystem_GetRoundTripAverageLatency_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.GetHandleForClock
struct UQuartzSubsystem_GetHandleForClock_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ClockName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuartzClockHandle*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.DoesClockExist
struct UQuartzSubsystem_DoesClockExist_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ClockName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.DeleteClockByName
struct UQuartzSubsystem_DeleteClockByName_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ClockName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.DeleteClockByHandle
struct UQuartzSubsystem_DeleteClockByHandle_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuartzClockHandle*                          InClockHandle;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.QuartzSubsystem.CreateNewClock
struct UQuartzSubsystem_CreateNewClock_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ClockName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzClockSettings                        InSettings;                                                // (Parm, NativeAccessSpecifierPublic)
	bool                                               bOverrideSettingsIfClockExists;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuartzClockHandle*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
