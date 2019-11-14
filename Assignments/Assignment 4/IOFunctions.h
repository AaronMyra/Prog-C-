//
// Created by w0235012 on 11/13/2019.
//

#ifndef ASSIGNMENT_4_IOFUNCTIONS_H
#define ASSIGNMENT_4_IOFUNCTIONS_H

#include <string>

using namespace std;

bool getFileContents(string filePath, string *contents);
void outputContents(string filePath, string contents);
void replaceFileExtention(string *filePath, string newExtention);

#endif //ASSIGNMENT_4_IOFUNCTIONS_H