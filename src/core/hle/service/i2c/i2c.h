// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/kernel/kernel.h"
#include "core/hle/service/service.h"

namespace Service {
namespace I2C {

/// Initialize I2C service(s)
void Init();

/// Shutdown I2C service(s)
void Shutdown();

} // namespace I2C
} // namespace Service
