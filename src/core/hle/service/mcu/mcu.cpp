// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/service/service.h"
#include "core/hle/service/mcu/mcu.h"
#include "core/hle/service/mcu/mcu_cam.h"
#include "core/hle/service/mcu/mcu_cdc.h"
#include "core/hle/service/mcu/mcu_gpu.h"
#include "core/hle/service/mcu/mcu_hid.h"
#include "core/hle/service/mcu/mcu_hwc.h"
#include "core/hle/service/mcu/mcu_nwm.h"
#include "core/hle/service/mcu/mcu_pls.h"
#include "core/hle/service/mcu/mcu_rtc.h"
#include "core/hle/service/mcu/mcu_snd.h"

#include "core/hle/kernel/event.h"
#include "core/hle/kernel/shared_memory.h"
#include "core/hle/hle.h"

namespace Service {
namespace MCU {

void Init() {
    using namespace Kernel;

    AddService(new MCU_CAM_Interface);
    AddService(new MCU_CDC_Interface);
    AddService(new MCU_GPU_Interface);
    AddService(new MCU_HID_Interface);
    AddService(new MCU_HWC_Interface);
    AddService(new MCU_NWM_Interface);
    AddService(new MCU_PLS_Interface);
    AddService(new MCU_RTC_Interface);
    AddService(new MCU_SND_Interface);
}

void Shutdown() {
}

} // namespace MCU

} // namespace Service
