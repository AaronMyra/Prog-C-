//
// Created by w0235012 on 11/6/2019.
//

#ifndef POLY_DEMO_BOAT_H
#define POLY_DEMO_BOAT_H
#include "Vehicle.h"
#include <string>

class Boat : public Vehicle {

public:
    Boat(void);
    virtual ~Boat(void);
    virtual string blowHorn();
};


#endif //POLY_DEMO_BOAT_H
