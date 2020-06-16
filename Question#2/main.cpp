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
    void issueBook();
    void getData();
    void booksLeft();
    void remainingDays();
};

int main(){
    
    return 0;
}
