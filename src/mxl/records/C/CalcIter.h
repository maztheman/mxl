#pragma once

namespace mxl {

class CalcIter
{
public:

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    bool vfIter;
};

}
