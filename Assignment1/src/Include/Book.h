#pragma once
#include<string>
#include "Librarian.h"
class book {
    public:
    std::string author;
    std::string title;
    long long int ISBN;
    std::string publication;
    user issuer;
    
    //Functions
    void book_request();
    void show_duedate();

    //Friend Class
    friend class librarian;
};