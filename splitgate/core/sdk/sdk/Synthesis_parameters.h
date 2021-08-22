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

// Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
struct UModularSynthLibrary_AddModularSynthPresetToBankAsset_Params
{
	class UModularSynthPresetBank*                     InBank;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularSynthPreset                         Preset;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     PresetName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetSynthPreset
struct UModularSynthComponent_SetSynthPreset_Params
{
	struct FModularSynthPreset                         SynthPreset;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetSustainGain
struct UModularSynthComponent_SetSustainGain_Params
{
	float                                              SustainGain;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
struct UModularSynthComponent_SetStereoDelayWetlevel_Params
{
	float                                              DelayWetlevel;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetStereoDelayTime
struct UModularSynthComponent_SetStereoDelayTime_Params
{
	float                                              DelayTimeMsec;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
struct UModularSynthComponent_SetStereoDelayRatio_Params
{
	float                                              DelayRatio;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetStereoDelayMode
struct UModularSynthComponent_SetStereoDelayMode_Params
{
	Synthesis_ESynthStereoDelayMode                    StereoDelayMode;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
struct UModularSynthComponent_SetStereoDelayIsEnabled_Params
{
	bool                                               StereoDelayEnabled;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
struct UModularSynthComponent_SetStereoDelayFeedback_Params
{
	float                                              DelayFeedback;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetSpread
struct UModularSynthComponent_SetSpread_Params
{
	float                                              Spread;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetReleaseTime
struct UModularSynthComponent_SetReleaseTime_Params
{
	float                                              ReleaseTimeMsec;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetPortamento
struct UModularSynthComponent_SetPortamento_Params
{
	float                                              Portamento;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetPitchBend
struct UModularSynthComponent_SetPitchBend_Params
{
	float                                              PitchBend;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetPan
struct UModularSynthComponent_SetPan_Params
{
	float                                              Pan;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetOscType
struct UModularSynthComponent_SetOscType_Params
{
	int                                                OscIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynth1OscType                           OscType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetOscSync
struct UModularSynthComponent_SetOscSync_Params
{
	bool                                               bIsSynced;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetOscSemitones
struct UModularSynthComponent_SetOscSemitones_Params
{
	int                                                OscIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Semitones;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetOscPulsewidth
struct UModularSynthComponent_SetOscPulsewidth_Params
{
	int                                                OscIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pulsewidth;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetOscOctave
struct UModularSynthComponent_SetOscOctave_Params
{
	int                                                OscIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Octave;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetOscGainMod
struct UModularSynthComponent_SetOscGainMod_Params
{
	int                                                OscIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OscGainMod;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetOscGain
struct UModularSynthComponent_SetOscGain_Params
{
	int                                                OscIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OscGain;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
struct UModularSynthComponent_SetOscFrequencyMod_Params
{
	int                                                OscIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OscFreqMod;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetOscCents
struct UModularSynthComponent_SetOscCents_Params
{
	int                                                OscIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Cents;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
struct UModularSynthComponent_SetModEnvSustainGain_Params
{
	float                                              SustainGain;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
struct UModularSynthComponent_SetModEnvReleaseTime_Params
{
	float                                              Release;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetModEnvPatch
struct UModularSynthComponent_SetModEnvPatch_Params
{
	Synthesis_ESynthModEnvPatch                        InPatchType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetModEnvInvert
struct UModularSynthComponent_SetModEnvInvert_Params
{
	bool                                               bInvert;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetModEnvDepth
struct UModularSynthComponent_SetModEnvDepth_Params
{
	float                                              Depth;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
struct UModularSynthComponent_SetModEnvDecayTime_Params
{
	float                                              DecayTimeMsec;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
struct UModularSynthComponent_SetModEnvBiasPatch_Params
{
	Synthesis_ESynthModEnvBiasPatch                    InPatchType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
struct UModularSynthComponent_SetModEnvBiasInvert_Params
{
	bool                                               bInvert;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
struct UModularSynthComponent_SetModEnvAttackTime_Params
{
	float                                              AttackTimeMsec;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetLFOType
struct UModularSynthComponent_SetLFOType_Params
{
	int                                                LFOIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthLFOType                            LFOType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetLFOPatch
struct UModularSynthComponent_SetLFOPatch_Params
{
	int                                                LFOIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthLFOPatchType                       LFOPatchType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetLFOMode
struct UModularSynthComponent_SetLFOMode_Params
{
	int                                                LFOIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthLFOMode                            LFOMode;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetLFOGainMod
struct UModularSynthComponent_SetLFOGainMod_Params
{
	int                                                LFOIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GainMod;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetLFOGain
struct UModularSynthComponent_SetLFOGain_Params
{
	int                                                LFOIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gain;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
struct UModularSynthComponent_SetLFOFrequencyMod_Params
{
	int                                                LFOIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrequencyModHz;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetLFOFrequency
struct UModularSynthComponent_SetLFOFrequency_Params
{
	int                                                LFOIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrequencyHz;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetGainDb
struct UModularSynthComponent_SetGainDb_Params
{
	float                                              GainDb;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetFilterType
struct UModularSynthComponent_SetFilterType_Params
{
	Synthesis_ESynthFilterType                         FilterType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetFilterQMod
struct UModularSynthComponent_SetFilterQMod_Params
{
	float                                              FilterQ;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetFilterQ
struct UModularSynthComponent_SetFilterQ_Params
{
	float                                              FilterQ;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
struct UModularSynthComponent_SetFilterFrequencyMod_Params
{
	float                                              FilterFrequencyHz;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetFilterFrequency
struct UModularSynthComponent_SetFilterFrequency_Params
{
	float                                              FilterFrequencyHz;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
struct UModularSynthComponent_SetFilterAlgorithm_Params
{
	Synthesis_ESynthFilterAlgorithm                    FilterAlgorithm;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetEnableUnison
struct UModularSynthComponent_SetEnableUnison_Params
{
	bool                                               EnableUnison;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetEnableRetrigger
struct UModularSynthComponent_SetEnableRetrigger_Params
{
	bool                                               RetriggerEnabled;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetEnablePolyphony
struct UModularSynthComponent_SetEnablePolyphony_Params
{
	bool                                               bEnablePolyphony;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetEnablePatch
struct UModularSynthComponent_SetEnablePatch_Params
{
	struct FPatchId                                    PatchId;                                                   // (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsEnabled;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetEnableLegato
struct UModularSynthComponent_SetEnableLegato_Params
{
	bool                                               LegatoEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetDecayTime
struct UModularSynthComponent_SetDecayTime_Params
{
	float                                              DecayTimeMsec;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetChorusFrequency
struct UModularSynthComponent_SetChorusFrequency_Params
{
	float                                              Frequency;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetChorusFeedback
struct UModularSynthComponent_SetChorusFeedback_Params
{
	float                                              Feedback;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetChorusEnabled
struct UModularSynthComponent_SetChorusEnabled_Params
{
	bool                                               EnableChorus;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetChorusDepth
struct UModularSynthComponent_SetChorusDepth_Params
{
	float                                              Depth;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.SetAttackTime
struct UModularSynthComponent_SetAttackTime_Params
{
	float                                              AttackTimeMsec;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.NoteOn
struct UModularSynthComponent_NoteOn_Params
{
	float                                              Note;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Velocity;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.NoteOff
struct UModularSynthComponent_NoteOff_Params
{
	float                                              Note;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllNotesOff;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKillAllNotes;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.ModularSynthComponent.CreatePatch
struct UModularSynthComponent_CreatePatch_Params
{
	Synthesis_ESynth1PatchSource                       PatchSource;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSynth1PatchCable>                   PatchCables;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bEnableByDefault;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPatchId                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
struct USourceEffectBitCrusherPreset_SetSettings_Params
{
	struct FSourceEffectBitCrusherBaseSettings         Settings;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
struct USourceEffectBitCrusherPreset_SetSampleRateModulator_Params
{
	class USoundModulatorBase*                         Modulator;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
struct USourceEffectBitCrusherPreset_SetSampleRate_Params
{
	float                                              SampleRate;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
struct USourceEffectBitCrusherPreset_SetModulationSettings_Params
{
	struct FSourceEffectBitCrusherSettings             ModulationSettings;                                        // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectBitCrusherPreset.SetBits
struct USourceEffectBitCrusherPreset_SetBits_Params
{
	float                                              Bits;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
struct USourceEffectBitCrusherPreset_SetBitModulator_Params
{
	class USoundModulatorBase*                         Modulator;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetWetModulator
struct USourceEffectChorusPreset_SetWetModulator_Params
{
	class USoundModulatorBase*                         Modulator;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetWet
struct USourceEffectChorusPreset_SetWet_Params
{
	float                                              WetAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator
struct USourceEffectChorusPreset_SetSpreadModulator_Params
{
	class USoundModulatorBase*                         Modulator;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetSpread
struct USourceEffectChorusPreset_SetSpread_Params
{
	float                                              Spread;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetSettings
struct USourceEffectChorusPreset_SetSettings_Params
{
	struct FSourceEffectChorusBaseSettings             Settings;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
struct USourceEffectChorusPreset_SetModulationSettings_Params
{
	struct FSourceEffectChorusSettings                 ModulationSettings;                                        // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
struct USourceEffectChorusPreset_SetFrequencyModulator_Params
{
	class USoundModulatorBase*                         Modulator;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetFrequency
struct USourceEffectChorusPreset_SetFrequency_Params
{
	float                                              Frequency;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
struct USourceEffectChorusPreset_SetFeedbackModulator_Params
{
	class USoundModulatorBase*                         Modulator;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetFeedback
struct USourceEffectChorusPreset_SetFeedback_Params
{
	float                                              Feedback;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetDryModulator
struct USourceEffectChorusPreset_SetDryModulator_Params
{
	class USoundModulatorBase*                         Modulator;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetDry
struct USourceEffectChorusPreset_SetDry_Params
{
	float                                              DryAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetDepthModulator
struct USourceEffectChorusPreset_SetDepthModulator_Params
{
	class USoundModulatorBase*                         Modulator;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectChorusPreset.SetDepth
struct USourceEffectChorusPreset_SetDepth_Params
{
	float                                              Depth;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
struct USourceEffectDynamicsProcessorPreset_SetSettings_Params
{
	struct FSourceEffectDynamicsProcessorSettings      InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
struct USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Params
{
	class UEnvelopeFollowerListener*                   EnvelopeFollowerListener;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
struct USourceEffectEnvelopeFollowerPreset_SetSettings_Params
{
	struct FSourceEffectEnvelopeFollowerSettings       InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
struct USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Params
{
	class UEnvelopeFollowerListener*                   EnvelopeFollowerListener;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectEQPreset.SetSettings
struct USourceEffectEQPreset_SetSettings_Params
{
	struct FSourceEffectEQSettings                     InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectFilterPreset.SetSettings
struct USourceEffectFilterPreset_SetSettings_Params
{
	struct FSourceEffectFilterSettings                 InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
struct USourceEffectFoldbackDistortionPreset_SetSettings_Params
{
	struct FSourceEffectFoldbackDistortionSettings     InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
struct USourceEffectMidSideSpreaderPreset_SetSettings_Params
{
	struct FSourceEffectMidSideSpreaderSettings        InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectPannerPreset.SetSettings
struct USourceEffectPannerPreset_SetSettings_Params
{
	struct FSourceEffectPannerSettings                 InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectPhaserPreset.SetSettings
struct USourceEffectPhaserPreset_SetSettings_Params
{
	struct FSourceEffectPhaserSettings                 InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectRingModulationPreset.SetSettings
struct USourceEffectRingModulationPreset_SetSettings_Params
{
	struct FSourceEffectRingModulationSettings         InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
struct USourceEffectSimpleDelayPreset_SetSettings_Params
{
	struct FSourceEffectSimpleDelaySettings            InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
struct USourceEffectStereoDelayPreset_SetSettings_Params
{
	struct FSourceEffectStereoDelaySettings            InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
struct USourceEffectWaveShaperPreset_SetSettings_Params
{
	struct FSourceEffectWaveShaperSettings             InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
struct USubmixEffectConvolutionReverbPreset_SetSettings_Params
{
	struct FSubmixEffectConvolutionReverbSettings      InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
struct USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Params
{
	class UAudioImpulseResponse*                       InImpulseResponse;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectDelayPreset.SetSettings
struct USubmixEffectDelayPreset_SetSettings_Params
{
	struct FSubmixEffectDelaySettings                  InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
struct USubmixEffectDelayPreset_SetInterpolationTime_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectDelayPreset.SetDelay
struct USubmixEffectDelayPreset_SetDelay_Params
{
	float                                              Length;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
struct USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectFilterPreset.SetSettings
struct USubmixEffectFilterPreset_SetSettings_Params
{
	struct FSubmixEffectFilterSettings                 InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectFilterPreset.SetFilterType
struct USubmixEffectFilterPreset_SetFilterType_Params
{
	Synthesis_ESubmixFilterType                        InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
struct USubmixEffectFilterPreset_SetFilterQMod_Params
{
	float                                              InQ;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
struct USubmixEffectFilterPreset_SetFilterQ_Params
{
	float                                              InQ;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
struct USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Params
{
	float                                              InFrequency;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
struct USubmixEffectFilterPreset_SetFilterCutoffFrequency_Params
{
	float                                              InFrequency;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
struct USubmixEffectFilterPreset_SetFilterAlgorithm_Params
{
	Synthesis_ESubmixFilterAlgorithm                   InAlgorithm;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
struct USubmixEffectFlexiverbPreset_SetSettings_Params
{
	struct FSubmixEffectFlexiverbSettings              InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
struct USubmixEffectMultibandCompressorPreset_SetSettings_Params
{
	struct FSubmixEffectMultibandCompressorSettings    InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings
struct USubmixEffectStereoDelayPreset_SetSettings_Params
{
	struct FSubmixEffectStereoDelaySettings            InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectTapDelayPreset.SetTap
struct USubmixEffectTapDelayPreset_SetTap_Params
{
	int                                                TapId;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTapDelayInfo                               TapInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
struct USubmixEffectTapDelayPreset_SetSettings_Params
{
	struct FSubmixEffectTapDelaySettings               InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
struct USubmixEffectTapDelayPreset_SetInterpolationTime_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
struct USubmixEffectTapDelayPreset_RemoveTap_Params
{
	int                                                TapId;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
struct USubmixEffectTapDelayPreset_GetTapIds_Params
{
	TArray<int>                                        TapIds;                                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectTapDelayPreset.GetTap
struct USubmixEffectTapDelayPreset_GetTap_Params
{
	int                                                TapId;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTapDelayInfo                               TapInfo;                                                   // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
struct USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SubmixEffectTapDelayPreset.AddTap
struct USubmixEffectTapDelayPreset_AddTap_Params
{
	int                                                TapId;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.Synth2DSlider.SetValue
struct USynth2DSlider_SetValue_Params
{
	struct FVector2D                                   InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.Synth2DSlider.SetStepSize
struct USynth2DSlider_SetStepSize_Params
{
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.Synth2DSlider.SetSliderHandleColor
struct USynth2DSlider_SetSliderHandleColor_Params
{
	struct FLinearColor                                InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.Synth2DSlider.SetLocked
struct USynth2DSlider_SetLocked_Params
{
	bool                                               InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.Synth2DSlider.SetIndentHandle
struct USynth2DSlider_SetIndentHandle_Params
{
	bool                                               InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.Synth2DSlider.GetValue
struct USynth2DSlider_GetValue_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetSustainGain
struct UGranularSynth_SetSustainGain_Params
{
	float                                              SustainGain;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetSoundWave
struct UGranularSynth_SetSoundWave_Params
{
	class USoundWave*                                  InSoundWave;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetScrubMode
struct UGranularSynth_SetScrubMode_Params
{
	bool                                               bScrubMode;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetReleaseTimeMsec
struct UGranularSynth_SetReleaseTimeMsec_Params
{
	float                                              ReleaseTimeMsec;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetPlayheadTime
struct UGranularSynth_SetPlayheadTime_Params
{
	float                                              InPositionSec;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LerpTimeSec;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_EGranularSynthSeekType                   SeekType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetPlaybackSpeed
struct UGranularSynth_SetPlaybackSpeed_Params
{
	float                                              InPlayheadRate;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetGrainVolume
struct UGranularSynth_SetGrainVolume_Params
{
	float                                              BaseVolume;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   VolumeRange;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetGrainsPerSecond
struct UGranularSynth_SetGrainsPerSecond_Params
{
	float                                              InGrainsPerSecond;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetGrainProbability
struct UGranularSynth_SetGrainProbability_Params
{
	float                                              InGrainProbability;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetGrainPitch
struct UGranularSynth_SetGrainPitch_Params
{
	float                                              BasePitch;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   PitchRange;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetGrainPan
struct UGranularSynth_SetGrainPan_Params
{
	float                                              BasePan;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   PanRange;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetGrainEnvelopeType
struct UGranularSynth_SetGrainEnvelopeType_Params
{
	Synthesis_EGranularSynthEnvelopeType               EnvelopeType;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetGrainDuration
struct UGranularSynth_SetGrainDuration_Params
{
	float                                              BaseDurationMsec;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DurationRange;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetDecayTime
struct UGranularSynth_SetDecayTime_Params
{
	float                                              DecayTimeMsec;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.SetAttackTime
struct UGranularSynth_SetAttackTime_Params
{
	float                                              AttackTimeMsec;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.NoteOn
struct UGranularSynth_NoteOn_Params
{
	float                                              Note;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Velocity;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.NoteOff
struct UGranularSynth_NoteOff_Params
{
	float                                              Note;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.IsLoaded
struct UGranularSynth_IsLoaded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.GetSampleDuration
struct UGranularSynth_GetSampleDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.GranularSynth.GetCurrentPlayheadTime
struct UGranularSynth_GetCurrentPlayheadTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
struct USynthComponentMonoWaveTable_SetWaveTablePosition_Params
{
	float                                              InPosition;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
struct USynthComponentMonoWaveTable_SetSustainPedalState_Params
{
	bool                                               InSustainPedalState;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
struct USynthComponentMonoWaveTable_SetPosLfoType_Params
{
	Synthesis_ESynthLFOType                            InLfoType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
struct USynthComponentMonoWaveTable_SetPosLfoFrequency_Params
{
	float                                              InLfoFrequency;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
struct USynthComponentMonoWaveTable_SetPosLfoDepth_Params
{
	float                                              InLfoDepth;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
struct USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Params
{
	float                                              InSustainGain;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
struct USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Params
{
	float                                              InReleaseTimeMsec;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
struct USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Params
{
	bool                                               bInInvert;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
struct USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Params
{
	float                                              InDepth;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
struct USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Params
{
	float                                              InDecayTimeMsec;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
struct USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Params
{
	bool                                               bInBiasInvert;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
struct USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Params
{
	float                                              InDepth;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
struct USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Params
{
	float                                              InAttackTimeMsec;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
struct USynthComponentMonoWaveTable_SetLowPassFilterResonance_Params
{
	float                                              InNewQ;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
struct USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Params
{
	float                                              InMidiNote;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
struct USynthComponentMonoWaveTable_SetFrequencyPitchBend_Params
{
	float                                              FrequencyOffsetCents;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
struct USynthComponentMonoWaveTable_SetFrequency_Params
{
	float                                              FrequencyHz;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
struct USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Params
{
	float                                              InSustainGain;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
struct USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Params
{
	float                                              InReleaseTimeMsec;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
struct USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Params
{
	float                                              InDecayTimeMsec;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
struct USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Params
{
	bool                                               bInInvert;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
struct USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Params
{
	float                                              InDepth;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
struct USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Params
{
	bool                                               bInBiasInvert;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
struct USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Params
{
	float                                              InDepth;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
struct USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Params
{
	float                                              InAttackTimeMsec;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
struct USynthComponentMonoWaveTable_SetCurveValue_Params
{
	int                                                TableIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KeyframeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewValue;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
struct USynthComponentMonoWaveTable_SetCurveTangent_Params
{
	int                                                TableIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InNewTangent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
struct USynthComponentMonoWaveTable_SetCurveInterpolationType_Params
{
	Synthesis_ECurveInterpolationType                  InterpolationType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TableIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
struct USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Params
{
	float                                              InSustainGain;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
struct USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Params
{
	float                                              InReleaseTimeMsec;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
struct USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Params
{
	bool                                               bInInvert;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
struct USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Params
{
	float                                              InDepth;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
struct USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Params
{
	float                                              InDecayTimeMsec;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
struct USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Params
{
	bool                                               bInBiasInvert;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
struct USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Params
{
	float                                              InDepth;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
struct USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Params
{
	float                                              InAttackTimeMsec;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
struct USynthComponentMonoWaveTable_RefreshWaveTable_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
struct USynthComponentMonoWaveTable_RefreshAllWaveTables_Params
{
};

// Function Synthesis.SynthComponentMonoWaveTable.NoteOn
struct USynthComponentMonoWaveTable_NoteOn_Params
{
	float                                              InMidiNote;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InVelocity;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.NoteOff
struct USynthComponentMonoWaveTable_NoteOff_Params
{
	float                                              InMidiNote;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
struct USynthComponentMonoWaveTable_GetNumTableEntries_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
struct USynthComponentMonoWaveTable_GetMaxTableIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
struct USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Params
{
	float                                              TableIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
struct USynthComponentMonoWaveTable_GetCurveTangent_Params
{
	int                                                TableIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentToneGenerator.SetVolume
struct USynthComponentToneGenerator_SetVolume_Params
{
	float                                              InVolume;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthComponentToneGenerator.SetFrequency
struct USynthComponentToneGenerator_SetFrequency_Params
{
	float                                              InFrequency;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthSamplePlayer.SetSoundWave
struct USynthSamplePlayer_SetSoundWave_Params
{
	class USoundWave*                                  InSoundWave;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
struct USynthSamplePlayer_SetScrubTimeWidth_Params
{
	float                                              InScrubTimeWidthSec;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthSamplePlayer.SetScrubMode
struct USynthSamplePlayer_SetScrubMode_Params
{
	bool                                               bScrubMode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthSamplePlayer.SetPitch
struct USynthSamplePlayer_SetPitch_Params
{
	float                                              InPitch;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeSec;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthSamplePlayer.SeekToTime
struct USynthSamplePlayer_SeekToTime_Params
{
	float                                              TimeSec;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESamplePlayerSeekType                    SeekType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWrap;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthSamplePlayer.IsLoaded
struct USynthSamplePlayer_IsLoaded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthSamplePlayer.GetSampleDuration
struct USynthSamplePlayer_GetSampleDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
struct USynthSamplePlayer_GetCurrentPlaybackProgressTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
struct USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
struct USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Params
{
	float                                              InLinearValue;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InDomainMin;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InDomainMax;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InRangeMin;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InRangeMax;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
struct USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Params
{
	float                                              InLogFrequencyValue;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InDomainMin;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InDomainMax;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InRangeMin;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InRangeMax;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthKnob.SetValue
struct USynthKnob_SetValue_Params
{
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthKnob.SetStepSize
struct USynthKnob_SetStepSize_Params
{
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthKnob.SetLocked
struct USynthKnob_SetLocked_Params
{
	bool                                               InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Synthesis.SynthKnob.GetValue
struct USynthKnob_GetValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
