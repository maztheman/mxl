#pragma once

namespace mxl {

class AFDOper
{
    int nType;
public:
    AFDOper(int type = 0);
    ~AFDOper();

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint8_t vt;
    uint8_t grbitSign;
    uint8_t vtValue[8];


    int GetType() const { return nType; }

};


}
