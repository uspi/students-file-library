#include "FileStringReader.cpp"
#include "Window.cpp"
#include "File.cpp"
#include "Input.cpp"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    // read file in.txt
    Window window;
    //FileStringReader reader("");

    Input inp;

    window.print("���� ����", false);
    window.print("������� ������ ��� ������ � ����: ", true);

    string uInp = inp.getInputText();

    string filePath = "in.txt";
    File file(filePath);
    
    //file.appendText(uInp);
    file.createText(uInp);
    
    
    //string fileText = file.readText();

    //cout << "������� �������";
    //window.print(fileText, false);
}

//class Program {
//public:
//    Stude
//};