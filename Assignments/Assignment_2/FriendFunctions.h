//
// Created by student on 14/10/19.
//

#ifndef ASSIGNMENT_2_FRIENDFUNCTIONS_H
#define ASSIGNMENT_2_FRIENDFUNCTIONS_H

#include <istream>
#include "RationalNumber.h"
#include <regex>

// Summary
//
// Definitions for overloaded input & output methods
using namespace std;

bool operator>> (istream &input, RationalNumber &num);
bool validateNumber(string strNum, regex rationalRegex, regex wholeRegex);
void parseNumber(string strNum, int *num1, int *num2);
ostream& operator<<(ostream &output, RationalNumber &num);

#endif //ASSIGNMENT_2_FRIENDFUNCTIONS_H
