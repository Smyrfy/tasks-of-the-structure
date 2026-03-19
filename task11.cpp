#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int grade;
};

int main() {
    Student students[3];

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << " - name: ";
        cin >> students[i].name;
        cout << "Student " << i + 1 << " - grade: ";
        cin >> students[i].grade;
    }

    cout << "\nResults:\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << students[i].name << " - " << students[i].grade << endl;
    }

    return 0;
}
