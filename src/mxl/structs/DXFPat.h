#pragma once

#include "../enums/FillPattern.h"
#include "IcvXF.h"

namespace mxl {

class DXFPat
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    FillPattern::FillPattern fls;
    IcvXF icvForeground;
    IcvXF icvBackground;

};

}
