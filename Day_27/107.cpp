#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    Employee e[100];
    int n=0, choice;

    do
    {
        cout << "\n1. Add Employee Salary";
        cout << "\n2. Display Salaries";
        cout << "\n3. Search Salary";
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

                cout << "Enter Salary: ";
                cin >> e[n].salary;

                n++;
                cout << "Record Added Successfully!\n";
                break;

            case 2:
                cout << "\nSalary Records\n";
                for(int i=0;i<n;i++)
                {
                    cout << "ID: " << e[i].id
                         << " Name: " << e[i].name
                         << " Salary: " << e[i].salary << endl;
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
                             << " Salary: " << e[i].salary << endl;
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