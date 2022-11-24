#pragma once
namespace mxl {

class AxisParent
{
public:
    AxisParent() {}
    ~AxisParent() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    bool iax; //2 bytes

};


}



