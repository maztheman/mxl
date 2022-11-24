#pragma once

#include "Ptg.h"

namespace mxl{

class Rgce
{
public:
    Rgce() {}
    ~Rgce() {}

    void Read(reader_t& reader, size_t cce);
    void Write(writer_t& writer);

    std::vector<PtgBase*> ptgs;
    std::vector<uint8_t> data;
};

}
