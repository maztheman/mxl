#pragma once

#include "Rgce.h"

namespace mxl {

class ChartParsedFormula
{
public:
    ChartParsedFormula() {}
    ~ChartParsedFormula() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint16_t cce;
    Rgce rgce;
};


}
