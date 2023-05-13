#include <io.h>
#include <fstream>

class FileReader
{
public:
    FileReader();
    ~FileReader();
    void read(std::string);
    void close();

private:
    std::string path;
    std::ifstream file;
};

FileReader::FileReader()
{
}

FileReader::~FileReader()
{
}

void FileReader::read(std::string path)
{
    file.open(path);
}

void FileReader::close()
{
    file.close();
}
