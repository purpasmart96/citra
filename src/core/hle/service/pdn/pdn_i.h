// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/service.h"

namespace Service {
namespace PDN {

class PDN_I_Interface : public Service::Interface {
public:
    PDN_I_Interface();

    std::string GetPortName() const override {
        return "pdn:i";
    }
};

} // namespace PDN
} // namespace Service
