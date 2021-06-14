#include <string>
#include <fstream>
using namespace std;

class FileStringWriter {
protected:
    string _path;
    string _fileName;

public:

    FileStringWriter(
        string path) {
        _path = path;
    }

    bool writeData(string dataToWrite) {
        if (_path == "")
        {
            return false;
        }

        writeStringToFile(dataToWrite);
        return true;
    }


private:

    void writeStringToFile(string data) {
        ofstream File(_path);

        File << data;

        File.close();
    }
};