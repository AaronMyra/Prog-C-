//
// Created by student on 14/10/19.
//

#ifndef ASSIGNMENT_2_FRIENDFUNCTIONS_H
#define ASSIGNMENT_2_FRIENDFUNCTIONS_H

#include <istream>
#include "RationalNumber.h"
#include <regex>

using namespace std;

bool operator>> (istream &input, RationalNumber &num);
bool validateNumber(string strNum, regex rationalRegex, regex wholeRegex);
int parseNumber(string strNum, int *num1, int *num2);
ostream& operator<<(ostream &output, RationalNumber &num);

#endif //ASSIGNMENT_2_FRIENDFUNCTIONS_H
