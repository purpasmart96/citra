// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/hle.h"
#include "core/hle/service/pdn/pdn.h"
#include "core/hle/service/pdn/pdn_d.h"

namespace Service {
namespace PDN {

const Interface::FunctionInfo FunctionTable[] = {
    {0x000100C0, nullptr,                    "DSPPowerControl_cmd1"},
};

PDN_D_Interface::PDN_D_Interface() {
    Register(FunctionTable);
}
    
} // namespace PDN
} // namespace Service
