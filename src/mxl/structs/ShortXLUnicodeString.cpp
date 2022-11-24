#include "ShortXLUnicodeString.h"

namespace mxl {

void ShortXLUnicodeString::Read(reader_t& reader)
{
    reader.Read8Bit(cch);
    fHighByte = SetFlag(reader.Read8Bit(), 0x01);
    rgb.resize(cch);

    if (fHighByte) {
        reader.ReadWords(reinterpret_cast<uint16_t*>(&rgb[0]), cch);
    } else {
        for (size_t n = 0; n < cch; n++) {
            rgb[n] = reader.Read8Bit();
        }
    }

}

void ShortXLUnicodeString::Write(writer_t& writer)
{
    writer.Write8Bit(cch);
    writer.Write8Bit(fHighByte ? 1 : 0);
    if (fHighByte) {
        writer.WriteWords(reinterpret_cast<uint16_t*>(&rgb[0]), cch);
    } else {
        for (size_t n = 0; n < cch; n++) {
            writer.Write8Bit(rgb[n] & 0xFF);
        }
    }
}


}