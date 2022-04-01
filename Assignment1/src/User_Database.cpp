#include <iostream>
#include "Include/User_Database.h"

using namespace std;

void user_database::add(){
    user user_1;

    cout << "Enter username : ";
    cin >> user_1.name;
    cout <<endl;

    cout << "Enter ID: ";
    cin >> user_1.id;
    cout <<endl;

    cout << "Enter Password: ";
    cin >> user_1.password;
    cout <<endl;

    cout << "Enter 0 if user is student" <<endl;
    cout << "Enter 1 if user is professor" <<endl;
    cout << "Enter 2 if user is librarian" <<endl;

    int i;
    cout << "Enter your option : ";
    cin >>i;
    cout <<endl;

    switch(i){
        case 0 :
        {
            user_1.id = 0;
            student student_1;
            student_1.name = user_1.name;
            student_1.id = user_1.id;
            student_1.password = user_1.password;
            student_list.push_back(student_1);
            user_list.push_back(user_1);
            break;
        }
        case 1 :
        {
            user_1.id = 1;
            professor professor_1;
            professor_1.name = user_1.name;
            professor_1.id = user_1.id;
            professor_1.password = user_1.password;
            professor_list.push_back(professor_1);
            user_list.push_back(user_1);
            break;
        }
        
        case 2:
        {
            user_1.id = 2;
            librarian librarian_1;
            librarian_1.name = user_1.name;
            librarian_1.id = user_1.id;
            librarian_1.password = user_1.password;
            librarian_list.push_back(librarian_1);
            user_list.push_back(user_1);
            break;
        }
        default :
            cout <<"Incorrect operation the process did not complete. Please try again !";
            break;

    }
    return;
}

vector <long long int> user_database::search(long long int ID){
    vector<long long int> indices;

    long long int i1,i2,i3,i4;
    i1 = -1;
    i2 = -1;
    i3 = -1;
    i4 = -1;

    for (long long int i =0; i<user_list.size(); i++){
        if(user_list[i].id = ID){
            i1 = ID;
        }
    }
    if (i1 == -1){
        indices.push_back(i1);
        indices.push_back(i2);
        indices.push_back(i3);
        indices.push_back(i4);
    }
    else{
        indices.push_back(i1);
        for (long long int i = 0; i<student_list.size();i++){
            if(student_list[i].id = ID){
                i2 = ID;
            }
        }
        indices.push_back(i2);

        for (long long int i = 0; i<professor_list.size();i++){
            if(professor_list[i].id = ID){
                i3 = ID;
            }
        }  
        indices.push_back(i3);    

        for (long long int i = 0; i<librarian_list.size();i++){
            if(librarian_list[i].id = ID){
                i4 = ID;
            }
        }  
        indices.push_back(i4); 
    }
    return(indices);
}

void user_database::remove(){
    long long int ID;
    cout << "Enter ID";
    cin >> ID;
    cout << endl;

    vector<long long int> indices = search(ID);
    if(indices[0]==-1){
        cout << "No such user found in the database." <<endl;
        return;
    }
    else{
        user user_1 = user_list[indices[0]];
        switch(user_1.type){
            case 0 :
            {
                student_list.erase(student_list.begin()+indices[1]);
                break;
            } 
            case 1 :
            {
                professor_list.erase(professor_list.begin()+indices[2]);
                break;
            }
            case 2 :
            {
                librarian_list.erase(librarian_list.begin()+indices[3]);
                break;
            }
            default :
            {
                cout << "Unsual error occured." << endl;
                break;
            }
        }
        cout << "The user " << user_1.name << " has been removed from the database." << endl;
    }
}