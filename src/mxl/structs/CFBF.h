#pragma once

#include "common/GUID.h"

namespace mxl{

class CFBFHeader
{ // [offset from start (bytes), length (bytes)]
public:

    void Read(reader_t& reader);

    uint8_t _abSig[8];             // [00H,08] {0xd0, 0xcf, 0x11, 0xe0, 0xa1, 0xb1,
                                // 0x1a, 0xe1} for current version
    GUID _clsid;               // [08H,16] reserved must be zero (WriteClassStg/
                                // GetClassFile uses root directory class id)
    uint16_t _uMinorVersion;      // [18H,02] minor version of the format: 33 is
                                // written by reference implementation
    uint16_t _uDllVersion;        // [1AH,02] major version of the dll/format: 3 for
                                // 512-byte sectors, 4 for 4 KB sectors
    uint16_t _uByteOrder;         // [1CH,02] 0xFFFE: indicates Intel byte-ordering
    uint16_t _uSectorShift;       // [1EH,02] size of sectors in power-of-two;
                                // typically 9 indicating 512-byte sectors
    uint16_t _uMiniSectorShift;   // [20H,02] size of mini-sectors in power-of-two;
                                // typically 6 indicating 64-byte mini-sectors
    uint32_t _csectDir;          // [28H,04] must be zero for 512-byte sectors,
                                // number of SECTs in directory chain for 4 KB
                                // sectors
    uint32_t _csectFat;          // [2CH,04] number of SECTs in the FAT chain
    uint32_t _sectDirStart;         // [30H,04] first SECT in the directory chain
    uint32_t _signature;     // [34H,04] signature used for transactions; must
                                // be zero. The reference implementation
                                // does not support transactions
    uint32_t _ulMiniSectorCutoff;  // [38H,04] maximum size for a mini stream;
                                // typically 4096 bytes
    uint32_t _sectMiniFatStart;     // [3CH,04] first SECT in the MiniFAT chain
    uint32_t _csectMiniFat;      // [40H,04] number of SECTs in the MiniFAT chain
    uint32_t _sectDifStart;         // [44H,04] first SECT in the DIFAT chain
    uint32_t _csectDif;          // [48H,04] number of SECTs in the DIFAT chain
    uint32_t _sectFat[109];         // [4CH,436] the SECTs of first 109 FAT sectors
};

}
