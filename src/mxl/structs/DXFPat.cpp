#include "DXFPat.h"

void mxl::DXFPat::Read(reader_t & reader)
{
    uint16_t value1 = reader.Read16Bit();
    uint16_t value2 = reader.Read16Bit();

    fls = static_cast<FillPattern::FillPattern>((value1 >> 10) & 0x3F);
    icvForeground.icv = value2 & 0x7F;
    icvBackground.icv = (value2 >> 7) & 0x7F;
}

void mxl::DXFPat::Write(writer_t & writer)
{
    writer.Write16Bit((static_cast<uint16_t>(fls) & 0x3F) << 10);
    uint16_t value = 0;
    value |= icvForeground.icv & 0x7F;
    value |= (static_cast<uint16_t>(icvBackground.icv) & 0x7F) << 7;
    writer.Write16Bit(value);
}
