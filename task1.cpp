
#include <iostream>
using namespace std;

struct Book {
    char title[100];
    char author[100];
    int year;
};

int main() {
    Book b;

    cout << "Enter title: ";
    cin >> b.title;

    cout << "Enter author: ";
    cin >> b.author;

    cout << "Enter year: ";
    cin >> b.year;

    cout << "\"" << b.title << "\" by "
         << b.author << " ("
         << b.year << ")";

    return 0;

}
