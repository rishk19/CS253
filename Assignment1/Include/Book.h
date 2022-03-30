#include<string>
class book {
    private:
    std::string author;
    std::string title;
    long long int ISBN;
    std::string publication;
    void book_request();
    void show_duedate();
};