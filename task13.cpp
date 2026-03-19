#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int grade;
};

int main() {
    Student students[3];
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << " - name: ";
        cin >> students[i].name;
        cout << "Student " << i + 1 << " - grade: ";
        cin >> students[i].grade;

        sum += students[i].grade;
    }

    double average = sum / 3.0;

    cout << "\nAverage grade: ";
    cout << average << endl;

    return 0;
}
