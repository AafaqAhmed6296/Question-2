//
//  main.cpp
//  Question#2
//
//  Created by Afaq Ahmed on 16/06/2020.
//  Copyright © 2020 Afaq Ahmed. All rights reserved.
//

#include <iostream>
using namespace std;

class Library {
    char bookName[20];
    char authorName[20];
    char publisherName[20];
    int publishedYear;
    int copies;
    int issueDate;
    int daysleft;
    static int totalBooksLeft;
public:
    Library();
    void issueBook();
    void getData();
    void putData();
    void booksLeft();
    void remainingDays();
};

int Library:: totalBooksLeft = 0.0;

Library::Library()
:publishedYear(0),copies(0),issueDate(0),daysleft(0){
    
}

void Library::getData() {
    cout << "Enter book name "; cin >> bookName;
    cout << "Enter author name "; cin >> authorName;
    cout << "Enter publisher name: "; cin >> publisherName;
    cout << "Enter published year: "; cin >> publishedYear;
    cout << "Enter no. of copies: "; cin >>copies;
}

void Library::putData() {
    cout << "Book Name: " << bookName;
    cout << "Author name: " << authorName;
    cout << "Publisher name: " << publisherName;
    cout << "Published Year: " << publishedYear;
    cout << "No. of copies: " << copies;
}


int main(){
    
    return 0;
}
