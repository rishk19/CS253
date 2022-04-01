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

void book_database::remove(){
    cout << "Enter ISBN of the book : ";
    long long int ISBN_requested;
    cin >> ISBN_requested;
    cout <<endl;

    long long int n = search(ISBN_requested);
    if(n == -1){
        cout << "Book not found in the database."<< endl; 
    }
    else{
        cout << "The book "<< book_list[n].title << " removed from the database." << endl;
        book_list.erase(book_list.begin()+n);
    }
    return; 
}
void book_database::update(){
    cout << "Enter ISBN of the book : ";
    long long int ISBN_requested;
    cin >> ISBN_requested;
    cout <<endl;
    long long int n = search(ISBN_requested);
    if(n == -1){
        cout << "Book not found in the database."<< endl; 
    }
    else{

        book book_1 = book_list[n];
        cout <<"Enter 1 if you want to change the book title" <<endl;
        cout <<"Enter 2 if you want to change the book author" <<endl;
        cout <<"Enter 3 if you want to change the book ISBN" <<endl;
        cout <<"Enter 4 if you want to change the book publication"<<endl;

        int i;
        cout << "Enter your option : ";
        cin >> i;
        cout <<endl;

        switch(i){
            case 1:
                cout << "Enter new book title: ";
                cin >> book_1.title;
                cout << endl;
                break;
            case 2:
                cout << "Enter new book author: ";
                cin >> book_1.author;
                cout << endl;
                break;
            case 3:
                cout << "Enter new book ISBN: ";
                cin >> book_1.ISBN;
                cout << endl;
                break;
            case 4:
                cout << "Enter new book publication: ";
                cin >> book_1.publication;
                cout << endl;
                break;
            default:
                cout << "Incorrect operation the process did not complete. Please try again !"<<endl;
                break;
        }
        book_list[n] = book_1;

        
    }
    return;
}
