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
        cout << "The book is available for issue" <<endl<<endl;
    }
    else{
        cout << "The book is unavaialable for issue"<<endl<<endl;
    }
}

