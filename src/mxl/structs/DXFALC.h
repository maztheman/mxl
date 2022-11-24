#pragma once

#include "../enums/HorizAlign.h"
#include "../enums/VertAlign.h"
#include "../enums/ReadingOrder.h"
#include "XFPropTextRotation.h"

namespace mxl {

class DXFALC
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    HorizAlign::HorizAlign alc;
    bool fWrap;
    VertAlign::VertAlign alcv;
    bool fJustLast;
    XFPropTextRotation trot;
    uint8_t cIndent;
    bool fShrinkToFit;
    bool fMergeCell;
    ReadingOrder::ReadingOrder iReadingOrder;
    int32_t iIndent;
};

}
