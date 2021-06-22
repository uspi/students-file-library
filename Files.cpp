#include <vector>

#include "File.h"
#include "Input.h"
#include "Window.h"
#include "Student.h"
#include "FileService.h"


int main()
{
    FileService flservice;
    //flservice.removeZerosFromEnd("100");
    //string a = FileService::removeZerosFromEnd("1000");
    setlocale(LC_ALL, "Russian");
    
    string filePath = "in.txt";

    File file(filePath);
    Window window;
    Input inp;

    window.print("Проверка существания файла", false, CPs::ru);
    window.print(filePath, true, CPs::ru);

    bool fileExist = file.isExists(filePath);
    
    // show file
    if (fileExist)
    {
        window.print("Файл существует, содержание:", true, CPs::ru);

        string fileBody = file.readText();

        window.print(fileBody, true, CPs::ru);

    // write file
    } else {
        window.print("Файл не существует", true, CPs::ru);
        window.print("Начало создания файла, сколько студентов вы хотите создать?", true, CPs::ru);
        window.print("Введите количество(до 9): ", true, CPs::ru);

        int quantityOfSutdents = stoi(inp.getInputText(1, CPs::def));

        string name;
        string group;
        float rating;

        vector<Student> students;

        // creating students and writitng in file
        for (int i = 1; i <= quantityOfSutdents; i++)
        {
            // name
            window.print("Введите имя студента номер ", true, CPs::ru);
            window.print(to_string(i) + ": ", false, CPs::ru);
            name = inp.getInputText(30, CPs::ru);

            // group
            window.print("Введите группу студента номер ", false, CPs::ru);
            window.print(to_string(i) + ": ", false, CPs::ru);
            group = inp.getInputText(10, CPs::ru);

            // rating
            window.print("Введите рейтинг студента номер ", false, CPs::ru);
            window.print(to_string(i) + ": ", false, CPs::ru);
            rating = stof(inp.getInputText(3, CPs::ru)); 
            
            // create student add to array
            Student stud(name, group, rating);
            students.push_back(stud);

            // show created student
            /*window.print("Созданный студент:", true, CPs::ru);
            window.print(stud.toString(), false, CPs::ru);*/
        }

        //FileService::saveOutOne(students);
        FileService::saveOutTwo(students);

        // show all student
        /*for (int i = 0; i < students.size(); i++)
        {
            window.print(students[i].name + "\t", true, CPs::ru);
            window.print(students[i].group + "\t", false, CPs::ru);
            window.print(FileService::removeZerosFromEnd(to_string(students[i].rating)) + "\t", false, CPs::ru);
        }*/
        

        window.print("Созданние студентов окончено", true, CPs::ru);
        window.print("Сохранение в двух представлениях", true, CPs::ru);
    }

    //window.print("Введите данные для записи в файл: ", true, CPs::ru);

    //string uInp = inp.getInputText(4096);

    ////file.appendText(uInp);
    //file.createText(uInp);
}

//void saveOutOne(vector<Student> students) {
//    string filePath = "out1.txt";
//    File file(filePath);
//
//    string lines = "";
//
//    // creating markup
//
//    file.createText(lines);
//}
//
//void saveOutTwo(vector<Student> students) {
//    string filePath = "out2.txt";
//    File file(filePath);
//}
//
//string removeZerosFromEnd(string str) {
//    return str.erase(str.find_first_of("0"), str.size() - 1);
//}
//
//void createFile() {
//
//}
//
//void rewriteFileCycle() {
//
//}
//
//void createFileCycle() {
//
//}
//
//void printRuMessage() {
//
//}
//
//void printRuMessageOnNextLine(string message) {
//}