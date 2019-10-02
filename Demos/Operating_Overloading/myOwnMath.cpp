//
// Created by w0235012 on 10/2/2019.
//

#include <iostream>
#include <conio.h>
#include "myOwnMath.h"

using namespace std;

myOwnMath::myOwnMath(void) {}// Implementation of default constructor
myOwnMath::~myOwnMath() {}// Implementation of deconstructor

int myOwnMath::square(int num) { // Implementation of square method
    return num * num;
}

int myOwnMath::add(int num) { // Implementation of add method
    return num + num;
}