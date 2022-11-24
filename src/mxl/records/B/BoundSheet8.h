#pragma once

#include "../../structs/ShortXLUnicodeString.h"

namespace mxl {

class BoundSheet8
{
public:
    BoundSheet8() {}
    ~BoundSheet8() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint8_t hsState;
    uint8_t dt;
    ShortXLUnicodeString stName;
};


}
