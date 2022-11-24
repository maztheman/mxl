#include "XLUnicodeStringNoCch.h"



namespace mxl {

void XLUnicodeStringNoCch::Read(reader_t& reader, uint32_t cch)
{
    fHighByte = SetFlag(reader.Read8Bit(), 0x01);
    if (fHighByte) {
        rgb.resize(cch);
        for (size_t n = 0; n < cch; n++) {
            rgb[n] = reader.Read16Bit();
        }
    } else {
        rgb.resize(cch);
        for (size_t n = 0; n < cch; n++) {
            rgb[n] = reader.Read8Bit();
        }
    }
}

void XLUnicodeStringNoCch::Write(writer_t& writer, uint32_t cch)
{
    writer.Write8Bit(fHighByte ? 0x01 : 0x00);

    if (fHighByte) {
        static_assert(sizeof(char16_t) == sizeof(uint16_t), "wchar_t is not 16 bits, it should be if you want compatibility with windows stuff.");
        writer.WriteWords(reinterpret_cast<uint16_t*>(&rgb[0]), cch);
    } else {
        for (size_t n = 0; n < cch; n++) {
            writer.Write8Bit(static_cast<uint8_t>(rgb[n] & 0xFF));
        }
    }
}

}