// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/hle.h"
#include "core/hle/service/mcu/mcu.h"
#include "core/hle/service/mcu/mcu_hid.h"

namespace Service {
namespace MCU {

const Interface::FunctionInfo FunctionTable[] = {
    {0x000E0000, nullptr,                    "GetSoundVolume"},
};

MCU_HID_Interface::MCU_HID_Interface() {
    Register(FunctionTable);
}

} // namespace MCU
} // namespace Service
