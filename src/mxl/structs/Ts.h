#pragma once

namespace mxl {

class Ts
{
public:
    void Read(reader_t& reader);
    void Write(writer_t& writer);

    bool ftsItalic;
    bool ftsStrikeout;
};

}
