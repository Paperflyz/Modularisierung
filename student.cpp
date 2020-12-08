#include "student.h"
#include <iostream>
#include "module.h"


using std::cout;
using std::cin;
using std::endl;

Student::Student(string name)
{
    string module;
    string answer = "y";

    this->name = name;

    while(answer == "y")
    {
        cout << "Tell me the module for the student " << name << endl;
        cin >> module;
        Module student = Module(module); // =Erstellung vom Objekt "Student" = Objekt von Module; mit = sage ich "Hey, weise mir die Werte vom Konstruktor Module zu"
        modules.push_back(student);
        cout << "\nDo you want to set another module for " << name << "? Enter y / n" << endl;
        cin >> answer;
        avgGrade = student.getAverageGrade();


    }
}

vector <Module> Student::getModules()
{
    return modules;
}

string Student::getStudent()
{
    return name;
}


float Student::getGrades()
{
    return avgGrade;
}
