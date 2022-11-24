#pragma once

#include "../../structs/Cell.h"

namespace mxl {

class Blank
{
public:
    Blank() {}
    ~Blank() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    Cell cell;
};

}
