// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/hle.h"
#include "core/hle/service/mcu/mcu.h"
#include "core/hle/service/mcu/mcu_gpu.h"

namespace Service {
namespace MCU {

// Empty arrays are illegal -- commented out until an entry is added.
//const Interface::FunctionInfo FunctionTable[] = {};

MCU_GPU_Interface::MCU_GPU_Interface() {
    //Register(FunctionTable);
}

} // namespace MCU
} // namespace Service
