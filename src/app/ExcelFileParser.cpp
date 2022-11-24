#include "ExcelFileParser.h"

#include <structs/CFBF.h>
#include <fstream>

stream_t readAll(const fs::path& filename)
{
    stream_t data;
    std::ifstream file(filename, std::ios::ate | std::ios::binary | std::ios::in);
    if (file)
    {
        auto sz = file.tellg();
        file.seekg(0, std::ios::beg);
        data.resize(sz);
        file.read(reinterpret_cast<char*>(data.data()), sz);
    }
    return data;
}   


mxl::ExcelFileParser::ExcelFileParser()
{
}


mxl::ExcelFileParser::~ExcelFileParser()
{
}

void mxl::ExcelFileParser::LoadFile(const fs::path& sFilename)
{
    size_t last = 0;
    reader_t reader;
    {
        auto data = readAll(sFilename);
        last = data.size();
        reader.LoadData(std::move(data));
    }

    mxl::CFBFHeader header;
    header.Read(reader);

    for (size_t n = 0; n < last; ) {
        uint16_t rt = reader.Read16Bit();
        uint16_t cb = reader.Read16Bit();

        printf("Record Type: %d, Size = %d\n", rt, cb);

        n += cb;
    }

}
