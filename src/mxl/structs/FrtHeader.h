#pragma once

namespace mxl {

class FrtHeader
{
public:
    FrtHeader() {}
    ~FrtHeader() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

};

}
