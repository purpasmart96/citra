// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/hle.h"
#include "core/hle/service/i2c/i2c.h"
#include "core/hle/service/i2c/i2c_hid.h"

namespace Service {
namespace I2C {

const Interface::FunctionInfo FunctionTable[] = {
    {0x00010100, nullptr,                    "SetRegisterBits8"},
    {0x000300C0, nullptr,                    "DisableRegisterBits8"},
    {0x00040102, nullptr,                    "MultiSetRegisterBits16"},
    {0x000800C2, nullptr,                    "MultiWriteRegister16"},
    {0x000B00C2, nullptr,                    "WriteRegister1Buffer8"},
    {0x000C00C2, nullptr,                    "WriteRegisterBuffer16"},
    {0x000D00C0, nullptr,                    "WriteRegister2Buffer8"},
    {0x000E00C2, nullptr,                    "WriteRegister3Buffer8"},
    {0x001100C2, nullptr,                    "ReadRegisterBuffer"},
    {0x001200C2, nullptr,                    "WriteRegisterBuffer"},
    {0x00130040, nullptr,                    "ReadDeviceRaw8"},
    {0x00140082, nullptr,                    "WriteDeviceRaw"},
    {0x00150080, nullptr,                    "ReadDeviceRaw"},
};

I2C_HID_Interface::I2C_HID_Interface() {
    Register(FunctionTable);
}
    
} // namespace I2C
} // namespace Service
