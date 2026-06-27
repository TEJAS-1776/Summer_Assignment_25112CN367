#include <iostream>
using namespace std;

struct Ticket {
    string name;
    int seats;
};

int main() {
    Ticket t;
    int choice;

    do {
        cout << "\n--- Ticket Booking System ---\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. View Ticket\n";
        cout << "4. Exit\n";
        cin >> choice;

        switch(choice) {
        case 1:
            cout << "Enter Name: ";
            cin >> t.name;
            cout << "Enter Seats: ";
            cin >> t.seats;
            break;

        case 2:
            t.name = "";
            t.seats = 0;
            cout << "Ticket Cancelled\n";
            break;

        case 3:
            cout << "Name: " << t.name << endl;
            cout << "Seats: " << t.seats << endl;
            break;
        }

    } while(choice != 4);

    return 0;
}