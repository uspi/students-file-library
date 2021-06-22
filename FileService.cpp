#include "FileService.h"

const int USER_NAME_LENGTH = 16;
const int USER_GROUP_LENGTH = 16;
const int USER_RATING_LENGTH = 16;

string FileService::removeZerosFromEnd(string str) {
	return str.erase(str.find_first_of("0"), str.size() - 1);
}

void FileService::saveOutOne(vector<Student> students) {
    string filePath = "out1.txt";
    File file(filePath);

    string lines = "";

    // creating lines
    for (int i = 0; i < students.size(); i++)
    {
        string currentLine = "";

        // work with name
        int quantitySpaces = USER_NAME_LENGTH - students[i].name.length();
        currentLine = students[i].name;
        for (int i = quantitySpaces; i > 0; i--)
        {
            currentLine += " ";
        }
        
        // work with group
        quantitySpaces = USER_GROUP_LENGTH - students[i].group.length();
        currentLine += students[i].group;
        for (int i = quantitySpaces; i > 0; i--)
        {
            currentLine += " ";
        }
        
        // work with rating
        string currentStudentRating = removeZerosFromEnd(to_string(students[i].rating));
        quantitySpaces = USER_RATING_LENGTH - currentStudentRating.length();
        currentLine += currentStudentRating;
        for (int i = quantitySpaces; i > 0; i--)
        {
            currentLine += " ";
        }

        lines += currentLine + "\n";
    }

    file.createText(lines);
}
void FileService::saveOutTwo(vector<Student> students) {
    string filePath = "out2.txt";
    File file(filePath);

    string lines = "";

    string currentLine = "";
    
    // names line
    for (int i = 0; i < students.size(); i++) {
        // work with name
        int quantitySpaces = USER_NAME_LENGTH - students[i].name.length();
        currentLine += students[i].name;
        for (int i = quantitySpaces; i > 0; i--)
        {
            currentLine += " ";
        }
    }

    lines += currentLine + "\n";
    currentLine = "";

    // group line
    for (int i = 0; i < students.size(); i++) {
        // work with group
        int quantitySpaces = USER_GROUP_LENGTH - students[i].group.length();
        currentLine += students[i].group;
        for (int i = quantitySpaces; i > 0; i--)
        {
            currentLine += " ";
        }
    }

    lines += currentLine + "\n";
    currentLine = "";

    // rating line
    for (int i = 0; i < students.size(); i++) {
        // work with rating
        string currentStudentRating = removeZerosFromEnd(to_string(students[i].rating));
        int quantitySpaces = USER_RATING_LENGTH - currentStudentRating.length();
        currentLine += currentStudentRating;
        for (int i = quantitySpaces; i > 0; i--)
        {
            currentLine += " ";
        }
    }

    lines += currentLine + "\n";
    currentLine = "";

    file.createText(lines);
}