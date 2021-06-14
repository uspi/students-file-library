#include <string>
#include <iostream>
#include <windows.h>
using namespace std;

class Input {
public:
	string getInputText(int bufferSize = 4096) {
		string input;
		getline(cin, input);
		return input;
	}
};