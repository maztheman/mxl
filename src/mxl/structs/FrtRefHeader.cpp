#include "FrtRefHeader.h"

namespace mxl {

FrtRefHeader::FrtRefHeader()
{

}

FrtRefHeader::~FrtRefHeader()
{

}

void FrtRefHeader::Read(reader_t& reader)
{
    reader.Read16Bit(rt);
    grbitFrt.Read(reader);
    ref8.Read(reader);
}

void FrtRefHeader::Write(writer_t& writer)
{
    writer.Write16Bit(rt);
    grbitFrt.Write(writer);
    ref8.Write(writer);
}

}