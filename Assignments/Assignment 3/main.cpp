#include <iostream>
#include <string.h>
#include <regex>
#include "Student.h"

using namespace std;
int main() {

    int studentNum = 1, courseNum = 1;
    string tempStuName;
    string tempCourseName;
    bool valid = false;
    const regex nameRegex ("^[A-Z]([a-z]+)( )[A-Z]([a-z]+)$");
    char input[50];

    //Intro to student program
    do{
        do{
            cout << "Enter student " + to_string(studentNum) + " name: ";
            cin.getline(input, sizeof(input));
            valid = (!regex_match(tempStuName, nameRegex))? true : false;
        }while (!valid);

        Student student1 = Student(input);
        valid = false;

        do{
           cout << "Enter course " + to_string(courseNum) + ": ";
           cin >> tempCourseName;
           valid = tempCourseName == ""? false : true;
        }while (!valid);

        student1.receiveData(tempCourseName);

    }while (false);


    return 0;
}