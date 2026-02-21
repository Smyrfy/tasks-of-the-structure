#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time t1, t2;

    cout << "Time 1 - hours: ";
    cin >> t1.hours;
    cout << "Time 1 - minutes: ";
    cin >> t1.minutes;
    cout << "Time 1 - seconds: ";
    cin >> t1.seconds;

    cout << "Time 2 - hours: ";
    cin >> t2.hours;
    cout << "Time 2 - minutes: ";
    cin >> t2.minutes;
    cout << "Time 2 - seconds: ";
    cin >> t2.seconds;

    int total1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int total2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    int difference = total2 - total1;

    cout << "Difference: " << difference << " seconds";

    return 0;
}
