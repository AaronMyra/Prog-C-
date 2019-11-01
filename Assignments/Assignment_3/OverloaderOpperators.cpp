//
// Created by student on 01/11/19.
//

#include "OverloaderOpperators.h"
#include "Student.h"

using namespace std;

//File containing overloaded operators

ostream& operator<<(ostream &output, Student &student)
{
    string tempOutput;
    tempOutput = "\nStudent Name: " + student.getName() + "\n";
    tempOutput += "Number of courses: " + to_string(student.getNumOfCourses()) + "\n";
    tempOutput += "Course List\n";
    tempOutput += "----------------------------\n";
    for (int i = 0; i < student.getNumOfCourses() ; ++i) {
        if (student.getCourse(i) != ""){
            tempOutput += to_string(i + 1) + ": " + student.getCourse(i) + "\n";
        }
    }
    output << tempOutput;
    return output;
}