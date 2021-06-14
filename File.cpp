#include <string>
#include <fstream>
#include <iostream>
#include <Windows.h>
using namespace std;

class File {
public:
    string path;
    fstream fs;

    File(string filePath) {
        path = filePath;
    }

    /// create or override text file
    void createText(string text) {
        fs.open(path, fstream::out);
        if (!fs.is_open())
        {
            return;
        }

        fs.clear();
        fs << text;
        
        fs.close();
    }

    string readText() {
        //string lineBuffer;
        //string output;

        //int linesCount = 0;

        //ifstream fileIn(path);

        ////setlocale(LC_ALL, "Russian");

        //while (getline(fileIn, lineBuffer))
        //{
        //    linesCount++;

        //    if (linesCount != 1) { output += "\n"; }

        //    output += lineBuffer;
        //}

        //fileIn.close();

        //return output;

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

    void appendText(string text, bool onNextLine = true) {
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

    bool isEmpty() {
        fs.open(path, fstream::in);

        return true;
    }
};