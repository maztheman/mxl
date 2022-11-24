#pragma once

namespace mxl {

class ColU
{
public:

    bool Validate() const { return col <= 0x00FF; }

    uint16_t col;
};

}
