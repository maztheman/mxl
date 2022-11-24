#include "Bar.h"

namespace mxl {

void Bar::Read(reader_t& reader)
{
    reader.Read16Bit(reinterpret_cast<uint16_t&>(pcOverlap));
    reader.Read16Bit(pcGap);
    uint16_t value = reader.Read16Bit();
    fTranspose = SetFlag(value, 0x01);
    fStacked = SetFlag(value, 0x02);
    f100 = SetFlag(value, 0x04);
    fHasShadow = SetFlag(value, 0x08);
}

void Bar::Write(writer_t& writer)
{
    writer.Write16Bit(static_cast<uint16_t>(pcOverlap));
    writer.Write16Bit(pcGap);
    uint16_t value = 0;
    value |= fTranspose ? 0x01 : 0x00;
    value |= fStacked ? 0x02 : 0x00;
    value |= f100 ? 0x04 : 0x00;
    value |= fHasShadow ? 0x08 : 0x00;
    writer.Write16Bit(value);
}

}