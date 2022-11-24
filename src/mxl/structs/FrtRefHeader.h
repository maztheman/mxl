#pragma once

#include "FrtFlags.h"
#include "Ref8.h"

namespace mxl {

class FrtRefHeader
{
public:
    FrtRefHeader();
    ~FrtRefHeader();

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint16_t rt;
    FrtFlags grbitFrt;
    Ref8 ref8;


};

}
