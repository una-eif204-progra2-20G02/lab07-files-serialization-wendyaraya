//
// Created by Wendy on 11/15/2020.
//

#ifndef MY_PROJECT_NAME_PERSON_H
#define MY_PROJECT_NAME_PERSON_H

#include <sstream>
#include <vector>

class Person {

private:
    int id;
    int age;
    std::string name;
    std::vector<Person> PersonList;

public:
    Person(int,int,std::string);

    Person();

    std::string getName();

    int getId();

    int getAge();

    void setName(std::string name);

    void setId(int id);

    void setAge(int age);

    std::string toString();

    //vector method

    void addPerson(Person *person);
};

#endif //MY_PROJECT_NAME_PERSON_H
