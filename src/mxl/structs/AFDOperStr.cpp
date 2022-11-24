#include "AFDOperStr.h"
#include "AFDOper.h"


namespace mxl {

AFDOperStr::AFDOperStr()
{

}

AFDOperStr AFDOperStr::FromAFDOper(AFDOper* doper)
{
    AFDOperStr retval;
    switch (doper->GetType()) {
        case 2://part of a AutoFilter12
        case 0:
            retval.cch = doper->vtValue[0];
            retval.fCompare = doper->vtValue[1];
            break;
        case 1: //part of a AutoFilter, a Feature11 or a Feature12
            //skip first 4 bytes
            retval.cch = doper->vtValue[4];
            retval.fCompare = doper->vtValue[5];
            break;
    }

    return retval;
}

void AFDOperStr::SetOper(AFDOper* doper)
{
    switch (doper->GetType()) {
        case 2://part of a AutoFilter12
        case 0:
            doper->vtValue[0] = cch;
            doper->vtValue[1] = fCompare;
            break;
        case 1: //part of a AutoFilter, a Feature11 or a Feature12
                //skip first 4 bytes
            doper->vtValue[4] = cch;
            doper->vtValue[5] = fCompare;
            break;
    }
}


}