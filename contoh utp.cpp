#include <iostream>
#include <cstring>

using namespace std;

// membuat struktur dengan nama Book
struct Book {
    char title[50];
    char author[50];
    int year;
};

// membuat fungsi untuk menampilkan informasi buku
void displayBookInfo(const Book& book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Year: " << book.year << endl;
}

int main() {
    // membuat objek dari struktur Book
    Book book1, book2;

    // mengisi informasi buku
    strcpy(book1.title, "The Catcher in the Rye");
    strcpy(book1.author, "J.D. Salinger");
    book1.year = 1951;

    strcpy(book2.title, "To Kill a Mockingbird");
    strcpy(book2.author, "Harper Lee");
    book2.year = 1960;

    // menampilkan informasi buku
    displayBookInfo(book1);
    displayBookInfo(book2);

    return 0;
}

