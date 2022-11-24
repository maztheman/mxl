#pragma once

#include "../../structs/LongRGB.h"
#include "../../structs/IcvChart.h"

namespace mxl {

class AreaFormat
{
public:
    AreaFormat();
    ~AreaFormat();

    void Read(reader_t& reader);
    void Write(writer_t& writer);


    LongRGB rgbFore;
    LongRGB rgbBack;
    uint16_t fls;
    bool fAuto;
    bool fInvertNeg;
    IcvChart icvFore;
    IcvChart icvBack;

};





}