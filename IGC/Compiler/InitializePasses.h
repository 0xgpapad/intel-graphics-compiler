/*========================== begin_copyright_notice ============================

Copyright (C) 2017-2021 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

#pragma once

#include "llvm/Config/llvm-config.h"

namespace llvm {
    class PassRegistry;
}

// The following declarations are placed according to alphabetic order for simplicity
void initializeAddImplicitArgsPass(llvm::PassRegistry&);
void initializeAddressSpaceAliasAnalysisPass(llvm::PassRegistry&);
void initializeAnnotateUniformAllocasPass(llvm::PassRegistry&);
void initializeAggregateArgumentsAnalysisPass(llvm::PassRegistry&);
void initializeAlignmentAnalysisPass(llvm::PassRegistry&);
void initializePreBIImportAnalysisPass(llvm::PassRegistry&);
void initializeBIImportPass(llvm::PassRegistry&);
void initializeBlockCoalescingPass(llvm::PassRegistry&);
void initializeBreakConstantExprPass(llvm::PassRegistry&);
void initializeBuiltinCallGraphAnalysisPass(llvm::PassRegistry&);
void initializeBuiltinsConverterPass(llvm::PassRegistry&);
void initializeClearTessFactorsPass(llvm::PassRegistry&);
void initializeCoalescingEnginePass(llvm::PassRegistry&);
void initializeCodeGenContextWrapperPass(llvm::PassRegistry&);
void initializeCodeGenPatternMatchPass(llvm::PassRegistry&);
void initializeCollectGeometryShaderPropertiesPass(llvm::PassRegistry&);
void initializeConstantCoalescingPass(llvm::PassRegistry&);
void initializeCorrectlyRoundedDivSqrtPass(llvm::PassRegistry&);
void initializeCustomSafeOptPassPass(llvm::PassRegistry&);
void initializeCustomUnsafeOptPassPass(llvm::PassRegistry&);
void initializeHoistFMulInLoopPassPass(llvm::PassRegistry&);
void initializeHandleFRemInstructionsPass(llvm::PassRegistry&);
void initializeDeSSAPass(llvm::PassRegistry&);
void initializeDeviceEnqueueFuncsAnalysisPass(llvm::PassRegistry&);
void initializeDeviceEnqueueFuncsResolutionPass(llvm::PassRegistry&);
void initializeDynamicTextureFoldingPass(llvm::PassRegistry&);
void initializeExtensionArgAnalysisPass(llvm::PassRegistry&);
void initializeExtensionFuncsAnalysisPass(llvm::PassRegistry&);
void initializeExtensionFuncsResolutionPass(llvm::PassRegistry&);
void initializeGenericAddressAnalysisPass(llvm::PassRegistry&);
void initializeGenericAddressDynamicResolutionPass(llvm::PassRegistry&);
void initializeGenIRLoweringPass(llvm::PassRegistry&);
void initializeGeometryShaderLoweringPass(llvm::PassRegistry&);
void initializeGEPLoweringPass(llvm::PassRegistry&);
void initializeGenSpecificPatternPass(llvm::PassRegistry&);
void initializeGreedyLiveRangeReductionPass(llvm::PassRegistry&);
void initializeIGCIndirectICBPropagaionPass(llvm::PassRegistry&);
void initializeGenUpdateCBPass(llvm::PassRegistry&);
void initializeGenStrengthReductionPass(llvm::PassRegistry&);
void initializeNanHandlingPass(llvm::PassRegistry&);
void initializeFixResourcePtrPass(llvm::PassRegistry&);
void initializeFlattenSmallSwitchPass(llvm::PassRegistry&);
void initializeSplitIndirectEEtoSelPass(llvm::PassRegistry&);
void initializeGenXFunctionGroupAnalysisPass(llvm::PassRegistry&);
void initializeGenXCodeGenModulePass(llvm::PassRegistry&);
void initializeEstimateFunctionSizePass(llvm::PassRegistry&);
void initializeSubroutineInlinerPass(llvm::PassRegistry&);
void initializeHandleLoadStoreInstructionsPass(llvm::PassRegistry&);
void initializeIGCConstPropPass(llvm::PassRegistry&);
void initializeGatingSimilarSamplesPass(llvm::PassRegistry&);
void initializeImageFuncResolutionPass(llvm::PassRegistry&);
void initializeImageFuncsAnalysisPass(llvm::PassRegistry&);
void initializeImplicitGlobalIdPass(llvm::PassRegistry&);
void initializeCleanImplicitIdsPass(llvm::PassRegistry&);
void initializeInlineLocalsResolutionPass(llvm::PassRegistry&);
void initializeLegalizationPass(llvm::PassRegistry&);
void initializeLegalizeResourcePointerPass(llvm::PassRegistry&);
void initializeLegalizeFunctionSignaturesPass(llvm::PassRegistry&);
void initializeLiveVarsAnalysisPass(llvm::PassRegistry&);
void initializeLowerGEPForPrivMemPass(llvm::PassRegistry&);
void initializeLowerImplicitArgIntrinsicsPass(llvm::PassRegistry&);
void initializeLowPrecisionOptPass(llvm::PassRegistry&);
void initializeMetaDataUtilsWrapperInitializerPass(llvm::PassRegistry&);
void initializeMetaDataUtilsWrapperPass(llvm::PassRegistry&);
void initializeOpenCLPrintfAnalysisPass(llvm::PassRegistry&);
void initializeOpenCLPrintfResolutionPass(llvm::PassRegistry&);
void initializePeepholeTypeLegalizerPass(llvm::PassRegistry&);
void initializePositionDepAnalysisPass(llvm::PassRegistry&);
void initializePrivateMemoryResolutionPass(llvm::PassRegistry&);
void initializePrivateMemoryToSLMPass(llvm::PassRegistry&);
void initializePrivateMemoryUsageAnalysisPass(llvm::PassRegistry&);
void initializeProcessFuncAttributesPass(llvm::PassRegistry&);
void initializeProcessBuiltinMetaDataPass(llvm::PassRegistry&);
void initializeInsertDummyKernelForSymbolTablePass(llvm::PassRegistry&);
void initializeProgramScopeConstantAnalysisPass(llvm::PassRegistry&);
void initializeProgramScopeConstantResolutionPass(llvm::PassRegistry&);
void initializePromoteResourceToDirectASPass(llvm::PassRegistry&);
void initializePromoteStatelessToBindlessPass(llvm::PassRegistry&);
void initializePullConstantHeuristicsPass(llvm::PassRegistry&);
void initializeScalarizerCodeGenPass(llvm::PassRegistry&);
void initializeReduceLocalPointersPass(llvm::PassRegistry&);
void initializeReplaceUnsupportedIntrinsicsPass(llvm::PassRegistry&);
void initializePreCompiledFuncImportPass(llvm::PassRegistry&);
void initializePurgeMetaDataUtilsPass(llvm::PassRegistry&);
void initializeResolveAggregateArgumentsPass(llvm::PassRegistry&);
void initializeResolveOCLAtomicsPass(llvm::PassRegistry&);
void initializeResourceAllocatorPass(llvm::PassRegistry&);
void initializeRewriteLocalSizePass(llvm::PassRegistry&);
void initializeSampleCmpToDiscardPass(llvm::PassRegistry&);
void initializeScalarizeFunctionPass(llvm::PassRegistry&);
void initializeSimd32ProfitabilityAnalysisPass(llvm::PassRegistry&);
void initializeSetFastMathFlagsPass(llvm::PassRegistry&);
void initializeSPIRMetaDataTranslationPass(llvm::PassRegistry&);
void initializeSubGroupFuncsResolutionPass(llvm::PassRegistry&);
void initializeTransformUnmaskedFunctionsPassPass(llvm::PassRegistry&);
void initializeIndirectCallOptimizationPass(llvm::PassRegistry&);
void initializeVectorBitCastOptPass(llvm::PassRegistry&);
void initializeVectorPreProcessPass(llvm::PassRegistry&);
void initializeVectorProcessPass(llvm::PassRegistry&);
void initializeVerificationPassPass(llvm::PassRegistry&);
void initializeVolatileWorkaroundPass(llvm::PassRegistry&);
void initializeWGFuncResolutionPass(llvm::PassRegistry&);
void initializeWIAnalysisPass(llvm::PassRegistry&);
void initializeWIFuncResolutionPass(llvm::PassRegistry&);
void initializeWIFuncsAnalysisPass(llvm::PassRegistry&);
void initializeWorkaroundAnalysisPass(llvm::PassRegistry&);
void initializeWAFMinFMaxPass(llvm::PassRegistry&);
void initializePingPongTexturesAnalysisPass(llvm::PassRegistry&);
void initializePingPongTexturesOptPass(llvm::PassRegistry&);
void initializeSampleMultiversioningPass(llvm::PassRegistry&);
void initializeLinkTessControlShaderPass(llvm::PassRegistry&);
void initializeLinkTessControlShaderMCFPass(llvm::PassRegistry&);
void initializeLoopCanonicalizationPass(llvm::PassRegistry&);
void initializeMemOptPass(llvm::PassRegistry&);
void initializePreRASchedulerPass(llvm::PassRegistry&);
void initializeBIFTransformsPass(llvm::PassRegistry&);
void initializeThreadCombiningPass(llvm::PassRegistry&);
void initializeRegisterPressureEstimatePass(llvm::PassRegistry&);
void initializeLivenessAnalysisPass(llvm::PassRegistry&);
void initializeRegisterEstimatorPass(llvm::PassRegistry&);
void initializeVariableReuseAnalysisPass(llvm::PassRegistry&);
void initializeTransformBlocksPass(llvm::PassRegistry&);
void initializeTranslationTablePass(llvm::PassRegistry&);
#if LLVM_VERSION_MAJOR >= 7
void initializeTrivialLocalMemoryOpsEliminationPass(llvm::PassRegistry&);
#endif
void initializeSLMConstPropPass(llvm::PassRegistry&);
void initializeBlendToDiscardPass(llvm::PassRegistry&);
void initializeCheckInstrTypesPass(llvm::PassRegistry&);
void initializeInstrStatisticPass(llvm::PassRegistry&);
void initializeHalfPromotionPass(llvm::PassRegistry&);
void initializeFixFastMathFlagsPass(llvm::PassRegistry&);
void initializeFCmpPaternMatchPass(llvm::PassRegistry&);
void initializeCodeAssumptionPass(llvm::PassRegistry&);
void initializeIGCInstructionCombiningPassPass(llvm::PassRegistry&);
void initializeIntDivConstantReductionPass(llvm::PassRegistry&);
void initializeIntDivRemCombinePass(llvm::PassRegistry&);
void initializeGenRotatePass(llvm::PassRegistry&);
void initializeSynchronizationObjectCoalescingPass(llvm::PassRegistry&);
void initializeMoveStaticAllocasPass(llvm::PassRegistry&);
void initializeNamedBarriersResolutionPass(llvm::PassRegistry&);
void initializeUndefinedReferencesPassPass(llvm::PassRegistry&);
void initializeBreakdownIntrinsicPassPass(llvm::PassRegistry&);
void initializeCatchAllLineNumberPass(llvm::PassRegistry&);
void initializePromoteConstantStructsPass(llvm::PassRegistry&);
void initializeLowerInvokeSIMDPass(llvm::PassRegistry&);
