#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double meters, feet, inches, total;

    cout << "Choose system (0 = metric, 1 = imperial): ";
    cin >> choice;

    if (choice == 0) {
        cout << "Enter meters: ";
        cin >> meters;

        if (meters < 0) {
            cout << "Invalid input";
        }
        else {
            total = meters * 3.28084;
            feet = floor(total);
            inches = (total - feet) * 12;

            cout << feet << "'" << inches << '"';
        }
    }
    else if (choice == 1) {
        cout << "Enter feet and inches: ";
        cin >> feet >> inches;

        if (feet < 0 || inches < 0 || inches >= 12) {
            cout << "Invalid input";
        }
        else {
            meters = (feet * 12 + inches) * 0.0254;
            cout << meters << "m";
        }
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}