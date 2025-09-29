cc_library(
    name = "run_spdlog",
    srcs = ["run_spdlog.cpp"],
    hdrs = ["run_spdlog.h"],
    deps = [
        "@spdlog",
    ],
)

cc_test(
    name = "test_spdlog",
    srcs = ["test_spdlog.cpp"],
    deps = [
        ":run_spdlog",
        "@catch2//:catch2_main",
    ],
)

cc_binary(
    name = "run_spdlog_main",
    srcs = ["run_spdlog_main.cpp"],
    deps = [
        ":run_spdlog",
    ],
)
