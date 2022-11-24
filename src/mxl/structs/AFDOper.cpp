#include "AFDOper.h"

namespace mxl {

//defines what type of AFDOper it is..
AFDOper::AFDOper(int type)
    : nType(type)
{

}

AFDOper::~AFDOper()
{

}

void AFDOper::Read(reader_t& reader)
{
    reader.Read8Bit(vt);
    reader.Read8Bit(grbitSign);
    reader.ReadBytes(vtValue, 8);
}

void AFDOper::Write(writer_t& writer)
{
    writer.Write8Bit(vt);
    writer.Write8Bit(grbitSign);
    writer.WriteBytes(vtValue, 8);
}


}