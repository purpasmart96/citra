// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/service.h"

namespace Service {
namespace I2C {

class I2C_MCU_Interface : public Service::Interface {
public:
    I2C_MCU_Interface();

    std::string GetPortName() const override {
        return "i2c::MCU";
    }
};

} // namespace I2C
} // namespace Service
