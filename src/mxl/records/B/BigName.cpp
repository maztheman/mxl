#include "BigName.h"

namespace mxl {

void BigName::Read(reader_t& reader)
{
    reader.SkipBytes(2);
    reader.Read32Bit(reinterpret_cast<uint32_t&>(lcbData));
    reader.Read8Bit(cbName);
    rgbName.resize(cbName);
    rgbData.resize(lcbData);
    reader.ReadBytes(reinterpret_cast<uint8_t*>(&rgbName[0]), cbName);
    reader.ReadBytes(&rgbData[0], lcbData);
}

void BigName::Write(writer_t& writer)
{
    writer.Write16Bit(0x1000);
    writer.Write32Bit(static_cast<uint32_t>(lcbData));
    writer.Write8Bit(cbName);
    writer.WriteBytes(reinterpret_cast<uint8_t*>(&rgbName[0]), cbName);
    writer.WriteBytes(&rgbData[0], lcbData);
}

}