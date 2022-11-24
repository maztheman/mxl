#include "BookBool.h"

namespace mxl {

void BookBool::Read(reader_t& reader) 
{
    uint16_t value = reader.Read16Bit();

    fNoSaveSup = SetFlag(value, 0x01);
    fHasEnvelope = SetFlag(value, 0x04);
    fEnvelopeVisible = SetFlag(value, 0x08);
    fEnvelopeInitDone = SetFlag(value, 0x10);
    grUpdateLinks = (value >> 5) & 0x3;
    fHideBorderUnselLists = SetFlag(value, 0x100);
}

void BookBool::Write(writer_t& writer)
{
    uint16_t value = 0;
    value |= fNoSaveSup ? 0x01 : 0x00;
    value |= fHasEnvelope ? 0x04 : 0x00;
    value |= fEnvelopeVisible ? 0x08 : 0x00;
    value |= fEnvelopeInitDone ? 0x10 : 0x00;
    value |= (grUpdateLinks & 0x3) << 5;
    value |= fHideBorderUnselLists ? 0x100 : 0x000;
    writer.Write16Bit(value);
}

}