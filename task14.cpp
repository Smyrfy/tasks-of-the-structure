#include <iostream>
using namespace std;

struct Product {
    char name[50];
    double price;
    int quantity;
};

int main() {
    Product products[3];
    double total = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Product " << i + 1 << " - name: ";
        cin >> products[i].name;
        cout << "Product " << i + 1 << " - price: ";
        cin >> products[i].price;
        cout << "Product " << i + 1 << " - quantity: ";
        cin >> products[i].quantity;

        total += products[i].price * products[i].quantity;
    }

    cout << "\nTotal warehouse value: ";
    cout << (int)(total * 100) / 100.0 << " UAH" << endl;

    return 0;
}
