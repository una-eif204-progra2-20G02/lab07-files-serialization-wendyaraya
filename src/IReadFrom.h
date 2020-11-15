//
// Created by Wendy on 11/15/2020.
//

#ifndef MY_PROJECT_NAME_IREADFROM_H
#define MY_PROJECT_NAME_IREADFROM_H
#include <sstream>
#include <vector>
#include "Person.h"

class IReadFrom {

private:
    virtual std::vector<Person> reading()=0;
    ~IReadFrom();

};

#endif //MY_PROJECT_NAME_IREADFROM_H
