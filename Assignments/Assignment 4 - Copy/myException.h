//
// Created by w0235012 on 11/15/2019.
//

#ifndef ASSIGNMENT_4_MYEXCEPTION_H
#define ASSIGNMENT_4_MYEXCEPTION_H

#include <exception>
using namespace std;

class myException : public exception{
virtual const char* what() const throw()
  {
    return "File does not exist";
  }
}myException;


#endif //ASSIGNMENT_4_MYEXCEPTION_H
