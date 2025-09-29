#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "run_spdlog.h"
#include "spdlog/spdlog.h"

TEST_CASE("run_spdlog outputs log messages", "[spdlog]") {
    spdlog::info("Starting test for run_spdlog");
	REQUIRE_NOTHROW(run_spdlog());
}
TEST_CASE("Example test", "[example]") {
    spdlog::info("Running example test");
    REQUIRE(1 + 1 == 2);
}
