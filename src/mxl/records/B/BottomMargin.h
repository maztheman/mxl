#pragma once

namespace mxl {

class BottomMargin
{
public:
    BottomMargin() {}
    ~BottomMargin() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    double num;
};

}
