#pragma once
namespace mxl {

class Bar
{
public:
    Bar() {}
    ~Bar() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    int16_t pcOverlap;
    uint16_t pcGap;
    bool fTranspose;
    bool fStacked;
    bool f100;
    bool fHasShadow;
};



}
