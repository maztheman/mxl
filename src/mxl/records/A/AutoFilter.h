#pragma once

#include "../../structs/Boolean.h"
#include "../../structs/AFDOper.h"
#include "../../structs/XLUnicodeStringNoCch.h"
namespace mxl {

class AutoFilter
{
public:
    AutoFilter();
    ~AutoFilter();

    void Read(reader_t& reader);
    void Write(writer_t& writer);


    uint16_t iEntry;
    Boolean wJoin;
    bool fSimple1;
    bool fSimple2;
    bool fTopN;
    bool fTop;
    bool fPercent;
    uint16_t wTopN;
    AFDOper doper1;
    AFDOper doper2;
    XLUnicodeStringNoCch str1;
    XLUnicodeStringNoCch str2;
};


}
