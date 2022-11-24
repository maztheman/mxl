#include "FrtHeaderOld.h"

void mxl::FrtHeaderOld::Read(reader_t & reader)
{
    reader.Read16Bit(rt);
    grbitFrt.Read(reader);
}

void mxl::FrtHeaderOld::Write(writer_t & writer)
{
    writer.Write16Bit(rt);
    grbitFrt.fFrtRef = 0;
    grbitFrt.fFrtAlert = 0;
    grbitFrt.Write(writer);
}
