#include "module.h"
#include <iostream>
#include <cmath>
#include "student.h"

using std::cout;
using std::cin;
using std::endl;

//Funktion zum Eingeben einer Note, rückgabe der Note in Worten!
string Module::gradeString(float grade)
{
    string gradeInWords;
    //string wordLenght;
    grade = round(grade);
    if (grade == 1)
    {
        gradeInWords = "very good";
    }
    if (grade == 2)
    {
        gradeInWords = "good";
    }
    if (grade == 3)
    {
        gradeInWords = "satisfactory";
    }
    if (grade == 4)
    {
        gradeInWords = "sufficient";
    }
    if (grade == 5)
    {
        gradeInWords = "insufficient";
    }

    return gradeInWords;

}

string Module::toString(int length)
{
    string gradeInWords;
    string space = " ";

    gradeInWords = Module::gradeString(grade);

    int betweenSpace = length - gradeInWords.length() - subject.length();
    for (int i = 0; i < betweenSpace; ++i)
    {
        space += " ";
    }

    return subject + space + gradeInWords;

}


Module::Module(string subject)
{
    float grade = 0.0;
    //string gradeInWords;
    cout << "\nPlease insert the grade for the module " << subject << " :: " << endl;
    cin >> grade;
    this->grade = grade;
    this->subject = subject;

        this->averageGrade+=grade;

}

float Module::getAverageGrade()
{
    return averageGrade;
}
