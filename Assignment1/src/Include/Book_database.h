#pragma once
#include<vector>
#include<string>
#include "Book.h"
#include "Librarian.h"
class book_database{
    public:
    std::vector<book> book_list;

    //Functions
    void add(void);
    void update(long long int ISBN);
    void remove(long long int ISBN);
    long long int search(long long int ISBN_requested);

    //Friend Classes
    friend class librarian;
};