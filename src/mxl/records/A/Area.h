#pragma once
namespace mxl {

class Area
{
public:
    Area();
    ~Area();

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    bool fStacked;
    bool f100;
    bool fHasShadow;

};






}
