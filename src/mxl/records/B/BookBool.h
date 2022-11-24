#pragma once

namespace mxl {

class BookBool
{
public:
    BookBool() {}
    ~BookBool() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    bool fNoSaveSup;
    bool fHasEnvelope;
    bool fEnvelopeVisible;
    bool fEnvelopeInitDone;
    uint8_t grUpdateLinks;
    bool fHideBorderUnselLists;
};


}
