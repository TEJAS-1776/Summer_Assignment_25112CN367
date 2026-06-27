#include <iostream>
using namespace std;

int main() {
    float balance = 0, amount;
    int choice;

    do {
        cout << "\n--- Bank Account System ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cin >> choice;

        switch(choice) {
        case 1:
            cout << "Enter Amount: ";
            cin >> amount;
            balance += amount;
            break;

        case 2:
            cout << "Enter Amount: ";
            cin >> amount;
            if(amount <= balance)
                balance -= amount;
            else
                cout << "Insufficient Balance\n";
            break;

        case 3:
            cout << "Balance = " << balance << endl;
            break;
        }

    } while(choice != 4);

    return 0;
}