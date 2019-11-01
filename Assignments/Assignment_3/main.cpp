#include <iostream>
#include <string.h>
#include <regex>
#include "Student.h"
#include "OverloaderOpperators.h"

using namespace std;

string getStudentName(int);

int main() {

        //Initialize Variables
        int studentNum, courseNum;
        string studentName, tempCourseName, inputStr;
        bool valid, entAnotherCourse, returnBeg;
        char inputChar;

        do {
            studentNum = 1;
            courseNum = 1;

            //Intro to student program
            studentName = getStudentName(studentNum);
            Student student1 = Student(studentName);

            do {
                do {
                    //Get and validate course name
                    cout << "\nEnter course " + to_string(courseNum) + ": ";
                    cin >> tempCourseName;
                    valid = tempCourseName == "" ? false : true;
                    if (valid == false) {
                        cout << "Must enter course name" << endl;
                    }
                } while (!valid);

                // Add course data to list
                student1.receiveData(tempCourseName);

                //Prompt user to enter another course or not
                do {
                    cout << "Would you like to enter another course: (y/n) ";

                    //Get user input/convert to char
                    cin >> inputStr;
                    inputChar = inputStr[0];

                    // Input Validation
                    if (tolower(inputChar) != 'y' && tolower(inputChar) != 'n') {

                        cout << "Invalid entry, try again" << endl;
                        valid = false;
                    } else {
                        valid = true;
                    }
                } while (!valid);

                entAnotherCourse = tolower(inputChar) == 'y' ? true : false;
                courseNum++;
            } while (entAnotherCourse);

            //Output student 1 details
            cout << student1;

            studentNum++;

            //Copy student 1 data into student 2 (copy constructor)
            Student student2 = student1;
            student2.setName(getStudentName(studentNum));
            studentNum++;

            //Output student2 details
            cout << student2;

            // Clear student 1 details and output
            student1.resetCourses();
            cout << student1;

            // Output student 2 details again
            cout << student2;

            //Copy student 2 into student 3 (copy constructor)
            Student student3 = student2;
            student3.setName(getStudentName(studentNum));

//    cout << student3;

            do {
                cout << "Would you like return to beginning? (y/n) ";

                //Get user input/convert to char
                cin >> inputStr;
                inputChar = inputStr[0];

                // Input Validation
                if (tolower(inputChar) != 'y' && tolower(inputChar) != 'n') {

                    cout << "Invalid entry, try again" << endl;
                    valid = false;
                } else {
                    valid = true;
                }
            } while (!valid);

            returnBeg = tolower(inputChar) == 'y' ? true : false;

        }while(returnBeg);

    return 0;
}

string getStudentName(int studentNum){

    char input[50];
    bool valid = false;
    string tempName = "";
    const regex nameRegex ("^[A-Z]([a-z]+)( )[A-Z]([a-z]+)$");

    do{
        cout << "\nEnter student " + to_string(studentNum) + " name: ";
        cin.ignore();
        cin.getline(input, sizeof(input));
        tempName = input;
        if (cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else if (tempName == ""){
            cout << "Must enter name\n";
        }
        else{
            valid = true;
        }
//        valid = (!regex_match(tempStuName, nameRegex))? true : false;
    }while (!valid);
    return input;
}