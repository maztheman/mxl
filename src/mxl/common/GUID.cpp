#include "GUID.h"

namespace mxl {

GUID::GUID()
{

}

GUID::~GUID()
{

}

void GUID::Read(reader_t& reader)
{
    reader.ReadBytes(data, 16);
}

void GUID::Write(writer_t& writer)
{
    writer.WriteBytes(data, 16);
}

}