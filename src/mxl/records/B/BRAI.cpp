#include "BRAI.h"

namespace mxl {

void BRAI::Read(reader_t& reader)
{
    reader.Read8Bit(id);
    reader.Read8Bit(rt);
    fUnlinkedIfmt = SetFlag(reader.Read16Bit(), 0x01);
    reader.Read16Bit(ifmt.ifmt);
    formula.Read(reader);
}

void BRAI::Write(writer_t& writer)
{
    writer.Write8Bit(id);
    writer.Write8Bit(rt);
    writer.Write16Bit(fUnlinkedIfmt ? 1 : 0);
    writer.Write16Bit(ifmt.ifmt);
    formula.Write(writer);
}

}


