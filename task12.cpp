#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int grade;
};

int main() {
    Student students[3];
    int bestIndex = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << " - name: ";
        cin >> students[i].name;
        cout << "Student " << i + 1 << " - grade: ";
        cin >> students[i].grade;

        if (students[i].grade > students[bestIndex].grade) {
            bestIndex = i;
        }
    }

    cout << "\nBest student: "
         << students[bestIndex].name
         << " (" << students[bestIndex].grade << ")\n";

    return 0;
}
