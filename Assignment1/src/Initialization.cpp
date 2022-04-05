#include "Include/Initialization.h"
#include "Include/User_Database.h"
#include <iostream>

using namespace std;

initialization::initialization(){
    cout << " Welcome to the Library Management System !!" <<endl <<endl;
    user_database all_users;
    cout << " Kindly Intialize the user database" <<endl <<endl;
    int flag = 1;
    while(flag){
        cout << "Press 1 if you wish to add to the database" <<endl;
        cout << "Press 2 if you wish to delete an entry to the database" <<endl;
        cout << "Press 3 if you wish to update an entry to the database" <<endl ;
        cout << "Press 4 if you wish to end the initialization of the database" <<endl << endl;
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
                flag = 0;
                break;
            }

            default:
            {
                cout << "Incorrect option added" <<endl <<endl;
                break;
            }
        }
    }
}