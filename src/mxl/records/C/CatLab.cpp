#include "CatLab.h"

void mxl::CatLab::Read(reader_t & reader)
{
    frtHeaderOld.Read(reader);
    reader.Read16Bit(wOffset);
    reader.Read16Bit(at);
    cAutoCatLabelReal = SetFlag(reader.Read16Bit(), 0x01);
    reader.Read16Bit();//reserved, optional?
}

void mxl::CatLab::Write(writer_t & writer)
{
}
