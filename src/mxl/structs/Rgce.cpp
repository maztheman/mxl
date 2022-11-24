#include "Rgce.h"

namespace mxl {






void Rgce::Read(reader_t& reader, size_t cce) 
{
    data.resize(cce);
    reader.ReadBytes(&data[0], cce);
}

void Rgce::Write(writer_t& writer)
{
    writer.WriteBytes(&data[0], data.size());
}


}