#include "CatSerRange.h"

void mxl::CatSerRange::Read(reader_t & reader)
{
    reader.Read16Bit(catCross);
    reader.Read16Bit(catLabel);
    reader.Read16Bit(catMark);
    uint16_t value = reader.Read16Bit();
    fBetween = SetFlag(value, 0x01);
    fMaxCross = SetFlag(value, 0x02);
    fReverse = SetFlag(value, 0x04);
}

void mxl::CatSerRange::Write(writer_t & writer)
{
    writer.Write16Bit(catCross);
    writer.Write16Bit(catLabel);
    writer.Write16Bit(catMark);
    uint16_t value = 0;
    value |= fBetween ? 0x01 : 0x00;
    value |= fMaxCross ? 0x02 : 0x00;
    value |= fReverse ? 0x04 : 0x00;
    writer.Write16Bit(value);
       
}
