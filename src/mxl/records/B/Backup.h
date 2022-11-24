#pragma once

namespace mxl {

class Backup
{
public:
    Backup() {}
    ~Backup() {}

    void Read(reader_t& reader);
    void Write(writer_t& writer);


    bool fBackup;
};


}
