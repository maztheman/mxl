#pragma once

#include "../../structs/Ref.h"
#include "../../structs/ArrayParsedFormula.h"

namespace mxl {



class Array
{
public:
    Array();
    ~Array();

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    Ref ref;
    bool fAlwaysCalc;
    //uint32_t unused;
    ArrayParsedFormula formula;
};



}
