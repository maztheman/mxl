#pragma once

namespace mxl {

class Begin
{
public:
    Begin() {}
    ~Begin() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);
};

}
