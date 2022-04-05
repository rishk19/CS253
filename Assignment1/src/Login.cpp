#include "Include\Login.h"
#include "Include\Student_Menu.h"
#include "Include\Professor_Menu.h"
#include "Include\Librarian_Menu.h"
#include "Include\User_Database.h"
#include <iostream>
#include <string>

using namespace std;
login::login(user_database* all_users){
    cout << "Welcome to the login portal" <<endl <<endl;
    cout << "Enter your ID : ";
    long long int ID;
    cin >> ID;
    cout <<endl;

    cout << "Enter Password : ";
    string password;
    getline(cin, password);

    vector<long long int> indices = all_users->search(ID);
    if (indices[0]== -1){
        cout << "No such user found in the database" <<endl<<endl;
    }
    else{
        user user_1 = all_users->user_list[indices[0]];
        if (user_1.password == password){
            cout << "Welcome " << user_1.name << " !!" <<endl << endl;
        }
        else {
            cout << "Incorrect Password" <<endl << endl;
        }
    }

}