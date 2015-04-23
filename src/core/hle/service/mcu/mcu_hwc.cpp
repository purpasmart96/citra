// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/hle.h"
#include "core/hle/service/mcu/mcu.h"
#include "core/hle/service/mcu/mcu_hwc.h"

namespace Service {
namespace MCU {

const Interface::FunctionInfo FunctionTable[] = {
    {0x000A0640, nullptr,                    "SetInfoLEDPattern"},
};

MCU_HWC_Interface::MCU_HWC_Interface() {
    Register(FunctionTable);
}

} // namespace MCU
} // namespace Service
