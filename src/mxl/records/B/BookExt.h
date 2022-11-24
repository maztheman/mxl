#pragma once

#include "../../structs/FrtHeader.h"
#include "../../structs/BookExt_Conditional11.h"
#include "../../structs/BookExt_Conditional12.h"

namespace mxl {

class BookExt
{
public:
    BookExt() {}
    ~BookExt() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    FrtHeader frtHeader;
    uint32_t cb;
    bool fDontAutoRecover;
    bool fHidePivotList;
    bool fFilterPrivacy;
    bool fEmbedFactoids;
    uint8_t mdFactoidDisplay;
    bool fSavedDuringRecovery;
    bool fCreatedViaMinimalSave;
    bool fOpenedViaDataRecovery;
    bool fOpenedViaSafeLoad;
    BookExt_Conditional11 grbit1;
    BookExt_Conditional12 grbit2;
};


}
