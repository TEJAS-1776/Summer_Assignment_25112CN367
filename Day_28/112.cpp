#include <iostream>
using namespace std;

struct Contact {
    string name;
    long long phone;
};

int main() {
    Contact c[10];
    int n = 0, choice;
    string search;

    do {
        cout << "\n--- Contact Management System ---\n";
        cout << "1. Add Contact\n";
        cout << "2. Search Contact\n";
        cout << "3. Display Contacts\n";
        cout << "4. Exit\n";
        cin >> choice;

        switch(choice) {
        case 1:
            cout << "Enter Name: ";
            cin >> c[n].name;
            cout << "Enter Phone: ";
            cin >> c[n].phone;
            n++;
            break;

        case 2:
            cout << "Enter Name: ";
            cin >> search;
            for(int i=0;i<n;i++) {
                if(c[i].name==search)
                    cout<<c[i].name<<" "<<c[i].phone<<endl;
            }
            break;

        case 3:
            for(int i=0;i<n;i++)
                cout<<c[i].name<<" "<<c[i].phone<<endl;
            break;
        }

    } while(choice != 4);

    return 0;
}