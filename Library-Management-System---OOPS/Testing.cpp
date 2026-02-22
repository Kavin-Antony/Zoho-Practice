#include <iostream>
#include "Library.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main() {
    Library lib;

    // Test: Add Books
    cout << "\n--- Adding Books ---\n";
    lib.addBook("The Alchemist", "Paulo Coelho", "ISBN001");
    lib.addBook("1984", "George Orwell", "ISBN002");
    lib.addBook("To Kill a Mockingbird", "Harper Lee", "ISBN003");

    // Negative Test: Duplicate ISBN
    lib.addBook("Duplicate Book", "Some Author", "ISBN002");

    // Test: Add Users
    cout << "\n--- Adding Users ---\n";
    lib.addUser("Alice", "S001", "Student");
    lib.addUser("Bob", "T001", "Teacher");

    // Negative Test: Invalid user type and duplicate ID
    lib.addUser("Charlie", "S001", "student"); // duplicate ID
    lib.addUser("David", "S002", "Librarian"); // invalid type

    // Display Books & Users
    cout << "\n--- Display All Books ---\n";
    lib.displayAllBooks();

    cout << "\n--- Display All Users ---\n";
    lib.displayAllUsers();

    // Issue Books
    cout << "\n--- Issuing Books ---\n";
    lib.issueBook("S001", "ISBN001"); // Student borrows ISBN001
    lib.issueBook("T001", "ISBN002"); // Teacher borrows ISBN002

    // Negative Test: Book already issued
    lib.issueBook("T001", "ISBN001");

    // Negative Test: Invalid ISBN or User
    lib.issueBook("S001", "ISBN999");
    lib.issueBook("X999", "ISBN002");

    // Return Books
    cout << "\n--- Returning Books ---\n";
    lib.returnBook("S001", "ISBN001"); // Student returns ISBN001

    // Negative Test: Return already returned book
    lib.returnBook("S001", "ISBN001");

    // Negative Test: Wrong user trying to return
    lib.returnBook("T001", "ISBN003");

    // Final Display
    cout << "\n--- Final Users ---\n";
    lib.displayAllUsers();

    cout << "\n--- Final Books ---\n";
    lib.displayAllBooks();

    return 0;
}
