//
// Created by student on 21/09/19.
//

#include "UserMove.h"
#include <iostream>
#include <string>

#include "CheckMove.h"

using namespace std;

int userMove(char (*gridPtr)[3][3], char userLetter, char compLetter){

    int userInput;
    string errorMsg = "You have entered an invalid square. Please try again";
    string errorMsg2 = "\nThat location is already taken. Please try again.\n";

    do {
        cout << "Enter the number of the location you would like to go: (eg. 1) ";

        cin >> userInput;
        if (cin.fail() || userInput < 1 || userInput > 9) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << errorMsg;
        }

        if(userMoveCheck(userInput, gridPtr, userLetter, compLetter)){
            cout << errorMsg2;
        }

    }while (!userMoveCheck(userInput, gridPtr, userLetter, compLetter));


}