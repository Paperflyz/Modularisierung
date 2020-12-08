#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>
#include "module.h"

using std::string;
using std::vector;

class Student
{

public:

    Student(string name);
    vector<Module> getModules();
    string getStudent();
    float getGrades();



private:
    string name;
    vector <Module> modules;
    float avgGrade;

};

#endif // STUDENT_H
