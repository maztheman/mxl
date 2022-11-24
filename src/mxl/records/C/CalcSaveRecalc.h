#pragma once

namespace mxl {

class CalcSaveRecalc
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    bool fSaveRecalc;

};

}