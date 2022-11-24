#pragma once

#include "XLUnicodeString.h"

namespace mxl {

class DXFNumIFmt
{
public:
    void Read(reader_t& reader) {
        reader.Read8Bit();//unused
        reader.Read8Bit(ifmt);
    }

    void Write(writer_t& writer) {
        writer.Write8Bit(0);//unused
        writer.Write8Bit(ifmt);
    }
         
    uint8_t ifmt;
};

class DXFNumUsr
{
public:
    void Read(reader_t& reader) {
        reader.Read16Bit(cb);
        fmt.Read(reader);
    }

    void Write(writer_t& writer) {
        writer.Write16Bit(cb);
        fmt.Write(writer);
    }

    uint16_t cb;
    XLUnicodeString fmt;
};

class DXFNum
{
public:
    void Read(reader_t& reader, bool fIfmtUser) {
        DXFN_fIfmtUser = fIfmtUser;
        if (DXFN_fIfmtUser) {
            usr.Read(reader);
        } else {
            ifmt.Read(reader);
        }
    }
    void Write(writer_t& writer) {
        if (DXFN_fIfmtUser) {
            usr.Write(writer);
        } else {
            ifmt.Write(writer);
        }
    }

    bool DXFN_fIfmtUser;
    DXFNumIFmt ifmt;
    DXFNumUsr usr;

};

}
