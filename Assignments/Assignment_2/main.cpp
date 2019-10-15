#include <iostream>
#include "RationalNumber.h"
#include <string>
#include <cstring>
#include <sstream>
#include <regex>
#include "FriendFunctions.h"

using namespace std;

int parseNumber(string strNum, int *num1, int *num2);

int main() {

    bool again = false, valid = false;
    string strNum1, strNum2;
    int leftNum1 = 0, leftNum2 = 0, rightNum1 = 0, rightNum2 = 0;
    stringstream str;
    RationalNumber rn1, rn2;


    cout << "Welcome to the Rational Number calculator.\n" << endl;

    do{
        do {
            cout << "Enter the first number: ";
            valid = cin >> rn1;
            if (!valid){
                cout << "\nInvalid number entered\n";
            }
        }while (valid == false);

        do {
            cout << "Enter the second number: ";
            valid = cin >> rn2;
            if (!valid){
                cout << "\nInvalid number entered\n";
            }
        }while (valid == false);
        

        RationalNumber rn3 = rn1 + rn2;
        cout << rn3.toString(rn1, rn2) << endl;

        RationalNumber rn4 = rn1 - rn2;
        cout << rn4.toString(rn1, rn2) << endl;

        RationalNumber rn5 = rn1 * rn2;
        cout << rn5.toString(rn1, rn2) << endl;

        RationalNumber rn6 = rn1 / rn2;
        cout << rn6.toString(rn1, rn2) << endl;

    }while(again);

    return 0;
}
