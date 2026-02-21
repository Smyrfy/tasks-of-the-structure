#include <iostream>
using namespace std;

struct Product {
    char name[50];
    double price;
};

int main() {
    Product p1, p2;

    cout << "Product 1 - name: ";
    cin >> p1.name;
    cout << "Product 1 - price: ";
    cin >> p1.price;

    cout << "Product 2 - name: ";
    cin >> p2.name;
    cout << "Product 2 - price: ";
    cin >> p2.price;

    if (p1.price > p2.price) {
        cout << p1.name << " is more expensive";
    } 
    else if (p2.price > p1.price) {
        cout << p2.name << " is more expensive";
    } 
    else {
        cout << "Both products have the same price";
    }

    return 0;
}
