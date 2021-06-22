#pragma once
#ifndef FILESERVICE_H
#define FILESERVICE_H
#endif
using namespace std;

#include <string>
#include <vector>

#include "File.h"
#include "Student.h"

class FileService {
public:
	static string removeZerosFromEnd(string str);

	static void saveOutOne(vector<Student> students);
	static void saveOutTwo(vector<Student> students);
};