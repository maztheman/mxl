#include "BinaryWriter.h"

namespace mxl {

constexpr size_t BUCKET_SIZE = 128 * 1024;


BinaryWriter::BinaryWriter()
{
    m_Data.reserve(BUCKET_SIZE);
}

BinaryWriter::~BinaryWriter()
{
}

void BinaryWriter::Write8Bit(uint8_t value)
{
    m_Data.push_back(value);
}

void BinaryWriter::Write16Bit(uint16_t value)
{
    m_Data.push_back(static_cast<uint8_t>(value & 0xFF));
    m_Data.push_back(static_cast<uint8_t>(value >> 8));
}

void BinaryWriter::Write32Bit(uint32_t value)
{
    m_Data.push_back(static_cast<uint8_t>(value & 0xFF));
    m_Data.push_back(static_cast<uint8_t>((value >> 8) & 0xFF));
    m_Data.push_back(static_cast<uint8_t>((value >> 16) & 0xFF));
    m_Data.push_back(static_cast<uint8_t>((value >> 24) & 0xFF));
}

void BinaryWriter::Write64Bit(double value)
{
    uint8_t data[8];
    auto spData = std::span(data);


    memcpy(data, &value, 8);
    for (int i = 0; i < 8; i++) {
        m_Data.push_back(data[i]);
    }
}

void BinaryWriter::WriteBytes(uint8_t* data, size_t count)
{
    m_Data.insert(m_Data.end(), &data[0], &data[count]);
}

void BinaryWriter::WriteBytes(const size_t count, const uint8_t& value)
{
    m_Data.insert(m_Data.end(), count, value);
}

void BinaryWriter::WriteWords(uint16_t* data, size_t word_count)
{
    WriteBytes(reinterpret_cast<uint8_t*>(data), word_count * 2);
}


}

