#include <iostream>
#include "RationalNumber.h"
#include <string>
#include <cstring>
#include <sstream>
#include <regex>
#include "FriendFunctions.h"

using namespace std;

//Main Driver
int main() {

    bool again = false, valid = false;
    string strNum1, strNum2;
    stringstream str;
    RationalNumber rn1, rn2;


    cout << "Welcome to the Rational Number calculator.\n" << endl;

    do{
        do {
            try {
                cout << "Enter the first number: ";
                valid = cin >> rn1;
                if (!valid || cin.fail()){
                    cin.clear();
                    cout << "\nInvalid number entered\n";
                }
            }
            catch(exception e){
                cout << "An error occurred: " << e.what() << endl;
            }

        }while (valid == false);

        do {
            try {
                cout << "Enter the second number: ";
                valid = cin >> rn2;
                if (!valid || cin.fail()){
                    cin.clear();
                    cout << "\nInvalid number entered\n";
                }
            }
            catch (exception e){
                cout << "An error occurred: " << e.what() << endl;
            }
        }while (valid == false);
        

        RationalNumber rn3 = rn1 + rn2;
        rn3.normalize();
        cout << rn1 << " + " << rn2 << " = " << rn3 <<endl;

        RationalNumber rn4 = rn1 - rn2;
        rn4.normalize();
        cout << rn1 << " - " << rn2 << " = " << rn4 << endl;

        RationalNumber rn5 = rn1 * rn2;
        rn5.normalize();
        cout << rn1 << " * " << rn2 << " = " << rn5 << endl;

        RationalNumber rn6 = rn1 / rn2;
        rn6.normalize();
        cout << rn1 << " / " << rn2 << " = " << rn6 << endl;

        if (rn1 == rn2){
            cout << rn1 << " is equal to " << rn2 << endl;
        }
        else{
            cout << rn1 << " is NOT equal to " << rn2 << endl;
        }

        if (rn1 < rn2){
            cout << rn1 << " is less than " << rn2 << endl;
        }
        else{
            cout << rn1 << " is NOT less than " << rn2 << endl;
        }

        if (rn1 > rn2){
            cout << rn1 << " is greater than " << rn2 << endl;
        }
        else{
            cout << rn1 << " is NOT greater than " << rn2 << endl;
        }


    }while(again);

    return 0;
}
