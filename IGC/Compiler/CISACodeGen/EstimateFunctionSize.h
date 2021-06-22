/*========================== begin_copyright_notice ============================

Copyright (C) 2017-2021 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

#pragma once

#include "common/LLVMWarningsPush.hpp"
#include "llvm/ADT/DenseMap.h"
#include "llvm/Pass.h"
#include <llvm/IR/InstVisitor.h>
#include <llvm/ADT/StringRef.h>
#include "common/LLVMWarningsPop.hpp"
#include <cstddef>
#include "Probe/Assertion.h"

namespace IGC {

    /// \brief Estimate function size after complete inlining.
    ///
    /// This pass visits the call graph and estimates the number of llvm IR
    /// instructions after complete inlining.
    class EstimateFunctionSize : public llvm::ModulePass, public llvm::InstVisitor<EstimateFunctionSize>
    {
    public:
        static char ID;

        enum AnalysisLevel {
            AL_Module,
            AL_Kernel
        };

        explicit EstimateFunctionSize(AnalysisLevel = AL_Module);
        ~EstimateFunctionSize();
        virtual llvm::StringRef getPassName() const  override { return "Estimate Function Sizes"; }
        void getAnalysisUsage(llvm::AnalysisUsage& AU) const override;
        bool runOnModule(llvm::Module& M) override;

        /// \brief Return the estimated maximal function size after complete inlining.
        std::size_t getMaxExpandedSize() const;

        /// \brief Return the estimated function size after complete inlining.
        std::size_t getExpandedSize(const llvm::Function* F) const;

        bool onlyCalledOnce(const llvm::Function* F);

        bool hasRecursion() const { return HasRecursion; }

        bool shouldEnableSubroutine() const { return EnableSubroutine; }

        bool isTrimmedFunction( llvm::Function* F);

        void visitCallInst( llvm::CallInst& CI );

    private:
        void analyze();
        void checkSubroutine();
        void clear();

        bool funcIsGoodtoTrim( llvm::Function* F );
        void reduceKernelSize();
        size_t findKernelTotalSize(llvm::Function* Kernel, uint32_t uk, uint32_t &up);

        /// \brief Return the associated opaque data.
        template <typename T> T* get(llvm::Function* F) {
            IGC_ASSERT(ECG.count(F));
            return static_cast<T*>(ECG[F]);
        }

        /// \brief The module being analyzed.
        llvm::Module* M;

        /// \brief The analysis level to be performed.
        AnalysisLevel AL;

        bool tmpHasImplicitArg;
        bool matchImplicitArg( llvm::CallInst& CI );

        const llvm::StringRef GET_LOCAL_ID_X = "__builtin_IB_get_local_id_x";
        const llvm::StringRef GET_LOCAL_ID_Y = "__builtin_IB_get_local_id_y";
        const llvm::StringRef GET_LOCAL_ID_Z = "__builtin_IB_get_local_id_z";
        const llvm::StringRef GET_GROUP_ID = "__builtin_IB_get_group_id";
        const llvm::StringRef GET_LOCAL_THREAD_ID = "__builtin_IB_get_local_thread_id";
        const llvm::StringRef GET_GLOBAL_SIZE = "__builtin_IB_get_global_size";
        const llvm::StringRef GET_LOCAL_SIZE = "__builtin_IB_get_local_size";
        const llvm::StringRef GET_GLOBAL_OFFSET = "__builtin_IB_get_global_offset";
        const llvm::StringRef GET_WORK_DIM = "__builtin_IB_get_work_dim";
        const llvm::StringRef GET_NUM_GROUPS = "__builtin_IB_get_num_groups";
        const llvm::StringRef GET_ENQUEUED_LOCAL_SIZE = "__builtin_IB_get_enqueued_local_size";
        const llvm::StringRef GET_STAGE_IN_GRID_ORIGIN = "__builtin_IB_get_stage_in_grid_origin";
        const llvm::StringRef GET_STAGE_IN_GRID_SIZE = "__builtin_IB_get_stage_in_grid_size";
        const llvm::StringRef GET_SYNC_BUFFER = "__builtin_IB_get_sync_buffer";

        bool HasRecursion;
        bool EnableSubroutine;

        /// Internal data structure for the analysis which is approximately an
        /// extended call graph.
        llvm::SmallDenseMap<llvm::Function*, void*> ECG;
    };

    llvm::ModulePass* createEstimateFunctionSizePass();
    llvm::ModulePass* createEstimateFunctionSizePass(EstimateFunctionSize::AnalysisLevel);

} // namespace IGC
