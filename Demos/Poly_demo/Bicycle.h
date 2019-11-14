//
// Created by w0235012 on 11/6/2019.
//

#ifndef POLY_DEMO_BICYCLE_H
#define POLY_DEMO_BICYCLE_H
#include "Vehicle.h"
#include <string>

class Bicycle : public Vehicle{

public:
    Bicycle(void);
    virtual ~Bicycle(void);
    virtual string blowHorn();
};


#endif //POLY_DEMO_BICYCLE_H
