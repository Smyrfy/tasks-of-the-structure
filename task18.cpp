#include <iostream>
#include <string>

using namespace std;

struct Product {
    string name;
    double price;
};

struct Order {
    Product product;
    int quantity;
};

int main() {
    Product myProduct;
    Order myOrder;

    cout << "Product name: ";
    getline(cin, myProduct.name);

    cout << "Product price: ";
    cin >> myProduct.price;

    cout << "Order quantity: ";
    cin >> myOrder.quantity;

    myOrder.product = myProduct;

    double total = myOrder.product.price * myOrder.quantity;

    cout << "\nOrder total: ";
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << total << " UAH." << endl;

    return 0;
}
