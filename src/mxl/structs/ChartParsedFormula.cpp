#include "ChartParsedFormula.h"

namespace mxl {

void ChartParsedFormula::Read(reader_t& reader)
{
    reader.Read16Bit(cce);
    rgce.Read(reader, cce);
}

void ChartParsedFormula::Write(writer_t& writer)
{
    writer.Write16Bit(cce);
    rgce.Write(writer);
}


}