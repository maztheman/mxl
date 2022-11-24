#include "AutoFilter12.h"

#include <stdexcept>

namespace mxl {

AutoFilter12::AutoFilter12()
{

}

AutoFilter12::~AutoFilter12()
{

}

void AutoFilter12::Read(reader_t& reader)
{
    frtRefHeader.Read(reader);
    reader.Read16Bit(iEntry);
    fHideArrow = SetFlag(reader.Read32Bit(), 0x01);
    reader.Read32Bit(ft);
    reader.Read32Bit(cft);
    reader.Read32Bit(cCriteria);
    reader.Read32Bit(cDateGroupings);
    fWorksheetAutoFilter = SetFlag(reader.Read16Bit(), 0x08);
    reader.SkipBytes(4);
    reader.Read32Bit(idList);
    guidSview.Read(reader);

    //then more reading has to be done TODO;
    throw std::runtime_error("Missing Reading for AutoFilter12");
}

void AutoFilter12::Write(writer_t& writer)
{
    frtRefHeader.Write(writer);
    writer.Write16Bit(iEntry);
    writer.Write32Bit(fHideArrow ? 0x0001 : 0x0000);
    writer.Write32Bit(ft);
    writer.Write32Bit(cft);
    writer.Write32Bit(cCriteria);
    writer.Write32Bit(cDateGroupings);
    //4th bit set if flag is on, rest is ignored
    writer.Write16Bit(fWorksheetAutoFilter ? 0x08 : 0x00);
    //unused2
    writer.Write32Bit(0);
    writer.Write32Bit(idList);
    guidSview.Write(writer);

    throw std::runtime_error("Missing Writing for AutoFilter12");
}

}