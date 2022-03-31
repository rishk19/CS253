#pragma once
#include<vector>
#include<string>
#include "Book.h"
//#include "Librarian.h"
class book_database{
    public:
    std::vector<book> book_list;

    //Functions
    void add(void);
    //void update(book book_1);
    //void remove(book book_1);
    //long long int search(book book_1);

    //Friend Classes
    //friend class librarian;
};