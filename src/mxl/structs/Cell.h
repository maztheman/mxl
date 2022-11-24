#pragma once

#include "Rw.h"
#include "Col.h"
#include "IXFCell.h"

namespace mxl {

class Cell
{
public:
    Cell() {}
    ~Cell() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    Rw rw;
    Col col;
    IXFCell ixfe;
};

}
