// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/service/service.h"
#include "core/hle/service/i2c/i2c.h"
#include "core/hle/service/i2c/i2c_cam.h"
#include "core/hle/service/i2c/i2c_deb.h"
#include "core/hle/service/i2c/i2c_eep.h"
#include "core/hle/service/i2c/i2c_hid.h"
#include "core/hle/service/i2c/i2c_ir.h"
#include "core/hle/service/i2c/i2c_lcd.h"
#include "core/hle/service/i2c/i2c_mcu.h"
#include "core/hle/service/i2c/i2c_nfc.h"
#include "core/hle/service/i2c/i2c_qtm.h"

#include "core/hle/kernel/event.h"
#include "core/hle/kernel/shared_memory.h"
#include "core/hle/hle.h"

namespace Service {
namespace I2C {

void Init() {
    using namespace Kernel;

    AddService(new I2C_CAM_Interface);
    AddService(new I2C_DEB_Interface);
    AddService(new I2C_EEP_Interface);
    AddService(new I2C_HID_Interface);
    AddService(new I2C_IR_Interface);
    AddService(new I2C_LCD_Interface);
    AddService(new I2C_MCU_Interface);
    AddService(new I2C_NFC_Interface);
    AddService(new I2C_QTM_Interface);
}

void Shutdown() {
}

} // namespace I2C

} // namespace Service
