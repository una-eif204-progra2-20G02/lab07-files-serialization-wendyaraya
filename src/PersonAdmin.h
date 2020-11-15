//
// Created by Wendy on 11/15/2020.
//

#ifndef MY_PROJECT_NAME_PERSONADMIN_H
#define MY_PROJECT_NAME_PERSONADMIN_H

#include <sstream>
#include "ISaveFrom.h"
#include "IReadFrom.h"

class PersonAdmin {

public:
    void savingPerson(ISaveFrom*save, Person*person);

    void savingPersons(ISaveFrom*save, Person*person);

    std::vector<Person> reading(IReadFrom* read);
};



#endif //MY_PROJECT_NAME_PERSONADMIN_H
