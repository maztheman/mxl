#include "CFParsedFormulaNoCCE.h"

void mxl::CFParsedFormulaNoCCE::Read(reader_t & reader, uint16_t cce)
{
    reader.SkipBytes(cce);
}

void mxl::CFParsedFormulaNoCCE::Write(writer_t & writer)
{
    
}
