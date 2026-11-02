#include <iostream>
using namespace std;

int main() {
    int number = 20112545;
    int rate5 = 70;
    int rate19 = 180;

    cout << "Student Name: Abdul Rehman" << endl;
    cout << "Student ID  : cs20112545" << endl;
    cout << endl;
    cout << "===== COMMUNITY WATER REFILL DEPOT - DAILY REPORT =====" << endl;
    cout << endl;
    cout << "Order\tQuantity\tPackage Type\t\tOriginal(Rs.)\tDiscount\tFinal(Rs.)" << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;

    int totalQty = 0;
    int totalOriginal = 0;
    int totalDiscount = 0;
    int totalFinal = 0;
    int last = number % 100000;
    int divisor = 10000;

    for (int order = 1; order <= 5; order++) {
        int digit = last / divisor;
        last = last % divisor;
        divisor = divisor / 10;

        int qty = digit * 10;
        int original;

        cout << order << "\t" << qty << "\t\t";

        if (order <= 3) {
            original = qty * rate5;
            cout << "5-Litre Container\t";
        } else {
            original = qty * rate19;
            cout << "19-Litre Container\t";
        }

        int discount = 0;
        if (qty >= 50) {
            discount = original / 10;
        }

        int finalCharge = original - discount;

        cout << original << "\t\t" << discount << "\t\t" << finalCharge << endl;

        totalQty = totalQty + qty;
        totalOriginal = totalOriginal + original;
        totalDiscount = totalDiscount + discount;
        totalFinal = totalFinal + finalCharge;
    }

    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "===== DAILY SUMMARY =====" << endl;
    cout << "Total Containers Supplied : " << totalQty << endl;
    cout << "Total Original Charges    : Rs. " << totalOriginal << endl;
    cout << "Total Discount            : Rs. " << totalDiscount << endl;
    cout << "Final Amount Collected    : Rs. " << totalFinal << endl;

    if (totalFinal < 15000) {
        cout << "Sales Status              : LOW SALES" << endl;
    } else if (totalFinal < 30000) {
        cout << "Sales Status              : NORMAL SALES" << endl;
    } else {
        cout << "Sales Status              : HIGH SALES" << endl;
    }

    return 0;
}