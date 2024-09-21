#include"Book.h"
#include<string>


using namespace std;

class Library {
public:
	Library();

	void addBook(const Book& Book);
	void removeBook(const string& isbn);
	Book findBook(const string& isbn);//Not passing pointers doesn't allow to 
	                                   //indicate "Not Found" state
	void displayAllBook()const;

private:
	Book books[20]; 
	int count;
};
