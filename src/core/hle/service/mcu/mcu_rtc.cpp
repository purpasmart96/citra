// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/hle.h"
#include "core/hle/service/mcu/mcu.h"
#include "core/hle/service/mcu/mcu_rtc.h"

namespace Service {
namespace MCU {

const Interface::FunctionInfo FunctionTable[] = {
    {0x001F0040, nullptr,                    "SetPedometerRecordingMode"},
    {0x00200000, nullptr,                    "GetPedometerState"},
    {0x002A0000, nullptr,                    "GetShellState"},
    {0x002B0000, nullptr,                    "GetAdapterState"},
    {0x002C0000, nullptr,                    "GetBatteryChargeState"},
    {0x002D0000, nullptr,                    "GetBatteryLevel"},
    {0x003B0640, nullptr,                    "SetInfoLEDPattern"},
    {0x003C0040, nullptr,                    "SetInfoLEDPatternHeader"},
    {0x003D0000, nullptr,                    "GetInfoLEDStatus"},
    {0x00420040, nullptr,                    "SetBatteryEmptyLEDPattern"},
    {0x00520000, nullptr,                    "IsLegacyPowerOff"},
};

MCU_RTC_Interface::MCU_RTC_Interface() {
    Register(FunctionTable);
}

} // namespace MCU
} // namespace Service
