#pragma once

namespace mxl {

class FormatRuns;

class AIRuns
{
public:
    AIRuns();
    ~AIRuns();

    void Read(reader_t& reader);
    void Write(writer_t& writer);

    uint16_t                    cRuns;
    std::vector<FormatRuns*>    rgRuns;
};

}