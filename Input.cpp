#include "Input.h"
#include "CPs.h"
#include "�onsole.h"

string Input::getInputText(
	int bufferSize = 4096, 
	CPs consoleCodePage = CPs::ru)
{
	setCP(consoleCodePage);
	string input;
	getline(cin, input);
	return input;
}