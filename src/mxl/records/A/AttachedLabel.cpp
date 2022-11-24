#include "AttachedLabel.h"

namespace mxl {

AttachedLabel::AttachedLabel()
{

}

AttachedLabel::~AttachedLabel()
{

}

void AttachedLabel::Read(reader_t& reader)
{
    uint16_t value = reader.Read16Bit();
    fShowValue = SetFlag(value, 0x01);
    fShowPercent = SetFlag(value, 0x02);
    fShowLabelAndPerc = SetFlag(value, 0x04);
    fShowLabel = SetFlag(value, 0x10);
    fShowBubbleSizes = SetFlag(value, 0x20);
    fShowSeriesName = SetFlag(value, 0x40);
}

void AttachedLabel::Write(writer_t& writer)
{
    uint16_t value = 0;
    value |= fShowValue         ? 0x01 : 0x00;
    value |= fShowPercent       ? 0x02 : 0x00;
    value |= fShowLabelAndPerc  ? 0x04 : 0x00;
    value |= fShowLabel         ? 0x10 : 0x00;
    value |= fShowBubbleSizes   ? 0x20 : 0x00;
    value |= fShowSeriesName    ? 0x40 : 0x00;
    writer.Write16Bit(value);
}


}