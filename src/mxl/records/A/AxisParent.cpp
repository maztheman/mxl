#include "AxisParent.h"

namespace mxl {

void AxisParent::Read(reader_t& reader)
{
    iax = reader.Read16Bit() != 0;
    reader.SkipBytes(16);
}

void AxisParent::Write(writer_t& writer)
{
    writer.Write16Bit(iax ? 0x01 : 0x00);
    writer.WriteBytes(16, 0);
}


}