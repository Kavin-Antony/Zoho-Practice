#pragma once
#include "User.h"
#include <vector>
#include <string>
#include "Book.h"

class Student : public User{
    private:
        const int maxBooks = 3;

    public:
        Student(string name, string userId);

        void displayUserInfo() const override;
        bool borrowBook(Book& book) override;
        bool returnBook(Book& book) override;
};