#pragma once

#include "Rwx.h"
#include "Colx.h"

namespace mxl {

class Ref8
{
public:
    Ref8() {}
    ~Ref8() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    Rwx rwFirst;
    Rwx rwLast;
    Colx colFirst;
    Colx colLast;
};


}
