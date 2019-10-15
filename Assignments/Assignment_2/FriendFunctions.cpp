//
// Created by student on 14/10/19.
//

#include "FriendFunctions.h"
#include "RationalNumber.h"
#include <sstream>
#include <regex>

using namespace std;

bool operator>> (istream &input, RationalNumber &num) {
    const regex rationalRegex ("^(-{0,1}([1-9]|([1-9][0-9])+)\\/-{0,1}([1-9]|([1-9][0-9])+))$");
    const regex wholeRegex ("^-{0,1}\\d+$");
    int num1, num2, tempNum;
    string strNum;
    getline(input, strNum);
    if (!validateNumber(strNum, rationalRegex, wholeRegex)){
        return false;
    }
    else{
        if (regex_match(strNum, wholeRegex)){
            stringstream sstream (strNum);
            sstream >> tempNum;
            num = RationalNumber(tempNum);
        }
        else {
            parseNumber(strNum, &num1, &num2);
            num = RationalNumber(num1, num2);
        }
        return true;
    }
}

ostream& operator<<(ostream &output, RationalNumber &num)
{
    output << to_string(num.getNumerator()) + "/" + to_string(num.getDenominator());
    return output;
}

bool validateNumber(string strNum, regex rationalRegex, regex wholeRegex){
    if (!regex_match(strNum, rationalRegex)){
        if(!regex_match(strNum, wholeRegex)){
            return false;
        }
        else {
            return true;
        }
    }
    else{
        return true;
    }
}

int parseNumber(string strNum, int *num1, int *num2){
    string output;
    int tempNum;

    for (int i = 0; i < strNum.length() + 1 ; ++i) {
        if (strNum[i] == '-'){
            output += strNum[i];
        }
        else if (isdigit(strNum[i])){
            output += strNum[i];
        }
        else if (strNum[i] == '/'){
            istringstream sstream (output);
            sstream >> tempNum;
            *num1 = tempNum;
            output = "";
        }
        else{
            stringstream sstream (output);
            sstream >> tempNum;
            if (*num1 == 0){
                *num1 = tempNum;
                *num2 = 1;
            }
            else {
                *num2 = tempNum;
            }
        }
    }
}
