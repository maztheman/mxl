#include "Ptg.h"

namespace mxl {

PtgBase* Ptg::ProcessType(reader_t& reader, uint8_t type)
{
    PtgBase* pPtg = nullptr;
    switch (type) {
        case 1:
            pPtg = new PtgExp(type);
            break;
    }

    pPtg->Read(reader);

    return pPtg;
}


}