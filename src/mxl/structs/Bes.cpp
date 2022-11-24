#include "Bes.h"

namespace mxl {

void Bes::Read(reader_t& reader)
{
    reader.Read8Bit(bBoolErr);
    fError = reader.Read8Bit() == 1;
}

void Bes::Write(writer_t& writer)
{
    writer.Write8Bit(bBoolErr);
    writer.Write8Bit(fError ? 1 : 0);
}

}