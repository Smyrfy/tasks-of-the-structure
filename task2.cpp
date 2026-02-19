#include <iostream>
using namespace std;

struct Product {
    char name[50];
    double price;
    int amount;  
};

int main() {
    Product p;

    cout << "Enter name: ";
    cin >> p.name;

    cout << "Enter price: ";
    cin >> p.price;

    cout << "Enter quantity: ";
    cin >> p.amount;

    cout << "Total: " << p.price * p.amount << " UAH";

    return 0;
}  
