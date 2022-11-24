#include "DXFFntD.h"

void mxl::DXFFntD::Read(reader_t & reader)
{
    reader.Read8Bit(cchFont);
    if (cchFont > 0) {
        stFontName.Read(reader, cchFont);
    }
    reader.SkipBytes(63 - cchFont);
    stxp.Read(reader);
    reader.Read32Bit(icvFore);
    reader.SkipBytes(4);
    tsNinch.Read(reader);
    SetFlag(fSssNinch, reader.Read32Bit(), 1);
    SetFlag(fUlsNinch, reader.Read32Bit(), 1);
    SetFlag(fBlsNinch, reader.Read32Bit(), 1);
    reader.SkipBytes(4);
    reader.Read32Bit(ich);
    reader.Read32Bit(cch);
    reader.Read16Bit(iFnt);
}

void mxl::DXFFntD::Write(writer_t & writer)
{
    writer.Write8Bit(cchFont);

}
