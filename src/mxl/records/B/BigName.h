#pragma once

namespace mxl {

class BigName
{
public:
    BigName() {}
    ~BigName() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    int32_t lcbData;
    uint8_t cbName;
    std::string rgbName;
    std::vector<uint8_t> rgbData;
};

}
