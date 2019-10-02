//
// Created by w0235012 on 10/2/2019.
//
//myOwnMath Header File
// Interface for myOwnMath Class
// It contains square() and add(), both return ints

#ifndef OPERATING_OVERLOADING_MYOWNMATH_H// if already defined, don't redefine
#define OPERATING_OVERLOADING_MYOWNMATH_H

using namespace std;

class myOwnMath{
public:
    myOwnMath(void);//Default conctructor
    virtual ~myOwnMath(void);//virtual default constructor
    int square(int);// Prototypes/header signatures of methods
    int add(int);
};
#endif //OPERATING_OVERLOADING_MYOWNMATH_H
