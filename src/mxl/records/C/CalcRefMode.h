#pragma once

namespace mxl {

class CalcRefMode
{
public:

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    bool fRefA1;
};

}
