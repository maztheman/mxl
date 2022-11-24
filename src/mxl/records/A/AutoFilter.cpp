#include "AutoFilter.h"
#include "structs/AFDOperStr.h"

namespace mxl {

AutoFilter::AutoFilter()
{

}

AutoFilter::~AutoFilter()
{

}

void AutoFilter::Read(reader_t& reader)
{
    reader.Read16Bit(iEntry);
    uint16_t value = reader.Read16Bit();
    wJoin.flo = SetFlag(value, 0x01);
    fSimple1 = SetFlag(value, 0x04);
    fSimple2 = SetFlag(value, 0x08);
    fTopN = SetFlag(value, 0x10);
    fTop = SetFlag(value, 0x20);
    fPercent = SetFlag(value, 0x40);
    wTopN = (value >> 7) & 0x1FF;
    doper1.Read(reader);
    doper2.Read(reader);
    if (doper1.vt == 0x06) {
        AFDOperStr operStr = AFDOperStr::FromAFDOper(&doper1);
        str1.Read(reader, operStr.cch);
    }
    if (doper2.vt == 0x06) {
        AFDOperStr operStr = AFDOperStr::FromAFDOper(&doper2);
        str2.Read(reader, operStr.cch);
    }
}


void AutoFilter::Write(writer_t& writer)
{
    writer.Write16Bit(iEntry);
    uint16_t value = 0;
    value |= wJoin.flo ? 0x01 : 0x00;
    value |= fSimple1 ? 0x04 : 0x00;
    value |= fSimple2 ? 0x08 : 0x00;
    value |= fTopN ? 0x10 : 0x00;
    value |= fTop ? 0x20 : 0x00;
    value |= fPercent ? 0x40 : 0x00;
    value |= (wTopN & 0x1FF) << 7;
    writer.Write16Bit(value);
    doper1.Write(writer);
    doper2.Write(writer);
    //this isnt very correct since i dont know how these opers get SET...later i guess...
    if (doper1.vt == 0x06) {
        AFDOperStr operStr = AFDOperStr::FromAFDOper(&doper1);
        str1.Write(writer, operStr.cch);
    }
    if (doper2.vt == 0x06) {
        AFDOperStr operStr = AFDOperStr::FromAFDOper(&doper2);
        str2.Write(writer, operStr.cch);
    }
}



}
