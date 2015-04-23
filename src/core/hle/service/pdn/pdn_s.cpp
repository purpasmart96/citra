// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/hle.h"
#include "core/hle/service/pdn/pdn.h"
#include "core/hle/service/pdn/pdn_s.h"

namespace Service {
namespace PDN {

// Empty arrays are illegal -- commented out until an entry is added.
//const Interface::FunctionInfo FunctionTable[] = {};

PDN_S_Interface::PDN_S_Interface() {
    //Register(FunctionTable);
}
    
} // namespace PDN
} // namespace Service
