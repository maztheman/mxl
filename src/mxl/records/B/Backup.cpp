#include "Backup.h"

namespace mxl {

void Backup::Read(reader_t& reader)
{
    fBackup = reader.Read16Bit() == 1;
}

void Backup::Write(writer_t& writer)
{
    writer.Write16Bit(fBackup ? 0x01 : 0x00);
}


}