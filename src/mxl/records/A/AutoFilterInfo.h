#pragma once
namespace mxl {

class AutoFilterInfo
{
public:
    AutoFilterInfo() {}
    ~AutoFilterInfo() {}
    
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint16_t cEntries;

};


}
