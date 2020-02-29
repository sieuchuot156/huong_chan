#pragma once
#include <string>
#include"Person.hpp"

class Admin: public Person{

public:
    Admin();
    ~Admin();
private:
    std::string username = NULL;
    std::string password = NULL;
};