//
// Created by w0235012 on 10/30/2019.
//

#include <cstring>
#include "String.h"

String::String() {
    this->str = nullptr;
}

String::String(char *inStr) {
    int length = strlen(inStr);
    this->str = new char[length + 1];//new local array
    strcpy(this->str,inStr);
}
