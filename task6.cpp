#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

double mySqrt(double n) {
    double guess = n;
    for (int i = 0; i < 20; i++) {
        guess = (guess + n / guess) / 2;
    }
    return guess;
}

int main() {
    Point p1, p2;

    cout << "Point 1 - Enter x: ";
    cin >> p1.x;

    cout << "Point 1 - Enter y: ";
    cin >> p1.y;

    cout << "Point 2 - Enter x: ";
    cin >> p2.x;

    cout << "Point 2 - Enter y: ";
    cin >> p2.y;

    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;

    double distance = mySqrt(dx * dx + dy * dy);

    cout << "Distance: " << distance;

    return 0;
}
