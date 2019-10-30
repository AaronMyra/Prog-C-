//
// Created by student on 14/10/19.
//
#include <iostream>
#include "RationalNumber.h"
#include "FriendFunctions.h"
#include <string>
#include <sstream>
#include <regex>

//Methods for Rational Number Class

using namespace std;

//Constructor for 2 numbers
RationalNumber::RationalNumber(int inNumerator, int inDenominator){
    cout << "\nMultiple args constructor fired (Rational Number)\n" << endl;
    this->numerator = inNumerator;
    this->denominator = inDenominator;
}

//Constructor for 1 number
RationalNumber::RationalNumber(int wholeNumber){
    cout << "\nSingle args constructor fired (Whole Number)\n" << endl;
    this->numerator = wholeNumber;
    this->denominator = 1;
}

RationalNumber::RationalNumber(string number) {
    parseNumber(number, &this->numerator, &this->denominator);
}

//Default
RationalNumber::RationalNumber(){
    cout << "\nDefault constructor fired\n" << endl;
    this->numerator = 0;
    this->denominator = 1;
}

//Destructor
RationalNumber::~RationalNumber() = default;

void RationalNumber::normalize() {
    if(this->denominator < 0){
       this->denominator = this->denominator * -1;
       this->numerator = this->numerator * -1;
    }
    if(this->numerator%this->denominator == 0){
        this->numerator = (this->numerator / this->denominator);
        this->denominator = (this->denominator / this->denominator);
    }
    else if (this->denominator % this->numerator == 0){
        this->denominator = (this->denominator / this->numerator);
        this->numerator = (this->numerator / this->numerator);
    }
    else if (this->numerator%2==0 && this->denominator%2==0){
        do{
            this->numerator = this->numerator/2;
            this->denominator = this->denominator/2;
        }while (this->numerator%2==0 && this->denominator%2==0);
    }
}

void RationalNumber::getLowestCommonDenominator(int *leftNum, int *leftDem, int *rightNum, int *rightDem){

    int minMultiple, leftMultiple, rightMultiple;

    if (*leftDem > *rightDem){
        minMultiple = *leftDem;
    }
    else{
        minMultiple = *rightDem;
    }

    while(true)
    {
        if( minMultiple % *leftDem==0 && minMultiple % *rightDem==0 )
        {
            leftMultiple = minMultiple / *leftDem;
            *leftNum = *leftNum * leftMultiple;
            *leftDem = *leftDem * leftMultiple;

            rightMultiple = minMultiple / *rightDem;
            *rightNum = *rightNum * rightMultiple;
            *rightDem = *rightDem * rightMultiple;
            break;
        }
        ++minMultiple;
    }
}

string RationalNumber:: toString(RationalNumber &lefNum, RationalNumber &rightNum)
{
    this->normalize();
    stringstream strStream;
    string u, v, w, x, y, z;
    strStream << this->getNumerator();
    strStream >> u;
    strStream.clear();
    strStream << this->getDenominator();
    strStream >> v;
    strStream.clear();
    strStream << lefNum.getNumerator();
    strStream >> w;
    strStream.clear();
    strStream << lefNum.getDenominator();
    strStream >> x;
    strStream.clear();
    strStream << rightNum.getNumerator();
    strStream >> y;
    strStream.clear();
    strStream << rightNum.getDenominator();
    strStream >> z;

    return (w + "/" + x + " " + this->getOperatorChar() + " " + y + "/" + z + " = " + u + "/" + v );

}


int RationalNumber::getNumerator(){ return this->numerator; }
int RationalNumber::getDenominator(){ return this->denominator; }
char RationalNumber::getOperatorChar() { return this->operatorChar; }

//Operations
RationalNumber RationalNumber:: operator+ (RationalNumber &rightObj)
{
    cout << "\nOverloaded + operator fired\n" << endl;
    int leftNum = this->getNumerator(), leftDem = this->getDenominator(), rightNum = rightObj.getNumerator(), rightDem = rightObj.getDenominator();
    this->getLowestCommonDenominator(&leftNum, &leftDem, &rightNum, &rightDem);
    return RationalNumber(leftNum + rightNum, leftDem);
}

RationalNumber RationalNumber:: operator- (RationalNumber &rightObj)
{
    cout << "\nOverloaded - operator fired\n" << endl;
    int leftNum = this->getNumerator(), leftDem = this->getDenominator(), rightNum = rightObj.getNumerator(), rightDem = rightObj.getDenominator();
    this->getLowestCommonDenominator(&leftNum, &leftDem, &rightNum, &rightDem);
    return RationalNumber(leftNum - rightNum, leftDem);
}

RationalNumber RationalNumber:: operator/ (RationalNumber &rightObj)
{
    cout << "\nOverloaded / operator fired\n" << endl;
    return RationalNumber(this->numerator * rightObj.getDenominator(), this->denominator * rightObj.getNumerator());
}

RationalNumber RationalNumber:: operator* (RationalNumber &rightObj)
{
    cout << "\nOverloaded * operator fired\n" << endl;
    return RationalNumber(this->numerator * rightObj.getNumerator(), this->denominator * rightObj.getDenominator());
}

bool RationalNumber:: operator== (RationalNumber &rightNum)
{
    cout << "\nOverloaded == operator fired\n" << endl;
    if ((this->numerator * rightNum.denominator) == (rightNum.numerator * this->denominator)){
        return true;
    }
    else {
        return false;
    }
}
bool RationalNumber:: operator< (RationalNumber &rightNum)
{
    cout << "\nOverloaded < operator fired\n" << endl;
    if ((this->numerator / this->denominator) < (rightNum.numerator / rightNum.denominator)){
        return true;
    }
    else {
        return false;
    }
}

bool RationalNumber:: operator> (RationalNumber &rightNum)
{
    cout << "\nOverloaded > operator fired\n" << endl;
    if ((this->numerator / this->denominator) > (rightNum.numerator / rightNum.denominator)){
        return true;
    }
    else {
        return false;
    }
}


