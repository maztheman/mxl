#include "AxesUsed.h"

namespace mxl {

void AxesUsed::Read(reader_t& reader)
{
    reader.Read16Bit(cAxes);
}

void AxesUsed::Write(writer_t& writer)
{
    writer.Write16Bit(cAxes);
}

}