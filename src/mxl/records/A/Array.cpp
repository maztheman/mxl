#include "Array.h"

namespace mxl {

Array::Array()
{

}

Array::~Array()
{

}

void Array::Read(reader_t& reader)
{
    ref.Read(reader);
    uint16_t value = reader.Read16Bit();
    fAlwaysCalc = SetFlag(value, 0x1);
    reader.Read32Bit();//unused
    formula.Read(reader);
}

void Array::Write(writer_t& writer)
{
    ref.Write(writer);
    uint16_t value = 0;
    value = fAlwaysCalc ? 0x1 : 0x0;
    writer.Write16Bit(value);
    writer.Write32Bit(0);//unused
    formula.Write(writer);
}

}
