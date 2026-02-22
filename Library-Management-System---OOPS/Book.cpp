#include "Book.h"
#include <string>
#include <iostream>

using namespace std;

Book::Book(string title, string author, string isbn){
    this->title = title;
    this->author = author;
    this->isbn = isbn;
    this->isAvailable = true;
}

void Book::displayDetails() const{
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Availability: " << (isAvailable ? "Available" : "Not Available") << endl;
}

void Book::borrowBook(){
    if (isAvailable){
        isAvailable = false;
        cout << "'" << title << "' " << "has been borrowed." << endl;
    }
    // else{
    //     cout << "'" << title << "' " << "has already borrowed." << endl;
    // }
}

void Book::returnBook(){
    if (!isAvailable){
        isAvailable = true;
        cout << "'" << title << "' " << "has been returned." << endl;
    }
    // else{
    //     cout << "'" << title << "' " << "is already available." << endl;
    // }
}

string Book::getISBN() const{
    return isbn;
}

string Book::getTitle() const{
    return title;
}

bool Book::isBookAvailable() const{
    return isAvailable;
}

