//
// Created by w0235012 on 11/6/2019.
//

#ifndef POLY_DEMO_VEHICLE_H
#define POLY_DEMO_VEHICLE_H

#include <string>

using namespace std;

class Vehicle { // Do NOT redeclare the class in cpp file

public:
    Vehicle(void);
    virtual ~Vehicle(void); // Virtual allows ability to override
    //string blowHorn(); //reg
    //virtual string blowHorn() = 0; // pure virtual ie. abstract
    virtual string blowHorn(); //overrideable
};


#endif //POLY_DEMO_VEHICLE_H
