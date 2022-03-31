#include "Include/Book_database.h"
#include <iostream>
using namespace std;

void book_database::add(void){
    book book_1;

    cout << "Enter Book Name: ";
    cin >> book_1.title;
    cout << endl;

    cout << "Enter Book Author: ";
    cin >> book_1.author;
    cout << endl;

    cout << "Enter Book ISBN: ";
    cin >> book_1.ISBN;
    cout << endl;

    cout << "Enter Book Publication: ";
    cin >> book_1.publication;
    cout << endl;

    book_list.push_back(book_1);
    return;
}
