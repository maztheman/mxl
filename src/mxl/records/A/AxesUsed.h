#pragma once

namespace mxl {

class AxesUsed
{
public:
    AxesUsed() {}
    ~AxesUsed() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint16_t cAxes;
};



}
