//
//  main.cpp
//  Question#2
//
//  Created by Afaq Ahmed on 16/06/2020.
//  Copyright © 2020 Afaq Ahmed. All rights reserved.
//

#include <iostream>
#include <iomanip>
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
    static void totalBookLeft();
    void remainingDays();
    void copiesLeft();
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
    copies--;
    cout << "Enter srudent name:"; cin.getline(studentName, 20);
    cout << "Enter issue date only date(00)"; cin >> issueDate;
}

void Library::remainingDays() {
    cout << "Enter current date"; cin>>currentDate;
    cout << "Book issue by " << studentName << "at " << issueDate;
    cout << "Total days remaining" << 7 - (currentDate-issueDate);
}

void Library::totalBookLeft() {
    cout << "Total books left: " << totalBooksLeft;
}

void Library::copiesLeft(){
    cout << "Copies left" << copies;
}

int main(){
    
    Library lib[10];
    
    for (int i = 0 ; i < 10; i++) {
        lib[i].getData();
    }
    cout << setw(30) << setfill('-') << "" << setfill(' ') << endl;
    
    for (int i = 0 ; i < 10; i++) {
        lib[i].putData();
    }
    
    lib[0].issueBook();
    
    lib[0].remainingDays();
    
    lib[0].copiesLeft();
    
    Library::totalBookLeft();
    
    return 0;
}
