//
// Created by student on 14/10/19.
//

#ifndef ASSIGNMENT_2_RATIONALNUMBER_H
#define ASSIGNMENT_2_RATIONALNUMBER_H

#include <string>

using namespace std;

class RationalNumber {
protected:
    int numerator;
    int denominator;
    char operatorChar;

public:
    RationalNumber(void);
    RationalNumber(int, int);
    RationalNumber(int inNumerator, int inDenominator, char operatorChar);
    RationalNumber(int);
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

};


#endif //ASSIGNMENT_2_RATIONALNUMBER_H
