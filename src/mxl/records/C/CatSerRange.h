#pragma once

namespace mxl{

class CatSerRange
{
public:

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    int16_t catCross;
    int16_t catLabel;
    int16_t catMark;
    bool fBetween;
    bool fMaxCross;
    bool fReverse;
};

}
