#pragma once

namespace mxl {

class BinaryReader
{
    std::vector<uint8_t> m_Data;
    size_t m_CurrentIndex;
public:
    BinaryReader();
    ~BinaryReader();

    void LoadData(std::vector<uint8_t>&& data);


    uint8_t  Read8Bit();
    uint16_t Read16Bit();
    uint32_t Read32Bit();

    void Read8Bit(uint8_t& value);
    void Read16Bit(uint16_t& value);
    void Read32Bit(uint32_t& value);
    void ReadBytes(uint8_t* data, size_t count);
    void ReadWords(uint16_t* data, size_t word_count);
    void ReadDWords(uint32_t* data, size_t dword_count);

    void SkipBytes(size_t bytes) { m_CurrentIndex += bytes; }

    void Read8Bit(int8_t& value);
    void Read16Bit(int16_t& value);
    void Read32Bit(int32_t& value);
    void Read64Bit(double& value);

};

}
