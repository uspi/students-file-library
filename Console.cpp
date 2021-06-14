#include <windows.h>
#include <Ñonsole.h>
using namespace std;

enum class CPs {
    def = 866,
    ru = 1251,
};

//enum class CPs {
//    def = 866,
//    ru = 1251,
//};
//
//class Console {
//protected:
//    int consoleCP;
//
//public:
//
//    Console() {
//        consoleCP = getCP();
//    }
//
//    int getCP() {
//        return GetConsoleCP();
//    }
//
//    void setCP(CPs code) {
//        SetConsoleCP((int)code);
//    }
//
//private:
//    void setUnsafeCP(int value) {
//        SetConsoleCP(value);
//    }
//};

Console::Console() {
    consoleCP = getCP();
}

int Console::getCP() {
    return GetConsoleCP();
}

void Console::setCP(CPs code) {
    SetConsoleCP((int)code);
}

void Console::setUnsafeCP(int value) {
    SetConsoleCP(value);
}