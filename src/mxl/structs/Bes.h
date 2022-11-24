#pragma once

namespace mxl {

class Bes
{
public:
    Bes() {}
    ~Bes() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint8_t bBoolErr;
    bool fError;

};


}
