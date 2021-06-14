#include "File.h"

using namespace std;

File::File(string filePath) {
    path = filePath;
}

/// create or override text file
void File::createText(string text) {
    fs.open(path, fstream::out);
    if (!fs.is_open())
    {
        return;
    }

    fs.clear();
    fs << text;

    fs.close();
}

string File::readText() {

    string text;

    fs.open(path, fstream::in);
    if (!fs.is_open())
    {
        return "file stream are not opened";
    }

    cin >> text;

    fs.close();

    return text;
}

void File::appendText(string text, bool onNextLine = true) {
    fs.open(path, fstream::app);
    if (!fs.is_open())
    {
        return;
    }

    if (onNextLine)
    {
        fs << "\n" << text;
    }
    else {
        fs << text;
    }

    fs.close();
}

bool File::isEmpty() {
    fs.open(path, fstream::in);

    return true;
}