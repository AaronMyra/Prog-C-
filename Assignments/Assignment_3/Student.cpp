//
// Created by w0235012 on 10/30/2019.
//

#include "Student.h"

Student::Student() {
    this->name = "John Doe";
    this->numOfCourses = 0;
    this->courseList = nullptr;
    this->courseListSize = 0;
}

Student::Student(string p_studentName) {
    this->name = p_studentName;
    this->courseList = new string[2];
    this->numOfCourses = 0;
    this->courseListSize = 2;
}

Student::~Student() {
    if (this->courseList != nullptr)
    {
        delete [] this->courseList;//[] tells that it is dealing with an array
    }
}

Student::Student(const Student &student){
    this->courseListSize = student.courseListSize;
    for (int i = 0; i < this->courseListSize; ++i) {
        this->courseList[i] = student.courseList[i];
    }
}

void Student::copyCourseData() {
    string *tempArray;
    tempArray = this->courseList;
    delete[] this->courseList;
    this->courseList = new string[this->courseListSize * 2];
    for (int i = 0; i < this->courseListSize ; ++i) {
        this->courseList[i] = tempArray[i];
    }
    this->courseListSize = this->courseListSize * 2;
    tempArray = NULL;
    delete tempArray;
}

void Student::receiveData(string courseName) {

    if (this->numOfCourses == this->courseListSize){
        copyCourseData();
    }
    for (int i = 0; i < this->courseListSize ; ++i) {
        if (this->courseList[i] == ""){
            this->courseList[i] = courseName;
            break;
        }
    }
    this->numOfCourses++;
}

void Student::resetCourses() {
    this->numOfCourses = 0;
    for (int i = 0; i < sizeof(this->courseList)/ sizeof(this->courseList[0]) ; ++i) {
        this->courseList[i] = "";
    }
}

int Student::getNumOfCourses() {
    return this->numOfCourses;
}

string Student::getName(){
    return  this->name;
}

string * Student::getCourseList() {
    return this->courseList;
}

string Student::getCourse(int num) {
    return this->courseList[num];
}

string Student::toString() {
    string output;
    output = "Student Name: " + this->name + "\n";
    output += "Number of courses: " + to_string(this->numOfCourses) + "\n";
    output += "Course List\n";
    output += "----------------------------\n";
    for (int i = 0; i < this->numOfCourses ; ++i) {
        if (this->courseList[i] != ""){
            output += to_string(i + 1) + ": " + this->courseList[i] + "\n";
        }
    }
    return output;
}

int Student::getCourseListSize() { return this->courseListSize;}
