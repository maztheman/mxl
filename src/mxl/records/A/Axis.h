#pragma once

namespace mxl {

class Axis
{
public:
    Axis() {}
    ~Axis() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint16_t wType;
};


}
