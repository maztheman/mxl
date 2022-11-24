#pragma once
namespace mxl {

class XLUnicodeString
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);


    uint16_t cch;
    bool fHighByte;
    std::wstring rgb;
};

}
