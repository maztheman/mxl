#include "CalcMode.h"

void mxl::CalcMode::Read(reader_t & reader)
{
    reader.Read16Bit(fAutoRecalc);
}

void mxl::CalcMode::Write(writer_t & writer)
{
    writer.Write16Bit(fAutoRecalc);
}
