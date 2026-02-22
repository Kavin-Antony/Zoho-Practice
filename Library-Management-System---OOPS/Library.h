#pragma once
#include <string>
#include <vector>
#include "Book.h"
#include "User.h"

using namespace std;

class Library{
    private:
        vector<Book> books;
        vector<User*> users;

    public:
        bool addBook(string title, string author, string isbn);
        bool addUser(string name, string userId, string userType);
        Book* searchBookByISBN(string isbn);
        User* searchUserById(string userId);
        bool issueBook(string userId, string isbn);
        bool returnBook(string userId, string isbn);
        void displayAllBooks();
        void displayAllUsers();
        ~Library();
};