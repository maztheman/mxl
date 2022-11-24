#pragma once

namespace mxl {

class CalcMode
{
public:

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    int16_t fAutoRecalc;
};


}
