#include<vector>
#include<string>
#include "Book.h"
class book_database {
    private:
    std::vector<book> book_list;
    void add(book book_1);
    void update(book book_1);
    void remove(book book_1);
    long long int search(book book_1);
};