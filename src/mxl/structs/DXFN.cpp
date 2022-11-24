#include "DXFN.h"

void mxl::DXFN::Read(reader_t & reader)
{
    uint32_t value1 = reader.Read32Bit();
    uint16_t value2 = reader.Read16Bit();

    SetFlag(alchNinch, value1, 0b00000000000000000000000000000001U);
    SetFlag(alcvNinch, value1, 0b00000000000000000000000000000010U);
    SetFlag(wrapNinch, value1, 0b00000000000000000000000000000100U);
    SetFlag(trotNinch, value1, 0b00000000000000000000000000001000U);
    SetFlag(kintoNinch, value1, 0b00000000000000000000000000010000U);
    SetFlag(cIndentNinc, value1, 0b00000000000000000000000000100000U);
    SetFlag(fShrinkNinch, value1, 0b00000000000000000000000001000000U);
    SetFlag(fMergeCellNinch, value1, 0b00000000000000000000000010000000U);
    SetFlag(lockedNinch, value1, 0b00000000000000000000000100000000U);
    SetFlag(hiddenNinch, value1, 0b00000000000000000000001000000000U);
    SetFlag(glLeftNinch, value1, 0b00000000000000000000010000000000U);
    SetFlag(glRightNinch, value1, 0b00000000000000000000100000000000U);
    SetFlag(glTopNinch, value1, 0b00000000000000000001000000000000U);
    SetFlag(glBottomNinch, value1, 0b00000000000000000010000000000000U);
    SetFlag(glDiagDownNinch, value1, 0b00000000000000000100000000000000U);
    SetFlag(glDiagUpNinch, value1, 0b00000000000000001000000000000000U);
    SetFlag(flsNinch, value1, 0b00000000000000010000000000000000U);
    SetFlag(icvFNinch, value1, 0b00000000000000100000000000000000U);
    SetFlag(icvBNinch, value1, 0b00000000000001000000000000000000U);
    SetFlag(ifmtNinch, value1, 0b00000000000010000000000000000000U);
    SetFlag(fIfntNinch, value1, 0b00000000000100000000000000000000U);
    SetFlag(ibitAtrNum, value1, 0b00000010000000000000000000000000U);
    SetFlag(ibitAtrFnt, value1, 0b00000100000000000000000000000000U);
    SetFlag(ibitAtrAlc, value1, 0b00001000000000000000000000000000U);
    SetFlag(ibitAtrBdr, value1, 0b00010000000000000000000000000000U);
    SetFlag(ibitAtrPat, value1, 0b00100000000000000000000000000000U);
    SetFlag(ibitAtrProt, value1, 0b01000000000000000000000000000000U);
    SetFlag(iReadingOrderNinch,value1, 0b10000000000000000000000000000000U);

    SetFlag(fIfmtUser, value2, 0b0000000000000001U);
    SetFlag(fNewBorder, value2, 0b0000000000000100U);
    SetFlag(fZeroInited,value2, 0b1000000000000000U);

    if (ibitAtrNum) {
        dxfnum.Read(reader, fIfmtUser);
    }
    if (ibitAtrFnt) {
        dxffntd.Read(reader);
    }
    if (ibitAtrAlc) {
        dxfalc.Read(reader);
    }
    if (ibitAtrBdr) {
        dxfbdr.Read(reader);
    }
    if (ibitAtrPat) {
        dxfpat.Read(reader);
    }
    if (ibitAtrProt) {
        dxfprot.Read(reader);
    }
}

void mxl::DXFN::Write(writer_t & writer)
{
    uint32_t value1 = 0;
    uint16_t value2 = 0;

    GetFlag(alchNinch, value1, 0b00000000000000000000000000000001U);
    GetFlag(alcvNinch, value1, 0b00000000000000000000000000000010U);
    GetFlag(wrapNinch, value1, 0b00000000000000000000000000000100U);
    GetFlag(trotNinch, value1, 0b00000000000000000000000000001000U);
    GetFlag(kintoNinch, value1, 0b00000000000000000000000000010000U);
    GetFlag(cIndentNinc, value1, 0b00000000000000000000000000100000U);
    GetFlag(fShrinkNinch, value1, 0b00000000000000000000000001000000U);
    GetFlag(fMergeCellNinch, value1, 0b00000000000000000000000010000000U);
    GetFlag(lockedNinch, value1, 0b00000000000000000000000100000000U);
    GetFlag(hiddenNinch, value1, 0b00000000000000000000001000000000U);
    GetFlag(glLeftNinch, value1, 0b00000000000000000000010000000000U);
    GetFlag(glRightNinch, value1, 0b00000000000000000000100000000000U);
    GetFlag(glTopNinch, value1, 0b00000000000000000001000000000000U);
    GetFlag(glBottomNinch, value1, 0b00000000000000000010000000000000U);
    GetFlag(glDiagDownNinch, value1, 0b00000000000000000100000000000000U);
    GetFlag(glDiagUpNinch, value1, 0b00000000000000001000000000000000U);
    GetFlag(flsNinch, value1, 0b00000000000000010000000000000000U);
    GetFlag(icvFNinch, value1, 0b00000000000000100000000000000000U);
    GetFlag(icvBNinch, value1, 0b00000000000001000000000000000000U);
    GetFlag(ifmtNinch, value1, 0b00000000000010000000000000000000U);
    GetFlag(fIfntNinch, value1, 0b00000000000100000000000000000000U);
    GetFlag(ibitAtrNum, value1, 0b00000010000000000000000000000000U);
    GetFlag(ibitAtrFnt, value1, 0b00000100000000000000000000000000U);
    GetFlag(ibitAtrAlc, value1, 0b00001000000000000000000000000000U);
    GetFlag(ibitAtrBdr, value1, 0b00010000000000000000000000000000U);
    GetFlag(ibitAtrPat, value1, 0b00100000000000000000000000000000U);
    GetFlag(ibitAtrProt, value1, 0b01000000000000000000000000000000U);
    GetFlag(iReadingOrderNinch, value1, 0b10000000000000000000000000000000U);

    GetFlag(fIfmtUser, value2, 0b0000000000000001U);
    GetFlag(fNewBorder, value2, 0b0000000000000100U);
    GetFlag(fZeroInited, value2, 0b1000000000000000U);

    writer.Write32Bit(value1);
    writer.Write16Bit(value2);

    if (ibitAtrNum) {
        dxfnum.Write(writer);
    }
    if (ibitAtrFnt) {
        dxffntd.Write(writer);
    }
    if (ibitAtrAlc) {
        dxfalc.Write(writer);
    }
    if (ibitAtrBdr) {
        dxfbdr.Write(writer);
    }
    if (ibitAtrPat) {
        dxfpat.Write(writer);
    }
    if (ibitAtrProt) {
        dxfprot.Write(writer);
    }
}
