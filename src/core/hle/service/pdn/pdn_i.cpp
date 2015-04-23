// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/hle.h"
#include "core/hle/service/pdn/pdn.h"
#include "core/hle/service/pdn/pdn_i.h"

namespace Service {
namespace PDN {

// Empty arrays are illegal -- commented out until an entry is added.
//const Interface::FunctionInfo FunctionTable[] = {};

PDN_I_Interface::PDN_I_Interface() {
    //Register(FunctionTable);
}
    
} // namespace PDN
} // namespace Service
