#pragma once

inline bool SetFlag(uint32_t value, uint32_t mask)
{
    return (value & mask) == mask;
}

inline void SetFlag(bool& fg, uint32_t value, uint32_t mask)
{
    fg = ((value & mask) == mask);
}


template<typename T>
inline void GetFlag(bool fg, T& value, uint32_t mask)
{
    value |= fg ? mask : 0;
}
