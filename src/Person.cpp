//
// Created by Wendy on 11/15/2020.
//

#include "Person.h"

Person::Person(int id,int age,std::string name){
    this->id=id;
    this->age=age;
    this->name=name;
}

Person::Person(){
    this->id=0;
    this->age=0;
    this->name="Undefined";
}

std::string Person::getName(){
    return this->name;
}

int Person::getId(){
    return this->id;
}

int Person::getAge(){
    return this->age;
}

void Person::setName(std::string name){
    this->name=name;
}

void Person::setId(int id){
    this->id=id;
}

void Person::setAge(int age){
    this->age=age;
}

std::string Person::toString(){
    stringstream output;
    output<<"Name: "<<getName()<<endl;
    output<<"ID:   "<<getId()<<endl;
    output<<"Age:  "<<getAge()<<endl;
    return output.str();
}

void Person::addPerson(Person *person){
    personList.push_back(person);
}
