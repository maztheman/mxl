#include <records/B/Bar.h>
#include <structs/Ptg.h>
#include <structs/CFBF.h>

#include "ExcelFileParser.h"

using namespace std;

void Test_Bar1()
{
    writer_t test;

    mxl::Bar b;
    b.pcOverlap = -66;
    b.pcGap = 200;
    b.fTranspose = false;
    b.fStacked = true;
    b.f100 = false;
    b.fHasShadow = true;

    b.Write(test);

    reader_t test_reader;
    test_reader.LoadData(std::move(test.GetData()));
    mxl::Bar c;
    c.Read(test_reader);
}


int main()
{
    mxl::ExcelFileParser parser;
    parser.LoadFile(fs::current_path() / "assets" / "test.xls" );

    return 0;
}

