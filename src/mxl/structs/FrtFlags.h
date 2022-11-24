#pragma once

namespace mxl {

class FrtFlags
{
public:
    FrtFlags() {}
    ~FrtFlags() {}

    void Read(reader_t& reader) {
        uint16_t value = reader.Read16Bit();
        fFrtRef = SetFlag(value, 0x1);
        fFrtAlert = SetFlag(value, 0x2);
    }
    void Write(writer_t& writer) {
        uint16_t value = 0;
        value |= fFrtRef ? 0x01 : 0x00;
        value |= fFrtAlert ? 0x02 : 0x00;
        writer.Write16Bit(value);
    }


    bool fFrtRef;
    bool fFrtAlert;
};



}
