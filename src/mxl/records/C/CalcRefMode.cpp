#include "CalcRefMode.h"

void mxl::CalcRefMode::Read(reader_t & reader)
{
    fRefA1 = SetFlag(reader.Read16Bit(), 0x01);
}

void mxl::CalcRefMode::Write(writer_t & writer)
{
    writer.Write16Bit(fRefA1 ? 1 : 0);
}
