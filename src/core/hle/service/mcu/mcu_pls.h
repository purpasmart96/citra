// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/service.h"

namespace Service {
namespace MCU {

class MCU_PLS_Interface : public Service::Interface {
public:
    MCU_PLS_Interface();

    std::string GetPortName() const override {
        return "mcu::PLS";
    }
};

} // namespace MCU
} // namespace Service