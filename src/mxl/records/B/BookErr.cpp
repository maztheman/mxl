#include "BookErr.h"

namespace mxl {

void BookErr::Read(reader_t& reader)
{
    cell.Read(reader);
    bes.Read(reader);
}

void BookErr::Write(writer_t& writer)
{
    cell.Write(writer);
    bes.Write(writer);
}

}