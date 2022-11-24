#include "CalcIter.h"

void mxl::CalcIter::Read(reader_t & reader)
{
    vfIter = reader.Read16Bit() == 1;
}

void mxl::CalcIter::Write(writer_t & writer)
{
    writer.Write16Bit(vfIter ? 1 : 0);
}
