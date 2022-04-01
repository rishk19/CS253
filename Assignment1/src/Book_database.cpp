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

long long int book_database::search(long long int ISBN_requested){
    long long int n = book_list.size();
    for (long long int i=0;i<n;i++){
        if (book_list[i].ISBN == ISBN_requested){
            return(i);
        }
    }
    return(-1);
}

void book_database::remove(long long int ISBN_requested){
    long long int n = search(ISBN_requested);
    if(n == -1){
        cout << "Book not found in the database"<< endl; 
    }
    else{
        cout << book_list[n].title << " removed from the database" << endl;
        book_list.erase(book_list.begin()+n);
    }
    return; 
}
