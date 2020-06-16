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
    char studentName[20];
    int publishedYear;
    int copies;
    int issueDate;
    int currentDate;
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
:publishedYear(0),copies(0),issueDate(0),currentDate(0){
    
}

void Library::getData() {
    cout << "Enter book name ";  cin.getline(bookName, 20);
    cout << "Enter author name "; cin.getline(authorName, 20);
    cout << "Enter publisher name: "; cin.getline(publisherName, 20);
    cout << "Enter published year: "; cin >> publishedYear;
    cout << "Enter no. of copies: "; cin >>copies;
    if (copies != 0)
        totalBooksLeft += copies;
    else
        totalBooksLeft++;
}

void Library::putData() {
    cout << "Book Name: " << bookName;
    cout << "Author name: " << authorName;
    cout << "Publisher name: " << publisherName;
    cout << "Published Year: " << publishedYear;
    cout << "No. of copies: " << copies;
}

void Library::issueBook(){
    totalBooksLeft--;
    cout << "Enter srudent name:"; cin.getline(studentName, 20);
    cout << "Enter issue date only date(00)"; cin >> issueDate;
}

void Library::remainingDays() {
    cout << "Enter current date"; cin>>currentDate;
    cout << "Total days remaining" << 7 - (currentDate-issueDate);
}

void Library::booksLeft() {
    cout << "Total books left: " << totalBooksLeft;
}

int main(){
    
    
    
    return 0;
}
