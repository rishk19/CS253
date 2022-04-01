#pragma once
#include<string>
class user{
    protected:
    std::string name;
    long long int id;
    std::string password;
    int type; 
    //Type = 0 for student
    //Type = 1 for Professor
    //Type = 2 for Librarian
};