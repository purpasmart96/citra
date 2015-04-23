// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/hle.h"
#include "core/hle/service/pdn/pdn.h"
#include "core/hle/service/pdn/pdn_c.h"

namespace Service {
namespace PDN {

const Interface::FunctionInfo FunctionTable[] = {
    {0x00010040, nullptr,                    "CameraPowerControl_cmd1"},
    {0x00020000, nullptr,                    "CameraPowerControl_cmd2"},
};

PDN_C_Interface::PDN_C_Interface() {
    Register(FunctionTable);
}
    
} // namespace PDN
} // namespace Service
