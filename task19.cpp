#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

struct Rectangle {
    Point bottomLeft;
    Point topRight;
};

int main() {
    Rectangle rect;

    cout << "Bottom-left - x: ";
    cin >> rect.bottomLeft.x;
    cout << "Bottom-left - y: ";
    cin >> rect.bottomLeft.y;

    cout << "Top-right - x: ";
    cin >> rect.topRight.x;
    cout << "Top-right - y: ";
    cin >> rect.topRight.y;

    double width = abs(rect.topRight.x - rect.bottomLeft.x);
    double height = abs(rect.topRight.y - rect.bottomLeft.y);
    double area = width * height;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "\nArea: " << area << endl;

    return 0;
}
