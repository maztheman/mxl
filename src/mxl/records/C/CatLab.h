#pragma once
#include "../../structs/FrtHeaderOld.h"
namespace mxl {

//2.4.38
class CatLab
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    FrtHeaderOld frtHeaderOld;
    uint16_t wOffset;
    uint16_t at;
    bool cAutoCatLabelReal;
};

}
