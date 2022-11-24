#include "BCUsrs.h"

namespace mxl {

void BCUsrs::Read(reader_t& reader)
{
    reader.Read16Bit(iCount);
}

void BCUsrs::Write(writer_t& writer)
{
    writer.Write16Bit(iCount);
}



}