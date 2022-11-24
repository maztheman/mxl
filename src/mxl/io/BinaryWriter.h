#pragma once

namespace mxl {

class BinaryWriter
{
    stream_t m_Data;
public:
    BinaryWriter();
    ~BinaryWriter();

    void Write8Bit(uint8_t value);
    void Write16Bit(uint16_t value);
    void Write32Bit(uint32_t value);
    void Write64Bit(double value);
    void WriteBytes(uint8_t* data, size_t count);
    void WriteBytes(const size_t count, const uint8_t& value);
    void WriteWords(uint16_t* data, size_t word_count);


    std::vector<uint8_t>& GetData() 
    {
        return m_Data;
    }

};

}

