#pragma once

namespace mxl {

class CbUsr
{
public:

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint16_t rgCbUsr[256];
};

}
