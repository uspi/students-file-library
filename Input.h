#pragma once
#ifndef INPUT_H
#define INPUT_H
#endif
#include <string>
#include <iostream>
#include <windows.h>
using namespace std;

class Input {
public:
	string getInputText(int bufferSize);
};
