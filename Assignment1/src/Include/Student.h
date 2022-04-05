#pragma once
#include<vector>
#include "Book_database.h"
#include "User.h"
class student: public user{
    public:
    long long int fine_amount;
    book_database issued_book_list;
    
    //Functions
    void issue_book(book* book_1);
    void calculate_fines();
    void clear_fine_amount();
    student();
};