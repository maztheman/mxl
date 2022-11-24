#include "DXFProt.h"

void mxl::DXFProt::Read(reader_t & reader)
{
    uint16_t value = reader.Read16Bit();
    SetFlag(fLocked, value, 1);
    SetFlag(fHidden, value, 2);
}

void mxl::DXFProt::Write(writer_t & writer)
{
    uint16_t value = 0;
    GetFlag(fLocked, value, 1);
    GetFlag(fHidden, value, 2);
    writer.Write16Bit(value);
}
