#pragma once

#include "../../enums/DateUnit.h"

namespace mxl {
   
class AxcExt
{
public:
    typedef internal::DateUnit::DateUnit date_t;
    
    AxcExt() {}
    ~AxcExt() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);


    uint16_t catMin;
    uint16_t catMax;
    uint16_t catMajor;
    date_t duMajor;
    uint16_t catMinor;
    date_t duMinor;
    date_t duBase;
    uint16_t catCrossDate;
    bool fAutoMin;
    bool fAutoMax;
    bool fAutoMajor;
    bool fAutoMinor;
    bool fDateAxis;
    bool fAutoBase;
    bool fAutoCross;
    bool fAutoDate;
};


}

