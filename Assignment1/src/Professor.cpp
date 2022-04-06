#include "Include/Professor.h"
#include "Include/date_functions.h"
#include <iostream>

using namespace std;

professor::professor(){
    type = 1;
    fine_per_day = 5;
    issue_length = 60;
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

    if(valid_date_checker(issue_month, issue_year, issue_date)){
        issued_book_list.book_list.push_back(*book_1);
        book_1->issue_date = issue_date;
        book_1->issue_month = issue_month;
        book_1-> issue_year = issue_year;
        book_1 -> issue_status = 1;
        cout << "The book has been issued successfully !" <<endl<<endl;
    }

    else{
        cout <<"Incorrect Date Added ! The book has not been issued" <<endl <<endl;
    }


    return;
}

void professor::calculate_fines(){
    long long int n = issued_book_list.book_list.size();
    long long int fine = 0;
    int today_month, today_date, today_year;

    cout << "Enter today's month in numeric : "; 
    cin >> today_month;
    cout << endl;

    cout << "Enter today's date in numeric : ";
    cin >> today_date;
    cout << endl;

    cout << "Enter today's year in numeric which should be between 2000 and 2040 :";
    cin >> today_year;
    cout << endl;

    if(valid_date_checker(today_month,today_year,today_date)){
        long long int i;
        for (i=0;i<n;i++){
            long long int days;
            book book_1 = issued_book_list.book_list[i];
            days = days_calculator(book_1.issue_date, book_1.issue_month, book_1.issue_year, today_date, today_month, today_year);
            if(days > issue_length){
                fine+= (days - issue_length)*fine_per_day;
            }            
        }
        cout << "The total fine is : " << fine <<endl <<endl;
    }
    else{
        cout << "Incorrect date added ! Operation did not end successfully" <<endl <<endl;
    }

}