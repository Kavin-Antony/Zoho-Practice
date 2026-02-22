#pragma once
#include <string>

using namespace std;

class Book
{
    private:
        string title;
        string author;
        string isbn;
        bool isAvailable;
    public:
         Book(std::string title, std::string author, std::string isbn);

        void displayDetails() const;
        void borrowBook();
        void returnBook();
        string getISBN() const;
        bool isBookAvailable() const;
        string getTitle() const;
};