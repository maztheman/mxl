#include "CalcSaveRecalc.h"

void mxl::CalcSaveRecalc::Read(reader_t & reader)
{
    fSaveRecalc = SetFlag(reader.Read16Bit(), 0x01);
}

void mxl::CalcSaveRecalc::Write(writer_t & writer)
{
    writer.Write16Bit(fSaveRecalc ? 1 : 0);
}
