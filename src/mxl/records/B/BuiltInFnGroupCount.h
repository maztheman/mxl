#pragma once

namespace mxl {

class BuiltInFnGroupCount
{
public:
    BuiltInFnGroupCount() {}
    ~BuiltInFnGroupCount() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint16_t count;

};


}
