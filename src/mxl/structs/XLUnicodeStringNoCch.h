#pragma once

namespace mxl {

class XLUnicodeStringNoCch
{
public:

    bool fHighByte;
    std::u16string rgb;

    void Read(reader_t& reader, uint32_t cch);
    void Write(writer_t& writer, uint32_t cch);
};


}
