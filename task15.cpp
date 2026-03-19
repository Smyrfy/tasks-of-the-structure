#include <iostream>
using namespace std;

struct Product {
    char name[50];
    double price;
};

int main() {
    Product products[3];
    int cheapestIndex = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Product " << i + 1 << " - name: ";
        cin >> products[i].name;
        cout << "Product " << i + 1 << " - price: ";
        cin >> products[i].price;

        if (products[i].price < products[cheapestIndex].price) {
            cheapestIndex = i;
        }
    }

    double price = products[cheapestIndex].price;
    double shownPrice = (int)(price * 100) / 100.0;

    cout << "\nCheapest: "
         << products[cheapestIndex].name
         << " (" << shownPrice << " UAH)" << endl;

    return 0;
}
