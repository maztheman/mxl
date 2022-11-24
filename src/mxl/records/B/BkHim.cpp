#include "BkHim.h"

namespace mxl {

void BkHim::Read(reader_t& reader)
{
    reader.Read16Bit(cf);
    reader.SkipBytes(2);
    reader.Read32Bit(lcb);
    imageBlob.resize(lcb);
    reader.ReadBytes(&imageBlob[0], lcb);
}

void BkHim::Write(writer_t& writer)
{
    writer.Write16Bit(cf);
    writer.Write16Bit(0x0001);
    writer.Write32Bit(lcb);
    writer.WriteBytes(&imageBlob[0], lcb);
}


}