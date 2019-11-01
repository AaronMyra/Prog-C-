#include <iostream>
#include <string.h>
#include <regex>
#include "Student.h"
#include "OverloaderOpperators.h"

using namespace std;

string getStudentName(int);

int main() {

    int studentNum = 1, courseNum = 1;
    string studentName, tempCourseName, inputStr;
    bool valid = false, entAnotherCourse = false, entAnotherStu = false;
    char input[50], inputChar;


    //Intro to student program
    studentName = getStudentName(studentNum);
    Student student1 = Student(input);

    do {
        do {
            cout << "\nEnter course " + to_string(courseNum) + ": ";
            cin >> tempCourseName;
            valid = tempCourseName == "" ? false : true;
            if (valid == false){
                cout << "Must enter course name" << endl;
            }
        } while (!valid);

        student1.receiveData(tempCourseName);

        //Prompt user to enter another course or not
        do {
            cout << "Would you like yo enter another course: (y/n) ";

            //Get user input/convert to char
            cin >> inputStr;
            inputChar = inputStr[0];

            // Input Validation
            if (tolower(inputChar) != 'y' && tolower(inputChar) != 'n') {

                cout << "Invalid entry, try again" << endl;
                valid = false;
            }
            else{
                valid = true;
            }
        }while (!valid);

        entAnotherCourse = tolower(inputChar) == 'y'? true : false;
        courseNum++;
    }while (entAnotherCourse);

    //Output student 1 details
    cout << student1;

    studentNum++;
    studentName = "";
    studentName = getStudentName(studentNum);
    Student student2 = student2;

    return 0;
}

string getStudentName(int studentNum){

    char input[50];
    bool valid = false;
    string tempStuName;
    const regex nameRegex ("^[A-Z]([a-z]+)( )[A-Z]([a-z]+)$");

    do{
        cout << "Enter student " + to_string(studentNum) + " name: ";
        cin.getline(input, sizeof(input));
        valid = (!regex_match(tempStuName, nameRegex))? true : false;
    }while (!valid);
    return input;
}