#include "Include/Initialization.h"
#include "Include/User_Database.h"
#include "Include/Login.h"
#include "Include/Book_database.h"
#include <iostream>

using namespace std;

initialization::initialization(){
    cout << "Welcome to the Library Management System !!" <<endl <<endl;
    user_database all_users;
    book_database all_books;

    cout << "Kindly Intialize the user database" <<endl <<endl;
    int flag1 = 1;
    while(flag1){
        cout << "Press 1 if you wish to an user add to the database" <<endl;
        cout << "Press 2 if you wish to an user delete an entry to the database" <<endl;
        cout << "Press 3 if you wish to update an user of the database" <<endl ;
        cout << "Press 4 if you wish to end the initialization of the user database" <<endl << endl;
        cout << "Enter your option : ";


        int option;
        cin >> option;
        cout << endl;
        switch(option){

            case 1:
            {
                all_users.add();
                break;
            }

            case 2:
            {
                all_users.remove();
                break;
            }

            case 3:
            {
                all_users.update();
                break;
            }

            case 4:
            {   
                all_users.display();
                all_users.show_students();
                all_users.show_professors();
                all_users.show_librarians();
                flag1 = 0;
                cout << endl;
                //login logging_in(&all_users);
                break;
            }

            default:
            {
                cout << "Incorrect option added" <<endl <<endl;
                break;
            }
        }
    }

    cout << "Kindly initialize the book database" << endl << endl;
    int flag2 = 1;
    while(flag2){
        cout << "Press 1 if you wish to add a new book to the database" << endl;
        cout << "Press 2 if you want to remove a book from the database" << endl;
        cout << "Press 3 if you want to update a book from the database" <<endl;
        cout << "Press 4 if you want to end the initialization of the book database" <<endl <<endl;
        cout << "Enter your option : ";
        int option ;
        cin >> option;
        switch(option){
            case 1 :
            {
                all_books.add();
                break;
            }

            case 2:
            {
                all_books.remove();
                break;
            }

            case 3:
            {
                all_books.update();
                break;
            }

            case 4:
            {
                flag2 = 0;
                all_books.display();
                break;
            }

            default:
            {
                cout << "Wrong option selected";
                break;
            }

        }
    }


}