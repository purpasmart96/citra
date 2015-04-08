// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "common/common_types.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
// SVC types

enum MemoryState {
    FREE,
    RESERVED,
    IO,
    STATIC,
    CODE,
    PRIVATE,
    SHARED,
    CONTINUOUS,
    ALIASED,
    ALIAS,
    ALIAS_CODE,
    LOCKED,
};

struct MemoryInfo {
    u32 base_address;
    u32 size;
    u32 permission;
    MemoryState state;
};

struct PageInfo {
    u32 flags;
};

enum ResetType {
    RESETTYPE_ONESHOT,
    RESETTYPE_STICKY,
    RESETTYPE_PULSE,
    RESETTYPE_MAX_BIT = (1u << 31),
};

enum BreakReason {
    PANIC       = 0,
    ASSERT      = 1,
    USER        = 2,
};

enum ArbitrationType {
    ARBITRATIONTYPE_SIGNAL,
    ARBITRATIONTYPE_WAIT_IF_LESS_THAN,
    ARBITRATIONTYPE_DECREMENT_AND_WAIT_IF_LESS_THAN,
    ARBITRATIONTYPE_WAIT_IF_LESS_THAN_WITH_TIMEOUT,
    ARBITRATIONTYPE_DECREMENT_AND_WAIT_IF_LESS_THAN_WITH_TIMEOUT,
    ARBITRATIONTYPE_MAX_BIT = (1u << 31)
};

////////////////////////////////////////////////////////////////////////////////////////////////////
// Namespace SVC

namespace SVC {

void Register();

} // namespace
