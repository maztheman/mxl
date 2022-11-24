#include "BottomMargin.h"

namespace mxl {

void BottomMargin::Read(reader_t& reader)
{
    reader.Read64Bit(num);
}

void BottomMargin::Write(writer_t& writer)
{
    // 0 <= num <= 49

    writer.Write64Bit(num);
}

}