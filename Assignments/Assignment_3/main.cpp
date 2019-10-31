#include <iostream>
#include <string.h>
#include <regex>
#include "Student.h"

using namespace std;
int main() {

    int studentNum = 1, courseNum = 1;
    string tempStuName, tempCourseName, inputStr;
    bool valid = false, enterAnother;
    const regex nameRegex ("^[A-Z]([a-z]+)( )[A-Z]([a-z]+)$");
    char input[50], inputChar;

    //Intro to student program
    do{
        do{
            cout << "Enter student " + to_string(studentNum) + " name: ";
            cin.getline(input, sizeof(input));
            valid = (!regex_match(tempStuName, nameRegex))? true : false;
        }while (!valid);

        Student student = Student(input);
        valid = false;

        do {
            do {
                cout << "Enter course " + to_string(courseNum) + ": ";
                cin >> tempCourseName;
                valid = tempCourseName == "" ? false : true;
                if (valid == false){
                    cout << "Must enter course name" << endl;
                }
            } while (!valid);

            student.receiveData(tempCourseName);

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

            enterAnother = tolower(inputChar) == 'y'? true : false;
            courseNum++;
        }while (enterAnother);
    }while (false);


    return 0;
}