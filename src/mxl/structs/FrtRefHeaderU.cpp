#include "FrtRefHeaderU.h"

void mxl::FrtRefHeaderU::Read(reader_t & reader)
{
    reader.Read16Bit(rt);
    grbitFrt.Read(reader);
    //Feature11 or Feature12
    if (rt == 0x0872 || rt == 0x0878) {
        reader.SkipBytes(8);
    } else {
        ref8.Read(reader);
    }
}

void mxl::FrtRefHeaderU::Write(writer_t & writer)
{
    writer.Write16Bit(rt);
    grbitFrt.fFrtAlert = 0;
    grbitFrt.Write(writer);
    if (rt == 0x0872 || rt == 0x0878) {
        writer.WriteBytes(8, 0);
    } else {
        ref8.Write(writer);
    }
}
