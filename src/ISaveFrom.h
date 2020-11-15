//
// Created by Wendy on 11/15/2020.
//

#ifndef MY_PROJECT_NAME_ISAVEFROM_H
#define MY_PROJECT_NAME_ISAVEFROM_H
#include <sstream>
#include <vector>
#include "Person.h"

class ISaveFrom {

public:

    virtual void saving(Person*person)=0;
    virtual void saving(std::vector<Persona>)=0;
    ~ISaveFrom();

};
#endif //MY_PROJECT_NAME_ISAVEFROM_H
