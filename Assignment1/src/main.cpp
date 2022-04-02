#include "Include/Book_database.h"
#include "Include/User_Database.h"
#include <iostream>
using namespace std;

int main(){
    cout<<"Hello"<<endl;
    
    user_database all_users_list;
    
    all_users_list.add();
    all_users_list.add();
    all_users_list.display();

    //all_users_list.update();

    all_users_list.remove();
    all_users_list.display();

    return(0);
}