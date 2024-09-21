#include "Library.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    Library library;
    int choice;

    cout << setw(70) << "Welcome to the Library Management System :)" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Choose the service you'd like to use from the options below:" << endl;

    do {
        // Displaying a nicely formatted menu
        cout << "\nMenu:\n"
            << "1. Add Book\n"
            << "2. Remove Book\n"
            << "3. Find Book\n"
            << "4. Display All Books\n"
            << "5. Exit\n";
        cout << "-----------------------------------------------------------" << endl;
        cout << "Enter your choice (1-5): ";

        // Input validation for the choice
        while (!(cin >> choice) || choice < 1 || choice > 5) {
            cin.clear(); // Clear the error flag
            cin.ignore(1000, '\n'); // Ignore invalid input
            cout << "Invalid input. Please enter a number between 1 and 5: ";
        }
        cin.ignore(1000, '\n'); // Ignore any extra characters after valid input

        switch (choice) {
        case 1: {
            // Adding a book
            string title, author, isbn;
            int year;
            cout << "\nYou chose to add a new book." << endl;
            cout << "Please provide the following details:" << endl;

            cout << "Enter Book Title: ";
            getline(cin, title);

            cout << "Enter Author: ";
            getline(cin, author);

            cout << "Enter ISBN (International Standard Book Number): ";
            getline(cin, isbn);

            // Input validation for publication year
            cout << "Enter Publication Year (between 1000 and 9999): ";
            while (!(cin >> year) || year < 1000 || year > 9999) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid year. Please enter a valid publication year (1000-9999): ";
            }

            library.addBook(Book(title, author, isbn, year));
            cout << "\nBook successfully added to the library!" << endl;
            break;
        }
        case 2: {
            // Removing a book by ISBN
            string isbn;
            cout << "\nYou chose to remove a book." << endl;
            cout << "Enter ISBN of the book to remove: ";
            getline(cin, isbn);
            library.removeBook(isbn);
            break;
        }
        case 3: {
            // Finding a book by ISBN
            string isbn;
            cout << "\nYou chose to find a book." << endl;
            cout << "Enter ISBN of the book you want to find: ";
            getline(cin, isbn);
            Book foundBook = library.findBook(isbn);

            // Check if the book is found or not
            if (foundBook.getBookIsbn() != "") {
                cout << "\nBook found!" << endl;
                foundBook.displayInformation();
            }
            else {
                cout << "\nSorry, no book with ISBN " << isbn << " exists in the library." << endl;
            }
            break;
        }
        case 4:
            // Displaying all books in the library
            cout << "\nYou chose to display all books in the library." << endl;
            library.displayAllBook();
            cout << "-----------------------------------------------------------" << endl;
            break;
        case 5:
            // Exiting the program
            cout << "\nThank you for using the Library Management System. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5); // Loop until the user chooses to exit

    return 0;
}


/*


Thanks for watching till Last :)


*/