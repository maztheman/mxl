#pragma once

namespace mxl {

class LongRGB
{
public:
    LongRGB();
    ~LongRGB();

    void Read(reader_t& reader);
    void Write(writer_t& writer);


    uint8_t R, G, B, A;

};


}
