#include "XLUnicodeString.h"

void mxl::XLUnicodeString::Read(reader_t & reader)
{
    reader.Read16Bit(cch);
    rgb.resize(cch);
    SetFlag(fHighByte, reader.Read8Bit(), 1);
    if (fHighByte) {
        reader.ReadWords(reinterpret_cast<uint16_t*>(&rgb[0]), cch);
    } else {
        for (size_t n = 0; n < cch; n++) {
            rgb[n] = static_cast<wchar_t>(reader.Read8Bit());
        }
    }
}

void mxl::XLUnicodeString::Write(writer_t & writer)
{
    writer.Write16Bit(cch);
    uint8_t value = 0;
    GetFlag<uint8_t>(fHighByte, value, 1);
    writer.Write8Bit(value);
    if (fHighByte) {
        writer.WriteWords(reinterpret_cast<uint16_t*>(&rgb[0]), cch);
    } else {
        for (size_t n = 0; n < cch; n++) {
            writer.Write8Bit(static_cast<uint8_t>(rgb[n] & 0xFF));
        }
    }
}
