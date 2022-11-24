#include "Axis.h"

namespace mxl {

void Axis::Read(reader_t& reader)
{
    reader.Read16Bit(wType);
    reader.SkipBytes(16);
}

void Axis::Write(writer_t& writer)
{
    writer.Write16Bit(wType);
    writer.WriteBytes(16, 0);
}

}