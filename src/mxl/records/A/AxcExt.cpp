#include "AxcExt.h"

namespace mxl {

void AxcExt::Read(reader_t& reader)
{
    reader.Read16Bit(catMin);
    reader.Read16Bit(catMax);
    reader.Read16Bit(catMajor);
    duMajor = static_cast<date_t>(reader.Read16Bit());
    reader.Read16Bit(catMinor);
    duMinor = static_cast<date_t>(reader.Read16Bit());
    duBase = static_cast<date_t>(reader.Read16Bit());
    reader.Read16Bit(catCrossDate);
    uint8_t value = reader.Read8Bit();
    
    fAutoMin = SetFlag(value, 0x01);
    fAutoMax = SetFlag(value, 0x02);
    fAutoMajor = SetFlag(value, 0x04);
    fAutoMinor = SetFlag(value, 0x08);
    fDateAxis = SetFlag(value, 0x10);
    fAutoBase = SetFlag(value, 0x20);
    fAutoCross = SetFlag(value, 0x40);
    fAutoDate = SetFlag(value, 0x80);
    
    reader.SkipBytes(1);
}

void AxcExt::Write(writer_t& writer)
{
    writer.Write16Bit(catMin);
    writer.Write16Bit(catMax);
    writer.Write16Bit(catMajor);
    writer.Write16Bit(duMajor);
    writer.Write16Bit(catMinor);
    writer.Write16Bit(duMinor);
    writer.Write16Bit(duBase);
    writer.Write16Bit(catCrossDate);
    uint8_t value = 0;
    value |= fAutoMin ? 0x01 : 0x0;
    value |= fAutoMax ? 0x02 : 0x0;
    value |= fAutoMajor ? 0x04 : 0x0;
    value |= fAutoMinor ? 0x08 : 0x0;
    value |= fDateAxis ? 0x10 : 0x0;
    value |= fAutoBase ? 0x20 : 0x0;
    value |= fAutoCross ? 0x40 : 0x0;
    value |= fAutoDate ? 0x80 : 0x0;
    writer.Write8Bit(value);
    writer.Write8Bit(0);
}

}