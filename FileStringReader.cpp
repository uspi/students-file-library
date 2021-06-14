#include <fstream>
#include <string>
using namespace std;

class FileStringReader {
protected:
    string _path;
    string _fileName;
    ifstream file;

public:

    FileStringReader(
        string path) {
        _path = path;
    }

    string readData() {
        return _path == ""
            ? "path undefined"
            : getStringFile();
    }


private:

    string getStringFile() {
        string lineBuffer;
        string output;

        int linesCount = 0;

        file.open(_path);

        while (getline(file, lineBuffer))
        {
            linesCount++;

            if (linesCount != 1) { output += "\n"; }

            output += lineBuffer;
        }

        file.close();

        return output;
    }
};





//class FileReader {
//protected:
//    string _path;
//    string _fileName;
//
//public:
//
//    FileReader(
//        string path) {
//        _path = path;
//    }
//
//    virtual string readData() {
//        return _path == ""
//            ? "path undefined"
//            : getFile();
//    }
//
//
//private:
//
//    string getFile() {
//        string lineBuffer;
//        string output;
//
//        ifstream File(_fileName);
//
//        while (getline(File, lineBuffer))
//        {
//            output += lineBuffer;
//        }
//
//        File.close();
//
//        return output;
//    }
//};