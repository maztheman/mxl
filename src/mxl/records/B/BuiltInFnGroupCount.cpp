#include "BuiltInFnGroupCount.h"

void mxl::BuiltInFnGroupCount::Read(reader_t & reader)
{
    reader.Read16Bit(count);
}

void mxl::BuiltInFnGroupCount::Write(writer_t & writer)
{
    writer.Write16Bit(count);
}
