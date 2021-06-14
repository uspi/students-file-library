#pragma once
#ifndef FILE_H
#define FILE_H
#endif
#include <string>
#include <fstream>
#include <iostream>
#include <Windows.h>
using namespace std;

class File {
public:
    string path;
    fstream fs;

    File(string filePath);

    /// create or override text file
    void createText(string text);

    string readText();

    void appendText(string text, bool onNextLine);

    bool isEmpty();
};
