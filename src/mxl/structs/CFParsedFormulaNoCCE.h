#pragma once

namespace mxl {

class CFParsedFormulaNoCCE
{
public:
    void Read(reader_t& reader, uint16_t cce);
    void Write(writer_t& writer);

};

}
