#include <iostream>
#include <array>
#include <string>

// Headers
#include "CheckMove.h"
#include "PrintGrid.h"
#include "UserMove.h"
#include "CheckWin.h"
#include "Block.h"
#include "CompMove.h"

using namespace std;

//Prototype
void printGrid(char (*gridPtr)[3][3], int p_GridRow, int p_GridCol);
int userMove(char (*gridPtr)[3][3]);



int main() {
    bool playAgain;
    int gridRow = 3, gridCol = 3, validation = 1, move = 0;
    string userInput;
    char userLetter = 'O', compLetter = 'X', compSpace =0;

    char *compMovePtr = &compSpace;

    do {


        //Variables
        char disGrid[3][3] =
        {
            {'1', '2', '3'},
            {'4', '5', '6'},
            {'7', '8', '9'}
        };

        char (*gridPtr)[3][3] = &disGrid;




    //Intro
    cout << "Welcome to Tic Tac Toe\n\n";

    while (validation) {
        cout << "Would you like to go first? (Yes/No): ";
        cin >> userInput;

        for (int i = 0; i < userInput.length(); ++i) {
            userInput[i] = tolower(userInput[i]);
        }

        if (userInput == "yes" || userInput == "y") {
            validation = 0;
        } else if (userInput == "no" || userInput == "n") {
            validation = 0;
            move = 1;
        } else {
            cout << "\nYou entered an invalid entry. Please try again.\n\n";
        }

        cin.clear();
        cin.ignore(1000, '\n');
    }


    // MAIN
    if (move) {

        disGrid[1][1] = 'X';
        cout << "\nComp took space: 5\n\n";
        printGrid(gridPtr, gridRow, gridCol);

        for (int i = 0; i < 4; ++i) {

            char letter;

            userMove(gridPtr, userLetter, compLetter);
            printGrid(gridPtr, gridRow, gridCol);

            if (checkWin(gridPtr, userLetter, i)) {
                cout << "You have won. That's not possible!!" << endl;
                break;
            } else if (checkWin(gridPtr, compLetter, i)) {
                cout << "Computer Wins!!" << endl;
                break;
            } else if (i == 4 || checkWin(gridPtr, compLetter, i)) {
                cout << "Tie Game." << endl;
                break;
            }

            compMove(gridPtr, userLetter, compLetter, i, compMovePtr);
            cout << "\nComp took space: " << *compMovePtr << "\n\n";
            printGrid(gridPtr, gridRow, gridCol);

            if (checkWin(gridPtr, userLetter, i)) {
                cout << "You have won. That's not possible!!" << endl;
                break;
            } else if (checkWin(gridPtr, compLetter, i)) {
                cout << "Computer Wins!!" << endl;
                break;
            } else if (i == 3 || checkWin(gridPtr, compLetter, i)) {
                cout << "Tie Game." << endl;
                break;
            }
        }
    }

    else {
        for (int i = 0; i < 5; ++i) {

            cout << "\nComp took space: " << *compMovePtr << "\n\n";
            printGrid(gridPtr, gridRow, gridCol);
            userMove(gridPtr, userLetter, compLetter);

            if (checkWin(gridPtr, userLetter, i)) {
                cout << "You have won. That's not possible!!" << endl;
                break;
            } else if (checkWin(gridPtr, compLetter, i)) {
                cout << "Computer Wins!!" << endl;
                break;
            } else if (i == 4 || checkWin(gridPtr, compLetter, i)) {
                cout << "Tie Game." << endl;
                break;
            }

            compMove(gridPtr, userLetter, compLetter, i, compMovePtr);

            if (checkWin(gridPtr, userLetter, i)) {
                cout << "You have won. That's not possible!!" << endl;
                break;
            } else if (checkWin(gridPtr, compLetter, i)) {
                printGrid(gridPtr, gridRow, gridCol);
                cout << "Computer Wins!!" << endl;
                break;
            }
        }
    }

    validation = false;

    do {
        cout << "Would you like to play again? (Yes/No): ";
        cin >> userInput;

        for (int i = 0; i < userInput.length(); ++i) {
            userInput[i] = tolower(userInput[i]);

        }

        if (userInput == "yes" || userInput == "y") {
            validation = 0;
            playAgain = true;
        } else if (userInput == "no" || userInput == "n") {
            validation = 0;
            playAgain = false;
        } else {
            cout << "\nYou entered an invalid entry. Please try again.\n\n";
        }

        cin.clear();
        cin.ignore(1000, '\n');
    } while (validation);


    } while (playAgain == true);

    return 0;
}


