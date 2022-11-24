#pragma once

#include "../../structs/Cell.h"
#include "../../structs/Bes.h"

namespace mxl {

class BookErr
{
public:
    BookErr() {}
    ~BookErr() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    Cell cell;
    Bes bes;
};

}
