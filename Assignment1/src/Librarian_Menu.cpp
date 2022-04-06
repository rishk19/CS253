#include "Include/Librarian_Menu.h"
#include <iostream>

using namespace std;

librarian_menu::librarian_menu(user_database* all_users, book_database* all_books, librarian librarian_1){
    cout << endl << "Welcome to the Librarian Portal " << librarian_1.name << endl <<endl;

    int flag = 1;
    while(flag){
        cout <<"Press 1 if you wish to add a book to the book database" <<endl;
        cout <<"Press 2 if you wish to remove a book from the the book database" <<endl;
        cout <<"Press 3 if you wish to update a book from the book database" <<endl;
        cout <<"Press 4 if you wish to add a user to the user database"<<endl;
        cout <<"Press 5 if you wish to remove a user from the user database"<<endl;
        cout <<"Press 6 if you wish to update a user from the user database" <<endl;
        cout <<"Press 7 if you wish to issue a book to a user" <<endl;
        cout <<"Press 8 if you wish to see the entire user list" <<endl;
        cout <<"Press 9 if you wish to see the entire book list" <<endl;
        cout <<"Press 10 if you wish to see the entire student list"<<endl;
        cout <<"Press 11 if you wish to see the entire professor list"<<endl;
        cout <<"Press 12 if you wish to see the entie librarian list" <<endl;
        cout <<"Press 13 if you wish to logout" <<endl<<endl;
    }
    cout <<"Enter your option : ";
    int option;
    cin >> option;
    cout <<endl;
    switch(option){
        case 1:
        {
            cout << "You have entered the portal to add books to the database!" <<endl<<endl;
            all_books->add();
            break;
        }

        case 2:
        {
            cout <<"You have entered the portal to remove books from the database !" <<endl <<endl;
            all_books->remove();
            break;
        }

        case 3:
        {
            cout <<"You have entered the portal to update books from the database !" <<endl <<endl;
            all_books->update();
            break;
        }

        case 4:
        {
            cout <<"You have entered the portal to add users to the database !"<<endl <<endl;
            all_users->add();
            break;
        }

        case 5:
        {
            cout << "You have entered the portal to remove users from the database !" <<endl <<endl;
            all_users->remove();
            break;
        }

        case 6:
        {
            cout << "You have entered the portal to update users from the database !" <<endl <<endl;
            all_users->update();
            break;
        }

        case 7:
        {
            cout << "You have entered the portal to issue books to the user from the database !" <<endl <<endl;
            cout << "Enter User ID : ";
            long long int requested_ID;
            cin >> requested_ID;
            cout <<endl;
            vector<long long int> user_index = all_users->search(requested_ID);

            cout << "Enter Book ISBN : ";
            long long int requested_ISBN;
            cin >> requested_ISBN;
            cout <<endl;
            long long int book_index = all_books->search(requested_ISBN);

            if(user_index[0] == -1){
                cout << "No such user found in the database." <<endl <<endl;
            }
            else{
                if(book_index == -1){
                    cout << "No such book found in the database. " <<endl <<endl;
                }
                else{
                    int type = all_users->user_list[user_index[0]].type;
                    switch(type){
                        case 0:
                        {

                            break;
                        }

                        case 1:
                        {

                            break;
                        }

                        case 2:
                        {

                            break;
                        }

                        default:
                        {
                            cout << "Unsual error occured !" <<endl <<endl;
                            break;
                        }
                    }
                }
            }

            break;
        }

        case 8:
        {
            cout <<"You have entered the portal to see the entire user list !" <<endl<<endl;
            all_users->display();
            break;
        }

        case 9:
        {
            cout <<"You have entered the portal to see the entire book list !" <<endl<<endl;
            all_books->display();
            break;
        }

        case 10:
        {
            cout <<"You have entered the portal to see the entire student list !" <<endl<<endl;
            all_users->show_students();
            break;
        }

        case 11:
        {
            cout <<"You have entered the portal to see the entire professor list !" <<endl<<endl;
            all_users-> show_professors();
            break;
        }
        
        case 12:
        {
            cout << "You have entered the portal to see the entire librarian list !" <<endl <<endl;
            all_users-> show_librarians();
            break;
        }

        case 13:
        {
            flag = 0;
            cout << endl << "Logging out !!" <<endl;
            break;
        }

        default:
        {
            cout << endl << "Wrong option enter" <<endl <<endl;
            break;
        }
    }

}