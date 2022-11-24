#pragma once
#include "RwU.h"
#include "ColU.h"

namespace mxl {

class Ref8U
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    RwU rwFirst;
    RwU rwLast;
    ColU colFirst;
    ColU colLast;
};

}
