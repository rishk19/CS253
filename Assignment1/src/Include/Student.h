#include<vector>
#include "Book_database.h"
#include "User.h"
class student: public user{
    private:
    long long int fine_amount;
    book_database book_list;
    
    void calculate_fines();
    void clear_fine_amount();
};