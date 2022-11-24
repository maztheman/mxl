#include "AIRuns.h"
#include "structs/FormatRuns.h"


namespace mxl {

AIRuns::AIRuns()
{

}

AIRuns::~AIRuns()
{

}

void AIRuns::Read(reader_t& reader)
{
    reader.Read16Bit(cRuns);
    rgRuns.resize(cRuns);
    for (uint16_t n = 0; n < cRuns; n++) {
        auto fr = new FormatRuns;
        fr->Read(reader);
        rgRuns[n] = fr;
    }
}

void AIRuns::Write(writer_t& writer)
{
    writer.Write16Bit(cRuns);
    for (auto& p : rgRuns) {
        p->Write(writer);
    }
}

}