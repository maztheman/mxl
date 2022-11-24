#pragma once

#include <filesystem>

namespace fs = std::filesystem;

namespace mxl {

class ExcelFileParser
{
public:
    ExcelFileParser();
    ~ExcelFileParser();

    void LoadFile(const fs::path& sFilename);
};

}

