#include <iostream>
using namespace std;

int main() {
    double gross, rate, net, tax;

    cin >> gross >> rate;

    if (gross <= 0 || rate <= 0 || rate >= 100) {
        cout << "Invalid input";
    }
    else {
        net = gross / (1 + rate / 100);
        tax = gross - net;

        cout << "Net price: " << net << endl;
        cout << "Tax value: " << tax << endl;
    }

    return 0;
}