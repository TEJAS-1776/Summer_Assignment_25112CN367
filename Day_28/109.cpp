#include <iostream>
using namespace std;

struct Book {
    int id;
    string name;
};

int main() {
    Book b[10];
    int n = 0, choice, id;
    string name;

    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Search Book\n";
        cout << "3. Display Books\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            cout << "Enter Book ID: ";
            cin >> b[n].id;
            cout << "Enter Book Name: ";
            cin >> b[n].name;
            n++;
            break;

        case 2:
            cout << "Enter Book ID: ";
            cin >> id;
            for(int i=0;i<n;i++) {
                if(b[i].id==id)
                    cout<<"Book Found: "<<b[i].name<<endl;
            }
            break;

        case 3:
            for(int i=0;i<n;i++)
                cout<<b[i].id<<" "<<b[i].name<<endl;
            break;
        }

    } while(choice!=4);

    return 0;
}