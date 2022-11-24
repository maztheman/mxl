#pragma once

namespace mxl {

class IcvChart
{
public:

    IcvChart();
    ~IcvChart();

    void Read(reader_t& reader);
    void Write(writer_t& writer);

};

}