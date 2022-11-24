#pragma once

namespace mxl {

class BkHim
{
public:
    BkHim() {}
    ~BkHim() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    int16_t cf;
    int32_t lcb;
    std::vector<uint8_t> imageBlob;
};


}
