#include <iostream>
#include <string>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Time {
    int hours;
    int minutes;
};

struct Event {
    string name;
    Date date;
    Time time;
};

int main() {
    Event myEvent;

    cout << "Event name: ";
    getline(cin, myEvent.name);

    cout << "Date - day: ";
    cin >> myEvent.date.day;
    cout << "Date - month: ";
    cin >> myEvent.date.month;
    cout << "Date - year: ";
    cin >> myEvent.date.year;

    cout << "Time - hours: ";
    cin >> myEvent.time.hours;
    cout << "Time - minutes: ";
    cin >> myEvent.time.minutes;

    cout << "\nEvent: " << myEvent.name << endl;
    cout << "When: ";
    
    if (myEvent.date.day < 10) cout << "0";
    cout << myEvent.date.day << ".";
    
    if (myEvent.date.month < 10) cout << "0";
    cout << myEvent.date.month << "." << myEvent.date.year << " at ";
    
    if (myEvent.time.hours < 10) cout << "0";
    cout << myEvent.time.hours << ":";
    
    if (myEvent.time.minutes < 10) cout << "0";
    cout << myEvent.time.minutes << endl;

    return 0;
}
