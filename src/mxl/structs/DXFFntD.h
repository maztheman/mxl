#pragma once

#include "XLUnicodeStringNoCch.h"
#include "Stxp.h"

namespace mxl {

class DXFFntD
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint8_t cchFont;
    XLUnicodeStringNoCch stFontName;
    Stxp stxp;
    int32_t icvFore;
    Ts tsNinch;
    bool fSssNinch;
    bool fUlsNinch;
    bool fBlsNinch;
    int32_t ich;
    int32_t cch;
    uint16_t iFnt;
};

}
