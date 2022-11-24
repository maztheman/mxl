#pragma once

namespace mxl {

class AttachedLabel
{
public:
    AttachedLabel();
    ~AttachedLabel();

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    bool fShowValue;
    bool fShowPercent;
    bool fShowLabelAndPerc;
    bool fShowLabel;
    bool fShowBubbleSizes;
    bool fShowSeriesName;

};



}
