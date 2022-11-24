#include "CalcCount.h"

void mxl::CalcCount::Read(reader_t & reader)
{
    reader.Read16Bit(cIter);
}

void mxl::CalcCount::Write(writer_t & writer)
{
    writer.Write16Bit(cIter);
}
