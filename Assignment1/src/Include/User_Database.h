#pragma once
#include<vector>
#include "user.h"
#include "Librarian.h"

class user_database{
    private:
    std::vector<user> user_list;

    //Functions
    void add(user user_1);
    void update(user user_1);
    void remove(user user_1);
    long long int search(user user_1);

    //Friend Classes
    friend class librarian;
};