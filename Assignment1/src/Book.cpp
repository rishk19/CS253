#include "Include/Book.h"
#include <iostream>

using namespace std;
book::book(){
    issue_status = 0;
}

void book::display(){
    cout << endl;
    cout << "Title : " << title <<endl;
    cout << "Author : "<< author <<endl;
    cout << "ISBN : "<< ISBN <<endl;
    cout << "Publication : "<< publication <<endl;

    return;
}

void book::book_request(){
    if (issue_status == 0){
        cout << "The book is available for issue";
    }
    else{
        cout << "The book is unavaialable for issue";
    }
}

/*
void book::issue_for_students(student* user_1){
    cout << endl;

    cout << "Enter today's month in numeric : "; 
    cin >> issue_month;
    cout << endl;

    cout << "Enter today's date in numeric : ";
    cin >> issue_date;
    cout << endl;

    cout << "Enter today's year in numeric which should be between 2000 and 2040 :";
    cin >> issue_year;
    cout << endl;

    if((issue_year > 2400) || (issue_year<2000)){
        cout << "Invalid Date Added ! Operation Failed" <<endl;
        return;
    }
    else{
        if ((issue_month > 12) || (issue_month < 0)){
            cout << "Invalid Date Added ! Operation Failed" << endl;
            return;
        }
        else{
            if ((issue_year %4 == 0)){
                if (issue_month == 2){
                    if(issue_date > 29 || issue_date < 0){
                        cout << "Invalid Date Added ! Operation Failed" << endl;
                        return;
                    }
                }
                else if(issue_month == 4 || issue_month == 6 || issue_month == 9 || issue_month == 11){
                    if(issue_date > 30 || issue_date < 0){
                        cout << "Invalid Date Added ! Operation Failed" << endl;
                        return;                        
                    }
                }
                else{
                    if(issue_date > 31 || issue_date < 0){
                        cout << "Invalid Date Added ! Operation Failed" << endl;
                        return;                        
                    }                    
                }
            }
            else{
                if (issue_month == 2){
                    if(issue_date > 28 || issue_date < 0){
                        cout << "Invalid Date Added ! Operation Failed" << endl;
                        return;
                    }
                }
                else if(issue_month == 4 || issue_month == 6 || issue_month == 9 || issue_month == 11){
                    if(issue_date > 30 || issue_date < 0){
                        cout << "Invalid Date Added ! Operation Failed" << endl;
                        return;                        
                    }
                }
                else{
                    if(issue_date > 31 || issue_date < 0){
                        cout << "Invalid Date Added ! Operation Failed" << endl;
                        return;                        
                    }                    
                }

            }
        }

    }
    user_1->issued_book_list.push_back()

}
*/



