#include "AutoFilterInfo.h"


namespace mxl {


void AutoFilterInfo::Read(reader_t& reader)
{
    reader.Read16Bit(cEntries);
}

void AutoFilterInfo::Write(writer_t& writer)
{
    writer.Write16Bit(cEntries);
}

}