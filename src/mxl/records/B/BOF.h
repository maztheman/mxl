#pragma once
namespace mxl {

class BOF
{
public:
    BOF() {}
    ~BOF() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint16_t vers;
    uint16_t dt;
    uint16_t rupBuild;
    uint16_t rupYear;
    bool fWin;
    bool fRisc;
    bool fBeta;
    bool fWinAny;
    bool fMacAny;
    bool fBetaAny;
    bool fRiscAny;
    bool fOOM;
    bool fGlJmp;
    bool fFontLimit;
    uint8_t verXLHigh;
    uint8_t verLowestBiff;
    uint8_t verLastXLSaved;
};

}
