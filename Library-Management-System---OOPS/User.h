#pragma once
#include <string>
#include "Book.h"
#include <vector>

using namespace std;

class User{
    protected:
        string name;
        string userId;
        vector<Book*> borrowedBooks;
    
    public:
        User(string name, string userId);

        virtual void displayUserInfo() const = 0;
        virtual bool borrowBook(Book& book) = 0;
        virtual bool returnBook(Book& book) = 0;
        string getUserId();
        virtual ~User();
};