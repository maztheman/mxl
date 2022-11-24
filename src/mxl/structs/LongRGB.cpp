#include "LongRGB.h"

namespace mxl {

LongRGB::LongRGB()
{

}

LongRGB::~LongRGB()
{

}

void LongRGB::Read(reader_t& reader)
{
    reader.ReadBytes(&R, 4);
}

void LongRGB::Write(writer_t& writer)
{
    writer.WriteBytes(&R, 4);
}



}
