#pragma once
#include "FrtFlags.h"
#include "Ref8U.h"

namespace mxl {

class FrtRefHeaderU
{
public:

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint16_t rt;
    FrtFlags grbitFrt;
    Ref8U ref8;
};


}
