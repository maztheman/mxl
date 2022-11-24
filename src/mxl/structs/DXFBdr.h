#pragma once

#include "../enums/BorderStyle.h"
#include "IcvXF.h"

namespace mxl {

class DXFBdr
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    BorderStyle::BorderStyle dgLeft;
    BorderStyle::BorderStyle dgRight;
    BorderStyle::BorderStyle dgTop;
    BorderStyle::BorderStyle dgBottom;
    IcvXF icvLeft;
    IcvXF icvRight;
    bool bitDiagDown;
    bool bitDiagUp;
    IcvXF icvTop;
    IcvXF icvBottom;
    IcvXF icvDiag;
    BorderStyle::BorderStyle dgDiag;

};

}
