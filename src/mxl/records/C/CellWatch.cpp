#include "CellWatch.h"

void mxl::CellWatch::Read(reader_t & reader)
{
    frtRefHeaderU.Read(reader);
    reader.Read32Bit();//reserved
}

void mxl::CellWatch::Write(writer_t & writer)
{
    frtRefHeaderU.Write(writer);
    writer.Write32Bit(0);
}
