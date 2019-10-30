//
// Created by student on 14/10/19.
//

#ifndef ASSIGNMENT_2_RATIONALNUMBER_H
#define ASSIGNMENT_2_RATIONALNUMBER_H

#include "MathOperations.h"
#include <string>

// Summary
//
// Class for Rational Numbers (fractions)

using namespace std;

class RationalNumber : public MathOperations {
protected:
    int numerator;
    int denominator;

public:
    RationalNumber(void);
    RationalNumber(int);
    RationalNumber(int, int);
    RationalNumber(string);
    ~RationalNumber();
    void getLowestCommonDenominator(int *leftNum, int *leftDem, int *rightNum, int *rightDem);
    int getNumerator(void);
    int getDenominator(void);
    char getOperatorChar(void);
    string toString(RationalNumber &leftObj, RationalNumber &rightObj);
    void normalize();
    RationalNumber operator+(RationalNumber &rightObj);
    RationalNumber operator-(RationalNumber &rightObj);
    RationalNumber operator/(RationalNumber &rightObj);
    RationalNumber operator*(RationalNumber &rightObj);
    bool operator==(RationalNumber &rightNum);
    bool operator<(RationalNumber &rightNum);
    bool operator>(RationalNumber &rightNum);

};


#endif //ASSIGNMENT_2_RATIONALNUMBER_H
