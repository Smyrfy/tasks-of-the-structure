#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    Date birth;
};

int main() {
    Student s;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter day: ";
    cin >> s.birth.day;

    cout << "Enter month: ";
    cin >> s.birth.month;

    cout << "Enter year: ";
    cin >> s.birth.year;

    cout << "\n" << s.name << " was born on ";
    cout << s.birth.day << ".";
    
    if (s.birth.month < 10) cout << "0";
    cout << s.birth.month << ".";
    
    cout << s.birth.year << endl;

    return 0;
}
