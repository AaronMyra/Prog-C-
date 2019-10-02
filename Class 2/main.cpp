#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//Prototype
bool inputMechanism(string* inputString);

int main() {

    string keyPress;

    cout << "Press any key";
    cin >> keyPress;

    inputMechanism(&keyPress);

    return 0;
}

bool inputMechanism(string* inputString)
{
    char tempKey;
    const static int maxLineLength = 20;

    do{
        tempKey = _getch();
        if((tempKey >= 32 && tempKey <= 126))
        {
            //When valid character pressed, accept and print on screen
            if(maxLineLength > (*inputString).length())
            {
                (*inputString) += tempKey;
                printf("%c", tempKey);
            }
        }
        else if(tempKey == 8)
        {
            //If backspace pressed, pop character off string and erase from screen
            if((*inputString).length() > 0)
            {
                (*inputString).erase((*inputString).length() - 1, 1);
                printf("\b \b");
            }
        }
        else if(tempKey == -32)
        {
            //Drop off any arrow key presses using another getch
            _getch();
        }
    } while(tempKey != 13);

    //Drop a line
    printf("\n");

    return true;
}