add_library(mxl STATIC)

file(GLOB_RECURSE CPP_FILES *.cpp)

target_sources(mxl PRIVATE ${CPP_FILES})

target_include_directories(mxl PUBLIC ".")
target_precompile_headers(mxl PRIVATE pch.h)