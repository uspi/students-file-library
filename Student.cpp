#include <string>
using namespace std;

struct StudentStruct
{
    char name[30];
    char group[10];
    float rating;
};

class Student {
public:
    StudentStruct studentStruct;

    Student(
        string name, 
        string group, 
        float rating) {

        char n[30] = "dfdf";

        studentStruct.name = "df";

        /*studentStruct.rating = 345;
        studentStruct.name = n;*/
    }

    string getName() {

    }
};