//#include "FileStringReader.cpp"

#include "File.h"
#include "Input.h"

#include "Window.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    // read file in.txt
    Window window;
    //FileStringReader reader("");

    Input inp;

    window.print("‘айл пуст", false, CPs::ru);
    window.print("¬ведите данные дл€ записи в файл: ", true, CPs::ru);

    string uInp = inp.getInputText(4096);

    string filePath = "in.txt";
    File file(filePath);
    
    //file.appendText(uInp);
    file.createText(uInp);
    
    
    //string fileText = file.readText();

    //cout << "русские символы";
    //window.print(fileText, false);
}

//class Program {
//public:
//    Stude
//};