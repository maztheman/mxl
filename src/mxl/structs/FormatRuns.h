#pragma once
namespace mxl {
    class FormatRuns
    {
    public:
        FormatRuns();
        ~FormatRuns();

        void Read(reader_t& reader);
        void Write(writer_t& writer);


    };
}