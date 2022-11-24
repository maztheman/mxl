#pragma once

namespace mxl {

class BopPopCustom
{
public:
    BopPopCustom() {}
    ~BopPopCustom() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);


    uint16_t cxi;
    std::vector<uint8_t> rggrbit;
};

}
