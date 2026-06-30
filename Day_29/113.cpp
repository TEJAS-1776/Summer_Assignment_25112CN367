#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    do {
        cout << "\n--- MENU DRIVEN CALCULATOR ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if(choice>=1 && choice<=4) {
            cout << "Enter Two Numbers: ";
            cin >> a >> b;
        }

        switch(choice) {
            case 1:
                cout << "Result = " << a+b;
                break;

            case 2:
                cout << "Result = " << a-b;
                break;

            case 3:
                cout << "Result = " << a*b;
                break;

            case 4:
                if(b!=0)
                    cout << "Result = " << a/b;
                else
                    cout << "Division by Zero Not Allowed";
                break;

            case 5:
                cout << "Program Ended";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice!=5);

    return 0;
}