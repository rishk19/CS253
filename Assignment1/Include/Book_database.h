#include<vector>
#include<string>
class Book_database {
    private:
    std::vector<std::string> book_list;
    void add();
    void update();
    void remove();
    void search();
};