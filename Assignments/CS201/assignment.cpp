
#include <iostream>
using namespace std;

int main() {
    string studentName = "Abdul Rehman";
    string studentID = "BC260415543";

    long number = 260415543;
    int digit2 = (number / 10000000) % 10;
    int digit4 = (number / 100000) % 10;
    int digit5 = (number / 10000) % 10;
    int digit6 = (number / 1000) % 10;
    int digit8 = (number / 10) % 10;

    int network = digit2;
    int computerLab = digit4;
    int lms = digit5;
    int account = digit6;
    int hardware = digit8;

    const int timePerTicket = 20;

    int networkTime = network * timePerTicket;
    int computerLabTime = computerLab * timePerTicket;
    int lmsTime = lms * timePerTicket;
    int accountTime = account * timePerTicket;
    int hardwareTime = hardware * timePerTicket;

    int light = 0;
    int moderate = 0;
    int heavy = 0;

    cout << "Student Name: " << studentName << endl;
    cout << "Student ID  : " << studentID << endl;

    cout << endl;
    cout << "Extracted digits: "
         << digit2 << ", "
         << digit4 << ", "
         << digit5 << ", "
         << digit6 << ", "
         << digit8 << endl;

         cout << endl;
    cout << "----- University IT Helpdesk Workload Report -----" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "Unit\t\t\tTotal Tickets\tResolution Time\t\tStatus" << endl;
    cout << "------------------------------------------------------------------------" << endl;

    cout << "Network Support:\t" << network << "\t\t"
         << networkTime << "\t\t\t";

    if (network >= 7) {
        cout << "HEAVY" << endl;
        heavy++;
    }
    else if (network >= 4) {
        cout << "MODERATE" << endl;
        moderate++;
    }
    else {
        cout << "LIGHT" << endl;
        light++;
    }

    cout << "Computer Lab Support:\t" << computerLab << "\t\t"
         << computerLabTime << "\t\t\t";

    if (computerLab >= 7) {
        cout << "HEAVY" << endl;
        heavy++;
    }
    else if (computerLab >= 4) {
        cout << "MODERATE" << endl;
        moderate++;
    }
    else {
        cout << "LIGHT" << endl;
        light++;
    }

    cout << "LMS Support:\t\t" << lms << "\t\t"
         << lmsTime << "\t\t\t";

    if (lms >= 7) {
        cout << "HEAVY" << endl;
        heavy++;
    }
    else if (lms >= 4) {
        cout << "MODERATE" << endl;
        moderate++;
    }
    else {
        cout << "LIGHT" << endl;
        light++;
    }

    cout << "Account Support:\t" << account << "\t\t"
         << accountTime << "\t\t\t";

    if (account >= 7) {
        cout << "HEAVY" << endl;
        heavy++;
    }
    else if (account >= 4) {
        cout << "MODERATE" << endl;
        moderate++;
    }
    else {
        cout << "LIGHT" << endl;
        light++;
    }

    cout << "Hardware Support:\t" << hardware << "\t\t"
         << hardwareTime << "\t\t\t";

    if (hardware >= 7) {
        cout << "HEAVY" << endl;
        heavy++;
    }
    else if (hardware >= 4) {
        cout << "MODERATE" << endl;
        moderate++;
    }
    else {
        cout << "LIGHT" << endl;
        light++;
    }

    cout << endl;
    cout << "===== SUMMARY =====" << endl;
    cout << "LIGHT desks    : " << light << endl;
    cout << "MODERATE desks : " << moderate << endl;
    cout << "HEAVY desks    : " << heavy << endl;

    return 0;
}
