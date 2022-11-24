#include "CF.h"

void mxl::CF::Read(reader_t & reader)
{
    reader.Read8Bit(ct);
    reader.Read8Bit(cp);
    reader.Read16Bit(cce1);
    reader.Read16Bit(cce2);
    rgbdxf.Read(reader);
    rgce1.Read(reader, cce1);
    rgce2.Read(reader, cce2);
}

void mxl::CF::Write(writer_t & writer)
{
    writer.Write8Bit(ct);
    writer.Write8Bit(cp);
    writer.Write16Bit(cce1);
    writer.Write16Bit(cce2);
    rgbdxf.Write(writer);
    rgce1.Write(writer);
    rgce2.Write(writer);
}
