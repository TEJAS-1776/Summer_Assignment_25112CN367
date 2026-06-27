#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
};

int main()
{
    Employee e[100];
    int n=0, choice;

    do
    {
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> e[n].id;

                cout << "Enter Name: ";
                cin >> e[n].name;

                cout << "Enter Department: ";
                cin >> e[n].department;

                n++;
                cout << "Employee Added Successfully!\n";
                break;

            case 2:
                cout << "\nEmployee Records\n";
                for(int i=0;i<n;i++)
                {
                    cout << "ID: " << e[i].id
                         << " Name: " << e[i].name
                         << " Department: " << e[i].department << endl;
                }
                break;

            case 3:
            {
                int id, found=0;
                cout << "Enter Employee ID: ";
                cin >> id;

                for(int i=0;i<n;i++)
                {
                    if(e[i].id==id)
                    {
                        cout << "ID: " << e[i].id
                             << " Name: " << e[i].name
                             << " Department: " << e[i].department << endl;
                        found=1;
                    }
                }

                if(found==0)
                    cout << "Employee Not Found\n";

                break;
            }

            case 4:
                cout << "Program Ended";
                break;

            default:
                cout << "Invalid Choice";
        }

    }while(choice!=4);

    return 0;
}