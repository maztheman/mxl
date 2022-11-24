#include "DXFBdr.h"

void mxl::DXFBdr::Read(reader_t & reader)
{
    uint16_t value1 = reader.Read16Bit();
    dgLeft = static_cast<BorderStyle::BorderStyle>(value1 & 0xF);
    dgRight = static_cast<BorderStyle::BorderStyle>((value1 >> 4) & 0xF);
    dgTop = static_cast<BorderStyle::BorderStyle>((value1 >> 8) & 0xF);
    dgBottom = static_cast<BorderStyle::BorderStyle>((value1 >> 12) & 0xF);
    
    uint16_t value2 = reader.Read16Bit();
    icvLeft.icv = value2 & 0x7F;
    icvRight.icv = (value2 >> 7) & 0x7F;
    SetFlag(bitDiagDown, value2, 0x4000);
    SetFlag(bitDiagUp, value2, 0x8000);
    
    uint32_t value3 = reader.Read32Bit();
    icvTop.icv = value3 & 0x7F;
    icvBottom.icv = (value3 >> 7) & 0x7F;
    icvDiag.icv = (value3 >> 14) & 0x7F;
    dgDiag = static_cast<BorderStyle::BorderStyle>((value3 >> 21) & 0xF);
}

void mxl::DXFBdr::Write(writer_t & writer)
{
    uint16_t value1 = 0, value2 = 0;
    uint32_t value3 = 0;

    value1 |= dgLeft & 0xF;
    value1 |= (dgRight << 4) & 0xF0;
    value1 |= (dgTop << 8) & 0xF00;
    value1 |= (dgBottom << 12) & 0xF000;
    writer.Write16Bit(value1);

    value2 |= icvLeft.icv & 0x7F;
    value2 |= (icvRight.icv << 7) & 0x3F80;
    GetFlag(bitDiagDown, value2, 0x4000);
    GetFlag(bitDiagUp, value2, 0x8000);
    writer.Write16Bit(value2);

    value3 |= icvTop.icv & 0x7F;
    value3 |= (static_cast<uint32_t>(icvBottom.icv) << 7) & 0x3F80;
    value3 |= (static_cast<uint32_t>(icvDiag.icv) << 14) & 0x1FC000;
    value3 |= (static_cast<uint32_t>(dgDiag) << 21) & 0x1E00000;
    writer.Write32Bit(value3);
    
}
