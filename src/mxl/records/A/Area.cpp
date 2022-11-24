#include "Area.h"


namespace mxl {

Area::Area()
{

}

Area::~Area()
{

}

void Area::Read(reader_t& reader)
{
    uint16_t value = reader.Read16Bit();
    fStacked = SetFlag(value, 0x1);
    f100 = SetFlag(value, 0x2);
    fHasShadow = SetFlag(value, 0x4);
}

void Area::Write(writer_t& writer)
{
    uint16_t value = 0;

    value |= fStacked   ? 0x1 : 0x0;
    value |= f100       ? 0x2 : 0x0;
    value |= fHasShadow ? 0x4 : 0x0;

    writer.Write16Bit(value);
}




}