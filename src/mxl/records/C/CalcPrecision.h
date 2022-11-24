#pragma once

namespace mxl {

class CalcPrecision
{
public:

    void Read(reader_t& reader);
    void Write(writer_t& writer);


    bool fFullPrec;
};

}
