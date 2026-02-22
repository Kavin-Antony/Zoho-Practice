#include <string>
#include <vector>
#include "Book.h"
#include "User.h"
#include "Library.h"
#include "Student.h"
#include "Teacher.h"
#include <iostream>

using namespace std;

bool Library::addBook(string title, string author, string isbn) {
    for (const Book& b : books) {
        if (b.getISBN() == isbn) {
            cout << "A book with this ISBN already exists.\n";
            return false;
        }
    }

    Book newBook(title, author, isbn);
    books.push_back(newBook);
    cout << "Book added successfully.\n";
    return true;
}

bool Library::addUser(string name, string userId, string userType) {
    for (User* u : users) {
        if (u->getUserId() == userId) {
            cout << "A user with this ID already exists.\n";
            return false;
        }
    }

    if (userType == "student" or userType == "Student") {
        users.push_back(new Student(name, userId));
    } 
    else if (userType == "teacher" or userType == "Teacher") {
        users.push_back(new Teacher(name, userId));
    } 
    else {
        cout << "Invalid user type.\n";
        return false;
    }
    cout << "User Added Successfully,\n";
    return true;
}

void Library::displayAllBooks(){
    int count = 1;
    for (const Book& book : books) {
        cout << "Book " << count++ << ":\n";
        book.displayDetails();
    }
}

void Library::displayAllUsers(){
    int count = 1;
    for (const User* u: users){
        cout << "User" << count++ << ":\n";
        u->displayUserInfo();
    }
}

Book* Library::searchBookByISBN(string isbn){
    for (Book& b: books){
        if (b.getISBN() == isbn){
            return &b;
        }
    }
    return nullptr;
}

User* Library::searchUserById(string userId){
    for (User* u: users){
        if (u->getUserId() == userId){
            return u;
        }
    }
    return nullptr;
}

bool Library::returnBook(string userId, string isbn){
    Book* b = searchBookByISBN(isbn);
    User* u = searchUserById(userId);
    if (b == nullptr){
        cout << "Book not found" << endl;
        return false;
    }
    if (u == nullptr){
        cout << "User not found" << endl;
        return false;
    }
    bool return_statement = u->returnBook(*b);
    // if (!return_statement){
    //     cout << "Book has not been borrowed by " << u->getUserId() << endl;
    // }
    return return_statement;
}

bool Library::issueBook(string userId, string isbn){
    Book* b = searchBookByISBN(isbn);
    User* u = searchUserById(userId);
    if (b == nullptr){
        cout << "Book not found" << endl;
        return false;
    }
    if (u == nullptr){
        cout << "User not found" << endl;
        return false;
    }
    bool issue_statement = u->borrowBook(*b);
    // if (!issue_statement){
    //     cout << "Book has not been borrowed by " << u->getUserId() << endl;
    // }
    return issue_statement;
}

Library::~Library() {
    for (User* u : users) {
        delete u;
    }
}
