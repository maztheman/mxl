#pragma once

namespace mxl {

class CalcCount
{
public:
    CalcCount() {}
    ~CalcCount() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    int16_t cIter;
};


}
