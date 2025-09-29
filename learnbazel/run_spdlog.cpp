#include <spdlog/spdlog.h>
#include "run_spdlog.h"

void run_spdlog() {
    spdlog::info("Hello, {}!", "world");
    spdlog::warn("This is a warning message.");
    spdlog::error("This is an error message.");
    spdlog::debug("This is a debug message.");
    spdlog::critical("This is a critical message.");
}
