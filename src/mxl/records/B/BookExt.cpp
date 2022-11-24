#include "BookExt.h"

namespace mxl {

void BookExt::Read(reader_t& reader)
{
    frtHeader.Read(reader);
    reader.Read32Bit(cb);
    uint32_t value = reader.Read32Bit();
    
    fDontAutoRecover = SetFlag(value, 0x01);//A
    fHidePivotList = SetFlag(value, 0x02);//B
    fFilterPrivacy = SetFlag(value, 0x04);//C
    fEmbedFactoids = SetFlag(value, 0x08);//D
    mdFactoidDisplay = (value >> 4) & 0x3;//E
    fSavedDuringRecovery = SetFlag(value, 0x40);//F
    fCreatedViaMinimalSave = SetFlag(value, 0x80);//G
    fOpenedViaDataRecovery = SetFlag(value, 0x100);//H
    fOpenedViaSafeLoad = SetFlag(value, 0x200);//I
    
    if (cb > 20) {
        grbit1.Read(reader);
        if (cb > 21) {
            grbit2.Read(reader);
        }
    }

}

void BookExt::Write(writer_t& writer)
{
    frtHeader.Write(writer);
    writer.Write32Bit(cb);
    uint32_t value = 0;
    
    value |= fDontAutoRecover ? 0x01 : 0x00;
    value |= fHidePivotList ? 0x02 : 0x00;
    value |= fFilterPrivacy ? 0x04 : 0x00;
    value |= fEmbedFactoids ? 0x08 : 0x00;
    value |= (mdFactoidDisplay & 0x3) << 4;
    value |= fSavedDuringRecovery ? 0x40 : 0x00;
    value |= fCreatedViaMinimalSave ? 0x80 : 0x00;
    value |= fOpenedViaDataRecovery ? 0x100 : 0x00;
    value |= fOpenedViaSafeLoad ? 0x200 : 0x00;

    writer.Write32Bit(value);
    if (cb > 20) {
        grbit1.Write(writer);
        if (cb > 21) {
            grbit2.Write(writer);
        }
    }
}


}