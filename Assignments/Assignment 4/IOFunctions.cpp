//
// Created by w0235012 on 11/13/2019.
//

#include "IOFunctions.h"
#include <string>
#include <fstream>

using namespace std;

bool getFileContents(string filePath, string *contents){

    ifstream inStream(filePath);
    string line = "";

    if (inStream.fail()){
        return false;
    }
    while (!inStream.eof()){
        getline(inStream, line);
        *contents += line;

    }
    inStream.close();
    return true;
}

void outputContents(string filePath, string contents){
    ofstream outStream(filePath);
    if (outStream.fail()){
        return;
    }
    outStream << contents;
    outStream.close();
}

void replaceFileExtention(string *filePath, string newExtention){
    string tempString = *filePath;
    bool fileExt = false;
    newExtention += '\000';

    for (int i = 0; i < tempString.size(); i++) {
        if (tempString[i] == '.'){
            fileExt = true;
        }
        if (fileExt){
            tempString[i] = '\000';
        }
    }

    for (int j = 0; j < tempString.size(); ++j) {
        if(tempString[j + 1] == '\000'){
            tempString.replace(j, 1, newExtention);
            break;
        }
    }
    *filePath = tempString;
}