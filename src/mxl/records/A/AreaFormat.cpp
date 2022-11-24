#include "AreaFormat.h"


namespace mxl {


AreaFormat::AreaFormat()
{

}

AreaFormat::~AreaFormat()
{

}

void AreaFormat::Read(reader_t& reader)
{
    rgbFore.Read(reader);
    rgbBack.Read(reader);
    reader.Read16Bit(fls);
    uint16_t flags1 = reader.Read16Bit();
    fAuto = SetFlag(flags1, 0x1);
    fInvertNeg = SetFlag(flags1, 0x2);
    icvFore.Read(reader);
    icvBack.Read(reader);
}

void AreaFormat::Write(writer_t& writer)
{
    rgbFore.Write(writer);
    rgbBack.Write(writer);
    writer.Write16Bit(fls);
    uint16_t flags1 = 0;
    flags1 |= fAuto ? 0x1 : 0x0;
    flags1 |= fInvertNeg ? 0x2 : 0x0;
    writer.Write16Bit(flags1);
    icvFore.Write(writer);
    icvBack.Write(writer);
}


}