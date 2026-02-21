#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

//функція обчислення квадратного кореня
double mySqrt(double n) {
    double guess = n;
    for (int i = 0; i < 20; i++) {
        guess = (guess + n / guess) / 2;
    }
    return guess;
}

int main() {
    Point p;

    cout << "Enter x: ";
    cin >> p.x;

    cout << "Enter y: ";
    cin >> p.y;

    double d = mySqrt(p.x * p.x + p.y * p.y);

    cout << "Distance from origin: " << d;

    return 0;
}
