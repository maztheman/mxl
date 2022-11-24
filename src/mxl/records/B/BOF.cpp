#include "BOF.h"

namespace mxl {

void BOF::Read(reader_t& reader)
{
    reader.Read16Bit(vers);
    reader.Read16Bit(dt);
    reader.Read16Bit(rupBuild);
    reader.Read16Bit(rupYear);
    uint32_t value1 = reader.Read32Bit();
    uint32_t value2 = reader.Read32Bit();
    
    fWin = SetFlag(value1, 0x0001);//A
    fRisc = SetFlag(value1, 0x0002);//B
    fBeta = SetFlag(value1, 0x0004);//C
    fWinAny = SetFlag(value1, 0x0008);//D
    fMacAny = SetFlag(value1, 0x0010);//E
    fBetaAny = SetFlag(value1, 0x0020);//F

    fRiscAny = SetFlag(value1, 0x0100);//H
    fOOM = SetFlag(value1, 0x0200);//I
    fGlJmp = SetFlag(value1, 0x0400);//J
    fFontLimit = SetFlag(value1, 0x2000);//L
    
    verXLHigh = (value1 >> 14) & 0xF;
    
    verLowestBiff = (value2 & 0xFF);
    verLastXLSaved = (value2 >> 8) & 0xF;
}

void BOF::Write(writer_t& writer)
{
    writer.Write16Bit(vers);
    writer.Write16Bit(dt);
    writer.Write16Bit(rupBuild);
    writer.Write16Bit(rupYear);
    uint32_t value1 = 0, value2 = 0;
    value1 |= fWin ? 0x0001 : 0x0000;
    value1 |= fRisc ? 0x0002 : 0x0000;
    value1 |= fBeta ? 0x0004 : 0x0000;
    value1 |= fWinAny ? 0x0008 : 0x0000;
    value1 |= fMacAny ? 0x0010 : 0x0000;
    value1 |= fBetaAny ? 0x0020 : 0x0000;

    value1 |= fRiscAny ? 0x0100 : 0x0000;
    value1 |= fOOM ? 0x0200 : 0x0000;
    value1 |= fGlJmp ? 0x0400 : 0x0000;
    value1 |= fFontLimit ? 0x2000 : 0x0000;

    value1 |= (verXLHigh & 0xF) << 14;

    value2 |= (verLowestBiff & 0xFF);
    value2 |= (verLastXLSaved & 0xF) << 8;

    writer.Write32Bit(value1);
    writer.Write32Bit(value2);

}

}