#pragma once

namespace mxl {

class CalcDelta
{
public:

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    double numDelta;
};

}
