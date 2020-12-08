#ifndef MODULE_H
#define MODULE_H
#include <string>
#include <iostream>
#include <vector>


using std::string;
using std::vector;

class Module
{
public:
    Module(string subject);        //Konstruktor

    void gradeInsert(string subject);
    string toString(int length);
    string gradeString(float grade);
    float getAverageGrade();


private:
    string subject;
    float grade;
    float averageGrade;
};

#endif // MODULE_H
