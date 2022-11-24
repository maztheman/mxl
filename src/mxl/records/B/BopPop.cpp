#include "BopPop.h"

namespace mxl {

void BopPop::Read(reader_t& reader)
{
    reader.Read8Bit(pst);
    fAutoSplit = reader.Read8Bit() == 1;
    reader.Read16Bit(split);
    reader.Read16Bit(iSplitPos);
    reader.Read16Bit(pcSplitPercent);
    reader.Read16Bit(pcPie2Size);
    reader.Read16Bit(pcGap);
    reader.Read64Bit(numSplitValue);
    uint16_t value = reader.Read16Bit();
    fHasShadow = SetFlag(value, 0x01);
}

void BopPop::Write(writer_t& writer)
{
    writer.Write8Bit(pst);
    writer.Write8Bit(fAutoSplit ? 1 : 0);
    writer.Write16Bit(split);
    writer.Write16Bit(iSplitPos);
    writer.Write16Bit(pcSplitPercent);
    writer.Write16Bit(pcPie2Size);
    writer.Write16Bit(pcGap);
    writer.Write64Bit(numSplitValue);
    writer.Write16Bit(fHasShadow ? 1 : 0);
}


}