#include <iostream>
#include <iomanip>
#include <string>
#include "Book.h"

using namespace std;

Book::Book(string aBookTitle, string aAuthor, string aBookIsbn, int aBookPublicationYear) {
    setBookTitle(aBookTitle);
    setAuthor(aAuthor);
    setBookIsbn(aBookIsbn);
    setBookPublicationYear(aBookPublicationYear);
}

// Default constructor implementation
Book::Book()
    : bookTitle(""), author(""), isbn(""), publicationYear(0) {
}

// Setters
void Book::setBookTitle(const string& aBookTitle) {
    bookTitle = aBookTitle;
}

void Book::setAuthor(const string& aAuthor) {
    author = aAuthor;
}

void Book::setBookIsbn(const string& aBookIsbn) {
    isbn = aBookIsbn;
}

void Book::setBookPublicationYear(const int& aBookPublicationYear) {
    
        publicationYear = aBookPublicationYear;
}

// Getters
string Book::getBookTitle() const {
    return bookTitle;
}

string Book::getAuthor() const {
    return author;
}

string Book::getBookIsbn() const {
    return isbn;
}

int Book::getBookPublicationYear() const {
    return publicationYear;
}

// Display function
void Book::displayInformation() const {
    cout << "Book name: " << getBookTitle() << endl;
    cout << "Book Author: " << getAuthor() << endl;
    cout << "Book ISBN: " << getBookIsbn() << endl;
    cout << "Book publication year: " << getBookPublicationYear() << endl;
    cout << endl;
}
