#pragma once

namespace mxl {

class AxisLine
{
public:
    AxisLine() {}
    ~AxisLine() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint16_t id;
};


}
