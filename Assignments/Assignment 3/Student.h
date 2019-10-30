//
// Created by w0235012 on 10/30/2019.
//

#ifndef ASSIGNMENT_3_STUDENT_H
#define ASSIGNMENT_3_STUDENT_H

#include <string.h>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int numOfCourses, courseListSize;
    string *courseList;

public:
    Student();
    Student(string);
    ~Student();
    void receiveData(string);
    void copyCourseData();
    string toString();
    void resetCourses();

};


#endif //ASSIGNMENT_3_STUDENT_H
