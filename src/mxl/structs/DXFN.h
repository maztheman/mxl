#pragma once

#include "DXFNum.h"
#include "DXFFntD.h"
#include "DXFALC.h"
#include "DXFBdr.h"
#include "DXFPat.h"
#include "DXFProt.h"

namespace mxl {

class DXFN
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    bool alchNinch;
    bool alcvNinch;
    bool wrapNinch;
    bool trotNinch;
    bool kintoNinch;
    bool cIndentNinc;
    bool fShrinkNinch;
    bool fMergeCellNinch;
    bool lockedNinch;
    bool hiddenNinch;
    bool glLeftNinch;
    bool glRightNinch;
    bool glTopNinch;
    bool glBottomNinch;
    bool glDiagDownNinch;
    bool glDiagUpNinch;
    bool flsNinch;
    bool icvFNinch;
    bool icvBNinch;
    bool ifmtNinch;
    bool fIfntNinch;
    bool ibitAtrNum;
    bool ibitAtrFnt;
    bool ibitAtrAlc;
    bool ibitAtrBdr;
    bool ibitAtrPat;
    bool ibitAtrProt;
    bool iReadingOrderNinch;
    bool fIfmtUser;
    bool fNewBorder;
    bool fZeroInited;

    DXFNum dxfnum;
    DXFFntD dxffntd;
    DXFALC dxfalc;
    DXFBdr dxfbdr;
    DXFPat dxfpat;
    DXFProt dxfprot;
};

}
