#include "Include/Professor.h"
#include <iostream>

using namespace std;

professor::professor(){
    type = 1;
}

void professor::issue_book(book* book_1){
    cout << endl;
    int issue_month,issue_date,issue_year;

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


    issued_book_list.book_list.push_back(*book_1);
    book_1->issue_date = issue_date;
    book_1->issue_month = issue_month;
    book_1-> issue_year = issue_year;

    book_1 -> issue_status = 1;
    return;
}