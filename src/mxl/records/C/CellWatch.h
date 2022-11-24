#pragma once

#include "../../structs/FrtRefHeaderU.h"

namespace mxl {

class CellWatch
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    FrtRefHeaderU frtRefHeaderU;
};

}
