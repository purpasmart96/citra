// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/service.h"

namespace Service {
namespace PTM {

class PTM_S_Interface : public Interface {
public:
    PTM_S_Interface();

    std::string GetPortName() const override {
        return "ptm:s";
    }
};

} // namespace PTM
} // namespace Service
