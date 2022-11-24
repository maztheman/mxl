#include "Blank.h"

namespace mxl {

void Blank::Read(reader_t& reader)
{
    cell.Read(reader);
}

void Blank::Write(writer_t& writer)
{
    cell.Write(writer);
}


}