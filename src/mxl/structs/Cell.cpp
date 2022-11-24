#include "Cell.h"

namespace mxl {

void Cell::Read(reader_t& reader)
{
    reader.Read16Bit(rw.rw);
    reader.Read16Bit(col.col);
    reader.Read16Bit(ixfe.ixfe);
}

void Cell::Write(writer_t& writer)
{
    writer.Write16Bit(rw.rw);
    writer.Write16Bit(col.col);
    writer.Write16Bit(ixfe.ixfe);
}

}