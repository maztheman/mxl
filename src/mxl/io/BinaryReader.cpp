#include "BinaryReader.h"

namespace mxl {

BinaryReader::BinaryReader()
    : m_CurrentIndex(0)
{
}


BinaryReader::~BinaryReader()
{
}

void BinaryReader::LoadData(std::vector<uint8_t>&& data)
{
    m_CurrentIndex = 0;
    m_Data = std::move(data);
}

uint8_t BinaryReader::Read8Bit()
{
    return m_Data[m_CurrentIndex++];
}

uint16_t BinaryReader::Read16Bit()
{
    uint16_t value;
    Read16Bit(value);
    return value;
}

uint32_t BinaryReader::Read32Bit()
{
    uint32_t value;
    Read32Bit(value);
    return value;
}

void BinaryReader::Read8Bit(uint8_t& value)
{
    value = m_Data[m_CurrentIndex++];
}

void BinaryReader::Read16Bit(uint16_t& value)
{
    value = *reinterpret_cast<uint16_t*>(&m_Data[m_CurrentIndex]);
    m_CurrentIndex += 2;
}

void BinaryReader::Read32Bit(uint32_t& value)
{
    value = *reinterpret_cast<uint32_t*>(&m_Data[m_CurrentIndex]);
    m_CurrentIndex += 4;
}

void BinaryReader::Read8Bit(int8_t& value)
{
    value = static_cast<int8_t>(m_Data[m_CurrentIndex++]);
}

void BinaryReader::Read16Bit(int16_t& value)
{
    value = *reinterpret_cast<int16_t*>(&m_Data[m_CurrentIndex]);
    m_CurrentIndex += 2;
}

void BinaryReader::Read32Bit(int32_t& value)
{
    value = *reinterpret_cast<int32_t*>(&m_Data[m_CurrentIndex]);
    m_CurrentIndex += 4;
}

void BinaryReader::Read64Bit(double& value)
{
    value = *reinterpret_cast<double*>(&m_Data[m_CurrentIndex]);
    m_CurrentIndex += 8;
}

void BinaryReader::ReadBytes(uint8_t* data, size_t count)
{
    if (count == 0) return;

    memcpy(data, &m_Data[m_CurrentIndex], count);
    m_CurrentIndex += count;
}

void BinaryReader::ReadWords(uint16_t* data, size_t word_count)
{
    ReadBytes(reinterpret_cast<uint8_t*>(data), word_count * 2);
}

void BinaryReader::ReadDWords(uint32_t* data, size_t dword_count)
{
    ReadBytes(reinterpret_cast<uint8_t*>(data), dword_count * 4);
}


}