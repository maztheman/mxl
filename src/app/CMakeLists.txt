find_package(fmt CONFIG REQUIRED)

add_executable(mxlreader)

file(GLOB_RECURSE CPP_FILES *.cpp)

target_sources(mxlreader PRIVATE ${CPP_FILES})


target_precompile_headers(mxlreader PRIVATE pch.h)
target_link_libraries(mxlreader PUBLIC mxl fmt::fmt)