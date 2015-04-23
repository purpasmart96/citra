// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/hle.h"
#include "core/hle/service/mcu/mcu.h"
#include "core/hle/service/mcu/mcu_nwm.h"

namespace Service {
namespace MCU {

// Empty arrays are illegal -- commented out until an entry is added.
//const Interface::FunctionInfo FunctionTable[] = {};

MCU_NWM_Interface::MCU_NWM_Interface() {
    //Register(FunctionTable);
}

} // namespace MCU
} // namespace Service