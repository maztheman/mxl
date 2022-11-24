#pragma once

namespace mxl {

class PtgBase;

class Ptg
{
public:
    Ptg() {}
    virtual ~Ptg() {}

    static PtgBase* Read(reader_t& reader)
    {
        return ProcessType(reader, reader.Read8Bit());
    }

    static PtgBase* ProcessType(reader_t& reader, uint8_t type);

};

class PtgBase
{
public:
    PtgBase(uint8_t type)
        : ptg(type)
    {

    }

    virtual ~PtgBase() {}

    virtual void Read(reader_t& reader) = 0;
    virtual void Write(writer_t& writer) = 0;

    uint8_t ptg;
};

class PtgExp : public PtgBase
{
public:
    PtgExp(uint8_t type) 
        : PtgBase(type)
    {

    }

    virtual void Read(reader_t& reader) final {
        reader.Read16Bit(row);
        reader.Read16Bit(col);
    }

    virtual void Write(writer_t& writer) final {
        writer.Write8Bit(ptg);
        writer.Write16Bit(row);
        writer.Write16Bit(col);
    }

    uint16_t row;
    uint16_t col;
};

class PtgType
{
public:

    int type;
    uint8_t* data;

};





}
