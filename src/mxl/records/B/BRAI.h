#pragma once

#include "../../structs/ChartParsedFormula.h"
#include "../../structs/IFmt.h"

namespace mxl {

class BRAI
{
public:
    BRAI() {}
    ~BRAI() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint8_t id;
    uint8_t rt;
    bool fUnlinkedIfmt;
    IFmt ifmt;
    ChartParsedFormula formula;
};


}
