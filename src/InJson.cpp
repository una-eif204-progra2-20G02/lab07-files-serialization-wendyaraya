//
// Created by Wendy on 11/15/2020.
//
#include "InJSON.h"



void to_json(json&_json, const Person &_person){
    _json = json{
            {"id",   _person.getId()},
            {"name", _person.getName()},
            {"age", _person.getAge()},
    };
}

void from_jason(const json&_json, Person &_person){
    _person.setId(_json.at("id").get<int>());
    _person.setName(_json.at("name").get<std::string>());
    _person.setAge(_json.at("age").get<int>());
}



void InJSON:: saving(Person*person){
    json serialize;
    serialize["name"]=person->getName();
    serialize["age"]=person->getAge();
    serialize["id"]=person->getId();
    string serializePerson= serialize.dump(4);

    ofstream archive;
    try {archive.open("JSONArchive.json", ios::binary);}
    catch (ifstream::failure a){
        cout<<"WARNING: The file could not be opened"<<std::endl;
        exit(1);
    }
    archive<<serializePerson<<std::endl;
    archive.close();
}

void InJSON::saving(std::vector<Person>){
    ofstream archive;
    try {archive.open("JSONArchive.json", ios::binary);}
    catch (ifstream::failure a){
        cout<<"WARNING: The file could not be opened"<<std::endl;
        exit(1);
    }
    json JsonData(person);
    std::string serialize= JsonData.dump();
    archive<<serialize<<std::endl;
    archive.close();

}

std::vector<Person> InJSON:: reading(){
    ifstream archive;
    try {archive.open("JSONArchive.json", ios::binary);}
    catch (ifstream::failure a){
        cout<<"WARNING: The file could not be opened"<<std::endl;
        exit(1);
    }
    std::string data;
    archive>>data;
    json info= json::parse(data);
    archive.close();

    vector<Person> person=info;
    return person;
}

