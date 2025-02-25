/*========================== begin_copyright_notice ============================

Copyright (C) 2021 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

#pragma once

#include "Compiler/CodeGenPublic.h"
#include "Compiler/MetaDataApi/MetaDataApi.h"
#include "Compiler/MetaDataUtilsWrapper.h"

#include "common/LLVMWarningsPush.hpp"
#include <llvm/IR/InstVisitor.h>
#include "common/LLVMWarningsPop.hpp"

namespace IGC
{
    struct JointMatrixTypeDescription;

    class JointMatrixFuncsResolutionPass final
        : public llvm::FunctionPass
        , public llvm::InstVisitor<JointMatrixFuncsResolutionPass>
    {
    public:
        static char ID;

        JointMatrixFuncsResolutionPass(OpenCLProgramContext *Context);
        ~JointMatrixFuncsResolutionPass() {}

        virtual llvm::StringRef getPassName() const override
        {
            return "JointMatrixFuncsResolutionPass";
        }

        virtual void getAnalysisUsage(llvm::AnalysisUsage& AU) const override
        {
            AU.setPreservesCFG();
            AU.addRequired<IGC::MetaDataUtilsWrapper>();
            AU.addRequired<IGC::CodeGenContextWrapper>();
        }

        virtual bool runOnFunction(llvm::Function& F) override;
        void visitCallInst(llvm::CallInst& CI);

    private:
        llvm::Instruction *ResolveLoad(llvm::CallInst *CI);
        llvm::Instruction *ResolveStore(llvm::CallInst *CI);
        llvm::Instruction *ResolveMad(llvm::CallInst *CI, unsigned OperationType);
        llvm::Value *ResolveFill(llvm::CallInst *CI);
        llvm::Value *ResolveWILength(llvm::CallInst *CI);
        llvm::Value *ResolveSliceInsert(llvm::CallInst *CI);
        llvm::Value *ResolveSliceExtract(llvm::CallInst *CI);
        llvm::Value *ResolveCall(llvm::CallInst *CI);
        llvm::Value *Resolve(llvm::Value *value);

        llvm::Type *ResolveType(const llvm::Type *opaqueType, JointMatrixTypeDescription *outDesc);
        void CacheResolvedValue(llvm::Value *oldValue, llvm::Value *newValue);

        std::string GetLoadStoreMatrixFuncName
            (bool isLoad, unsigned operationLayout, const JointMatrixTypeDescription *desc);

        llvm::ValueMap<llvm::Value *, llvm::Value *> ResolvedValues;
        llvm::SmallPtrSet<llvm::Instruction *, 8> InstsToErase;

        ModuleMetaData* MMD = nullptr;
        OpenCLProgramContext* Context = nullptr;
        bool Changed = false;
    };
};
