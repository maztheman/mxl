#include "DXFALC.h"

void mxl::DXFALC::Read(reader_t & reader)
{
    uint8_t value1 = reader.Read8Bit();
    
    alc = static_cast<HorizAlign::HorizAlign>(value1 & 7);
    SetFlag(fWrap, value1, 8);
    alcv = static_cast<VertAlign::VertAlign>((value1 >> 4) & 7);
    SetFlag(fJustLast, value1, 0x80);

    reader.Read8Bit(trot.trot);

    uint8_t value2 = reader.Read8Bit();

    cIndent = value2 & 0xF;
    SetFlag(fShrinkToFit, value2, 0x10);
    SetFlag(fMergeCell, value2, 0x20);
    iReadingOrder = static_cast<ReadingOrder::ReadingOrder>((value2 >> 6) & 0x3);
    reader.SkipBytes(1);
    reader.Read32Bit(iIndent);
}

void mxl::DXFALC::Write(writer_t & writer)
{
    uint8_t value1 = 0, value2 = 0;

    value1 |= alc & 7;
    GetFlag(fWrap, value1, 8);
    value1 |= (alcv & 7) << 4;
    GetFlag(fJustLast, value1, 0x80);

    writer.Write8Bit(value1);
    writer.Write8Bit(trot.trot);

    value2 |= cIndent & 0xF;
    GetFlag(fShrinkToFit, value2, 0x10);
    GetFlag(fMergeCell, value2, 0x20);
    value2 |= (iReadingOrder & 0x3) << 6;
    writer.Write8Bit(value2);
    writer.Write8Bit(0);
    writer.Write32Bit(iIndent);
}
