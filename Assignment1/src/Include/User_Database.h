#include<vector>
#include "user.h"

class user_database{
    private:
    std::vector<user> user_list;
    void add(user book_1);
    void update(user book_1);
    void remove(user book_1);
    long long int search(user book_1);
};