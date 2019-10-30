//
// Created by w0235012 on 10/30/2019.
//

#ifndef ASSIGNMENT_3_STRING_H
#define ASSIGNMENT_3_STRING_H


class String {

private:
    char *str;
public:
    String();
    String(char *);
    ~String();
    void stringCopy();
};


#endif //ASSIGNMENT_3_STRING_H
