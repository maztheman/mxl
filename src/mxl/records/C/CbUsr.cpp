#include "CbUsr.h"

void mxl::CbUsr::Read(reader_t & reader)
{
    reader.ReadWords(rgCbUsr, 256);
}

void mxl::CbUsr::Write(writer_t & writer)
{
    writer.WriteWords(rgCbUsr, 256);
}
