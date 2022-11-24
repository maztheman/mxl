#pragma once

#include "Ts.h"

namespace mxl {

class Stxp
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    int32_t twpHeight;
    Ts ts;
    int16_t bls;
    int16_t sss;
    uint8_t uls;
    uint8_t bFamily;
    uint8_t bCharSet;

};

}
