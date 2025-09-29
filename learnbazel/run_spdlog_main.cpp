#include "run_spdlog.h"
#include <spdlog/spdlog.h>

int main () {
    run_spdlog();

    spdlog::info("Finished running spdlog example.");
    return 0;
}