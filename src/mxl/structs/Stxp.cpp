#include "Stxp.h"

void mxl::Stxp::Read(reader_t & reader)
{
    reader.Read32Bit(twpHeight);
    ts.Read(reader);
    reader.Read16Bit(bls);
    reader.Read16Bit(sss);
    reader.Read8Bit(uls);
    reader.Read8Bit(bFamily);
    reader.Read8Bit(bCharSet);
    reader.SkipBytes(1);
}

void mxl::Stxp::Write(writer_t & writer)
{
    writer.Write32Bit(twpHeight);
    ts.Write(writer);
    writer.Write16Bit(bls);
    writer.Write16Bit(sss);
    writer.Write8Bit(uls);
    writer.Write8Bit(bFamily);
    writer.Write8Bit(bCharSet);
    writer.Write8Bit(0);
}
