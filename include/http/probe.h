#pragma once

#include <functional>

#include "storage_EXPORTS.h"

namespace azure { namespace storage_lite {
    extern AZURE_STORAGE_API std::function<void(uint64_t)> send_callback;
    extern AZURE_STORAGE_API std::function<void(uint64_t)> receive_callback;
}}  // azure::storage_lite
