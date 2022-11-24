#pragma once
namespace mxl {

class BCUsrs
{
public:
    BCUsrs() {}
    ~BCUsrs() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint16_t iCount;

};


}
