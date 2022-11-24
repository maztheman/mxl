#pragma once

namespace mxl {

class ArrayParsedFormula
{
public:
    ArrayParsedFormula();
    ~ArrayParsedFormula();

    void Read(reader_t& reader);
    void Write(writer_t& writer);


};



}