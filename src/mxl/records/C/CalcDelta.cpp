#include "CalcDelta.h"

void mxl::CalcDelta::Read(reader_t & reader)
{
    reader.Read64Bit(numDelta);
}

void mxl::CalcDelta::Write(writer_t & writer)
{
    writer.Write64Bit(numDelta);
}
