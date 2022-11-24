#pragma once

#include "structs/FrtRefHeader.h"
#include "common/GUID.h"

namespace mxl {

class AutoFilter12
{
public:

    AutoFilter12();
    ~AutoFilter12();

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    FrtRefHeader frtRefHeader;
    uint16_t iEntry;
    bool fHideArrow;//4 bytes
    uint32_t ft;
    uint32_t cft;
    uint32_t cCriteria;
    uint32_t cDateGroupings;
    bool fWorksheetAutoFilter;
    uint32_t idList;
    GUID guidSview;
};
    
    


}
