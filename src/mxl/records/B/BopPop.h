#pragma once

namespace mxl {

class BopPop
{
public:
    BopPop() {}
    ~BopPop() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint8_t pst;
    bool fAutoSplit;
    uint16_t split;
    int16_t iSplitPos;
    int16_t pcSplitPercent;
    int16_t pcPie2Size;
    int16_t pcGap;
    double numSplitValue;
    bool fHasShadow;
};

}
