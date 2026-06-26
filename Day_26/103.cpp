#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 10000, amount;

    do {
        cout << "\n----- ATM MENU -----\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                balance += amount;
                cout << "Amount Deposited Successfully\n";
                break;

            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;

                if (amount <= balance) {
                    balance -= amount;
                    cout << "Please collect your cash\n";
                } else {
                    cout << "Insufficient Balance\n";
                }
                break;

            case 4:
                cout << "Thank You for Using ATM\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}