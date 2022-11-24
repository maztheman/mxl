#include "BopPopCustom.h"

#include <cmath>

namespace mxl {

void BopPopCustom::Read(reader_t& reader)
{
    reader.Read16Bit(cxi);

    size_t byte_count = 1 + static_cast<size_t>(std::floor(cxi / 8));
    size_t bits_count = byte_count * 8;
    size_t padding = bits_count - cxi;

    rggrbit.resize(byte_count);
    reader.ReadBytes(&rggrbit[0], byte_count);

    //size of rggrbit in bytes = 1+floor(cxi / 8)
    //padding = size of rggrbit in bits - cxi
}

void BopPopCustom::Write(writer_t& writer)
{
    writer.Write16Bit(cxi);
    writer.WriteBytes(&rggrbit[0], rggrbit.size());
}

}