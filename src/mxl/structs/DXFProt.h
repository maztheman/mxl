#pragma once

namespace mxl {

class DXFProt
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    bool fLocked;
    bool fHidden;
};

}
