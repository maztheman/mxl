#pragma once

namespace mxl {

class GUID
{
public:
    GUID();
    ~GUID();

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint8_t data[16];
};

}
