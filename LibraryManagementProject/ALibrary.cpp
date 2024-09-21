#include"Book.h"
#include"Library.h"
#include<string>
#include<iostream>

using namespace std;

Library::Library():count(0){}

void Library::addBook(const Book& book) {
    if (count == 20) { 
        cout << "Library is full. Need more memory space." << endl;
    }
    else 
    {
        books[count] = book;
        count++;
    }
}

void Library::removeBook(const string& isbn) {
    int index = -1;
    for (int i = 0; i < count; i++) {
        if (isbn == books[i].getBookIsbn()) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        for (int j = index; j < count - 1; j++) {
            books[j] = books[j + 1];
        }
        count--;
        cout << "Book removed successfully." << endl;
    }
    else {
        cout << "ISBN not found. Sorry :(" << endl;
    }
}


Book Library::findBook(const string& isbn) {
   

    for (int i = 0; i < count; i++) {
        if (isbn == books[i].getBookIsbn()) {
            cout << "Book Found." << endl;
            return books[i]; // Return the found book
        }
    }

    // If no book is found, return a default Book object
    cout << "Book is not found :(" << endl;
    return Book(); // Return a default-constructed Book object
}

void Library::displayAllBook()const
{
    if (count == 0)
        cout << "There is no book in our record. Sorry. " << endl;
    else {
        for (int i = 0; i < count ; i++)
        {
            books[i].displayInformation();

            //if one function is const then if you are callin another member function inside that function 
            //then that function also has to be const in order to make sure that function doesn't modify the
            //object's state
        }
    }
}