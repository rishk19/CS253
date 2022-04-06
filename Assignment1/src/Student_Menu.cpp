#include "Include/Student_Menu.h"
#include <iostream>

using namespace std;

student_menu :: student_menu(user_database* all_users, book_database* all_books, student student_1){
    cout << endl <<  "Welcome to the student portal " << student_1.name << endl << endl ;
    int flag = 1;
    while(flag){
        cout << "Press 1 if you want to display all the books in the database" <<endl;
        cout << "Press 2 if you want to display all your issued books" <<endl;
        cout << "Press 3 if you want to check availability of book" <<endl;
        cout << "Press 4 if you want to check your fine " <<endl;
        cout << "Press 5 if you want to logout" <<endl <<endl;
        int option;

        cout << "Enter your option : ";
        cin >> option;
        cout <<endl;

        switch(option){
            case 1:
            {
                cout <<endl <<"All the books in the database is "<< endl;
                all_books->display();
                break;
            }

            case 2:
            {   
                long long int n = student_1.issued_book_list.book_list.size();
                if (n > 0){
                cout << endl <<"Your issued book list is : "<<endl;
                student_1.issued_book_list.display();
                }
                else{
                    cout << "You havent issued any books." <<endl <<endl;
                }
                break;
            }

            case 3:
            {
                cout << "Enter Book ISBN : ";
                long long int ISBN_requested;
                cin >> ISBN_requested;
                cout <<endl;
                long long int index = all_books->search(ISBN_requested);
                book book_1 = all_books->book_list[index];
                book_1.display();
                book_1.book_request();
                break;
            }

            case 4:
            {
                cout << "Option under construction " <<endl <<endl;
                break;
            }

            case 5:
            {
                flag = 0;
                cout << endl << "Logging out !!" <<endl;
                break;
            }
            
            default:
            {
                cout << "Wrong option entered" <<endl;
                break;
            }
        }
    }

}