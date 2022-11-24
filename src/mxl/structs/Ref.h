#pragma once

namespace mxl {

class Ref
{
public:

    Ref();
    ~Ref();

    void Read(reader_t& reader);
    void Write(writer_t& writer);


};


}
