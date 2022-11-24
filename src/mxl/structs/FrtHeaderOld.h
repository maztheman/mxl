#pragma once
#include "FrtFlags.h"

namespace mxl {

class FrtHeaderOld
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint16_t rt;
    FrtFlags grbitFrt;
};

}
