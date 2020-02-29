#pragma once
#include <string>

class Person {

public:
    Person();
    ~Person();
    std::string name;
    int age ;
    bool gender;
    std::string idCard;
    private:
        std::string username;
        std::string password;
};