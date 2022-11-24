#include "BoundSheet8.h"

namespace mxl {

void BoundSheet8::Read(reader_t& reader)
{
    reader.Read32Bit();//dunno yet
    hsState = reader.Read8Bit() & 0x3;
    reader.Read8Bit(dt);
    stName.Read(reader);
}

void BoundSheet8::Write(writer_t& writer)
{
    writer.Write32Bit(0);
    writer.Write8Bit(hsState & 0x3);
    writer.Write8Bit(dt);
    stName.Write(writer);
}

}