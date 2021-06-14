#include <string>
#include <iostream>
#include <windows.h>
#include <Console.h>
using namespace std;


class Window : Console {
public:
    void print(
        string str,
        bool onNextLine,
        CPs consoleCodePage = ru)
    {
        setCP(consoleCodePage);
        
        if (onNextLine)
        {
            cout << "\n" << str;
            return;
        }

        cout << str;

        // to default
        setCP(def);
    }
};