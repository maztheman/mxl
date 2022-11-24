#pragma once
#include "../../structs/DXFN.h"
#include "../../structs/CFParsedFormulaNoCCE.h"

namespace mxl {

class CF
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint8_t ct;
    uint8_t cp;
    uint16_t cce1;
    uint16_t cce2;
    DXFN rgbdxf;
    CFParsedFormulaNoCCE rgce1;
    CFParsedFormulaNoCCE rgce2;
};

}
