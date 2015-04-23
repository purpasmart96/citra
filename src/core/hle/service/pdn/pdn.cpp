// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/service/service.h"
#include "core/hle/service/pdn/pdn.h"
#include "core/hle/service/pdn/pdn_c.h"
#include "core/hle/service/pdn/pdn_d.h"
#include "core/hle/service/pdn/pdn_g.h"
#include "core/hle/service/pdn/pdn_i.h"
#include "core/hle/service/pdn/pdn_s.h"

#include "core/hle/kernel/event.h"
#include "core/hle/kernel/shared_memory.h"
#include "core/hle/hle.h"

namespace Service {
namespace PDN {

void Init() {
    using namespace Kernel;

    AddService(new PDN_C_Interface);
    AddService(new PDN_D_Interface);
    AddService(new PDN_G_Interface);
    AddService(new PDN_I_Interface);
    AddService(new PDN_S_Interface);
}

void Shutdown() {
}

} // namespace PDN

} // namespace Service
