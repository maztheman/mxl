#include "CalcPrecision.h"

void mxl::CalcPrecision::Read(reader_t & reader)
{
    fFullPrec = SetFlag(reader.Read16Bit(), 0x01);
}

void mxl::CalcPrecision::Write(writer_t & writer)
{
    writer.Write16Bit(fFullPrec ? 1 : 0);
}
