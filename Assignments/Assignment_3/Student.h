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
    Student(const Student &student);
    void receiveData(string);
    void copyCourseData();
    string toString();
    void resetCourses();

    //Getters & Setters
    int getCourseListSize();
    int getNumOfCourses();
    string getName();
    string * getCourseList();
    string getCourse(int num);

};


#endif //ASSIGNMENT_3_STUDENT_H
