#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
public:
    Book(string, string, string, int);
    Book(); // Default constructor

    // Setters
    void setBookTitle(const string&);
    void setAuthor(const string&);
    void setBookIsbn(const string&);
    void setBookPublicationYear(const int&);

    // Getters
    string getBookTitle() const;
    string getAuthor() const;
    string getBookIsbn() const;
    int getBookPublicationYear() const;

    // Display function
    void displayInformation() const;

private:
    string bookTitle;
    string author;
    string isbn;
    int publicationYear;
};


#endif // BOOK_H 