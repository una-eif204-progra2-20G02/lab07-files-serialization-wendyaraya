//
// Created by Wendy on 11/15/2020.
//

#ifndef MY_PROJECT_NAME_INBINARY_H
#define MY_PROJECT_NAME_INBINARY_H

#include <sstream>
#include <fstream>
#include "IReadFrom.h"
#include "ISaveFrom.h"
#include "Person.h"

class InBinary: public IReadFrom, public ISaveFrom{

private:
    void saving (Person*person)override;

    void saving(std::vector<Persona>)override;

    std::vector<Person> reading()override;

};

#endif //MY_PROJECT_NAME_INBINARY_H
