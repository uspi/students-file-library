#include "Input.h"

string Input::getInputText(int bufferSize = 4096) {
	string input;
	getline(cin, input);
	return input;
}