#pragma once

#include <vector>
#include <string>
#include <array>
#include <set>
#include <map>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <span>

using stream_t = std::vector<uint8_t>;

#include "common/tools.h"
#include "io/BinaryReader.h"
#include "io/BinaryWriter.h"

using reader_t = mxl::BinaryReader;
using writer_t = mxl::BinaryWriter;

