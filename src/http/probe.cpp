#include "http/probe.h"

namespace azure { namespace storage_lite {
    std::function<void(uint64_t)> send_callback = [](uint64_t) {};
    std::function<void(uint64_t)> receive_callback = [](uint64_t) {};
}}  // azure::storage_lite
