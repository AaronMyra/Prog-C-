#include <iostream>
#include "IOFunctions.h"
#include <string>
#include <regex>

using namespace std;

string getFilePath(regex pathRegex, string message);

int main() {

    string inFilePath, outFilePath;
    bool valid = false, again = false, validFile = false;
    char inputChar;
    const regex inPathRegex("^([A-Z]\\:\\\\((((([a-z]|[A-Z]|[0-9]|[\\ \\~\\`\\!\\@\\#\\$\\%\\^\\&\\(\\)\\{\\}\\[\\]\\;\\'\\,\\.\\_\\-\\+\\=])))+)\\\\)*)((([a-z]|[A-Z]| )+)\\.cpp)$");
    const regex outPathRegex("^([A-Z]\\:\\\\((((([a-z]|[A-Z]|[0-9]|[\\ \\~\\`\\!\\@\\#\\$\\%\\^\\&\\(\\)\\{\\}\\[\\]\\;\\'\\,\\.\\_\\-\\+\\=])))+)\\\\)*)((([a-z]|[A-Z]| )+)\\.html)$");

    do {
        string fileContents = "";
        inFilePath = getFilePath(inPathRegex, "Enter path to input CPP file with extension: ");

        do {
            if (!getFileContents(inFilePath, &fileContents)) {
                cout << "Failed to open file at " + inFilePath << endl;
                cout << "Try again" << endl;
                validFile = false;
            } else {
                fileContents = replaceChars(&fileContents);
                validFile = true;
            }
        } while (!validFile);

        do {
            cout << "Would you like to output automatically (y/n): ";
            inputChar = tolower(getchar());
            if (inputChar != 'y' && inputChar != 'n') {
                cout << "Invalid option. Please try again" << endl;
            } else {
                valid = true;
            }
        } while (!valid);

        switch (inputChar) {
            case 'y':
                outFilePath = replaceFileExtention(inFilePath, ".html");
                break;
            case 'n':
                while ((getchar()) != '\n');
                outFilePath = getFilePath(outPathRegex, "Enter path to output HTML file with extension: ");
                break;
            default:
                outFilePath = replaceFileExtention(inFilePath, ".html");
                break;
        }

        outputContents(outFilePath, fileContents);
        valid = false;

        do {
            while ((getchar()) != '\n');
            cout << "Would you like to enter another file (y/n): ";
            inputChar = tolower(getchar());
            if (inputChar != 'y' && inputChar != 'n') {
                cout << "Invalid option. Please try again" << endl;
            } else {
                valid = true;
            }
        } while (!valid);

        again = inputChar == 'y'? true : false;
        while ((getchar()) != '\n');
    } while (again);

    return 0;
}

string getFilePath(regex pathRegex, string message){
    bool valid = false;
    string filePath = "";

    do {
        char input[150];
        cout << message;
        cin.getline(input,sizeof(input));
        filePath = input;
        if (cin.fail() || !regex_match(filePath, pathRegex)) {
            cin.clear();
            cout << "Invalid file path, please try again." << endl;
        } else{
            valid = true;
        }
    }while (!valid);
    return filePath;
}