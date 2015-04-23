// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/service.h"

namespace Service {
namespace PDN {

class PDN_D_Interface : public Service::Interface {
public:
    PDN_D_Interface();

    std::string GetPortName() const override {
        return "pdn:d";
    }
};

} // namespace PDN
} // namespace Service
