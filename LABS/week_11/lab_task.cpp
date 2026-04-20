#include <iostream>
#include <vector>

using namespace std;

// Question 1: Composition
// Create a Book class that has title, author, and a Date object for the publication date. Implement a method to display the book details.

class Date {
public:
    int day;
    int month;
    int year;
public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
};

class Book {
private:
    string title;
    string author;
    Date publicationDate;
public:
    Book(string t, string a, Date d) : title(t), author(a), publicationDate(d) {}
    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Date: " << publicationDate.day << "/" 
             << publicationDate.month << "/" 
             << publicationDate.year << endl;
    }
};
// Question 2: Aggregation
// Create a Library class that can hold multiple Book objects. Implement methods to add books and display all books in the library.

class Library {
private:
    vector<Book> books;
public:
    void addBook(const Book& book) {
        books.push_back(book);
    }
    void displayBooks() {
        for ( auto& book : books) {
            book.displayDetails();
            cout << "-----------------" << endl;
        }
    }
};

int main() {
    // Create some books
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", Date(10, 4, 1925));
    Book book2("To Kill a Mockingbird", "Harper Lee", Date(11, 7, 1960));

    // Create a library and add books to it
    Library library;
    library.addBook(book1);
    library.addBook(book2);

    // Display all books in the library
    cout << "Books in the Library:" << endl;
    library.displayBooks();

    return 0;
}
