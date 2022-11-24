#include "Ts.h"

void mxl::Ts::Read(reader_t & reader)
{
    uint32_t value = reader.Read32Bit();
    SetFlag(ftsItalic, value, 0b00000010U);
    SetFlag(ftsStrikeout, value, 0b10000000U);
}

void mxl::Ts::Write(writer_t & writer)
{
    uint32_t value = 0;
    GetFlag(ftsItalic, value, 0b00000010U);
    GetFlag(ftsStrikeout, value, 0b10000000U);
    writer.Write32Bit(value);
}
