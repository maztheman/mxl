#pragma once

namespace mxl {

class ShortXLUnicodeString
{
public:
    ShortXLUnicodeString() {}
    ~ShortXLUnicodeString() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint8_t cch;
    bool fHighByte;
    std::wstring rgb;
};

}
