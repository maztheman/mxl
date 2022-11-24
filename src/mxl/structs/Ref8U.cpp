#include "Ref8U.h"

void mxl::Ref8U::Read(reader_t & reader)
{
    reader.Read16Bit(rwFirst.rw);
    reader.Read16Bit(rwLast.rw);
    reader.Read16Bit(colFirst.col);
    reader.Read16Bit(colLast.col);
}

void mxl::Ref8U::Write(writer_t & writer)
{
    writer.Write16Bit(rwFirst.rw);
    writer.Write16Bit(rwLast.rw);
    writer.Write16Bit(colFirst.col);
    writer.Write16Bit(colLast.col);
}
