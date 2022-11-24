#pragma once

namespace mxl {

class AFDOper;

class AFDOperStr
{
    AFDOperStr();
public:

    static AFDOperStr FromAFDOper(AFDOper* doper);
    void SetOper(AFDOper* doper);

    uint8_t cch;
    uint8_t fCompare;
};



}