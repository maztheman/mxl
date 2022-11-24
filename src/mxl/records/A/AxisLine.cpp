#include "AxisLine.h"

namespace mxl {

void AxisLine::Read(reader_t& reader)
{
    reader.Read16Bit(id);
}

void AxisLine::Write(writer_t& writer)
{
    writer.Write16Bit(id);
}

}