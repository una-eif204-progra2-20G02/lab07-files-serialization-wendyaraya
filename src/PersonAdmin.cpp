//
// Created by Wendy on 11/15/2020.
//

#include "PersonAdmin.h"

void PersonAdmin::savingPerson(ISaveFrom*save, Person*person){
    save->saving(person);
}

void PersonAdmin::savingPersons(ISaveFrom*save, Person*person){
    save->saving(person);
}

std::vector<Person> PersonAdmin:: reading(IReadFrom* read){
    read->reading();
}