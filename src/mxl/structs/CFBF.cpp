#include "CFBF.h"

void mxl::CFBFHeader::Read(reader_t & reader)
{
    reader.ReadBytes(_abSig, 8);
    _clsid.Read(reader);
    reader.Read16Bit(_uMinorVersion);
    reader.Read16Bit(_uDllVersion);
    reader.Read16Bit(_uByteOrder);
    reader.Read16Bit(_uSectorShift);
    reader.Read16Bit(_uMiniSectorShift);
    reader.SkipBytes(6);
    reader.Read32Bit(_csectDir);
    reader.Read32Bit(_csectFat);
    reader.Read32Bit(_sectDirStart);
    reader.Read32Bit(_signature);
    reader.Read32Bit(_ulMiniSectorCutoff);
    reader.Read32Bit(_sectMiniFatStart);
    reader.Read32Bit(_csectMiniFat);
    reader.Read32Bit(_sectDifStart);
    reader.Read32Bit(_csectDif);
    reader.ReadDWords(_sectFat, 109);
}
