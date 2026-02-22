#pragma once
#include <string>
#include <vector>
#include "Book.h"
#include "User.h"

using namespace std;

class Teacher : public User{
    private:
        const int maxBooks = 5;
    
    public:
        Teacher(string name, string userId);

        void displayUserInfo() const override;
        bool borrowBook(Book& book) override;
        bool returnBook(Book& book) override;
};