#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

struct Segment {
    Point start;
    Point end;
};

int main() {
    Segment s;

    cout << "Start point - x: ";
    cin >> s.start.x;
    cout << "Start point - y: ";
    cin >> s.start.y;

    cout << "End point - x: ";
    cin >> s.end.x;
    cout << "End point - y: ";
    cin >> s.end.y;

    double dx = s.end.x - s.start.x;
    double dy = s.end.y - s.start.y;
    double length = sqrt(dx * dx + dy * dy);

    double shown = (int)(length * 100 + 0.5) / 100.0;

    cout << "\nSegment length: " << shown << endl;

    return 0;
}
