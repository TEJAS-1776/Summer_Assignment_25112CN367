#include <iostream>
using namespace std;

const int SIZE = 100;

int empId[SIZE];
string empName[SIZE];
string department[SIZE];
float salary[SIZE];

int total = 0;

void addEmployee()
{
    if(total == SIZE)
    {
        cout << "\nDatabase Full!\n";
        return;
    }

    cout << "\nEnter Employee ID : ";
    cin >> empId[total];
    cin.ignore();

    cout << "Enter Employee Name : ";
    getline(cin, empName[total]);

    cout << "Enter Department : ";
    getline(cin, department[total]);

    cout << "Enter Salary : ";
    cin >> salary[total];

    total++;

    cout << "\nEmployee Added Successfully.\n";
}

void displayEmployees()
{
    if(total == 0)
    {
        cout << "\nNo Employee Records Found.\n";
        return;
    }

    cout << "\n========== EMPLOYEE RECORDS ==========\n";

    for(int i = 0; i < total; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID : " << empId[i] << endl;
        cout << "Name        : " << empName[i] << endl;
        cout << "Department  : " << department[i] << endl;
        cout << "Salary      : " << salary[i] << endl;
    }
}

void searchEmployee()
{
    int id;

    cout << "\nEnter Employee ID : ";
    cin >> id;

    for(int i = 0; i < total; i++)
    {
        if(empId[i] == id)
        {
            cout << "\nEmployee Found\n";
            cout << "Employee ID : " << empId[i] << endl;
            cout << "Name        : " << empName[i] << endl;
            cout << "Department  : " << department[i] << endl;
            cout << "Salary      : " << salary[i] << endl;
            return;
        }
    }

    cout << "\nEmployee Not Found.\n";
}

void updateEmployee()
{
    int id;

    cout << "\nEnter Employee ID : ";
    cin >> id;

    for(int i = 0; i < total; i++)
    {
        if(empId[i] == id)
        {
            cin.ignore();

            cout << "Enter New Name : ";
            getline(cin, empName[i]);

            cout << "Enter New Department : ";
            getline(cin, department[i]);

            cout << "Enter New Salary : ";
            cin >> salary[i];

            cout << "\nEmployee Record Updated Successfully.\n";
            return;
        }
    }

    cout << "\nEmployee Not Found.\n";
}

void deleteEmployee()
{
    int id;

    cout << "\nEnter Employee ID : ";
    cin >> id;

    for(int i = 0; i < total; i++)
    {
        if(empId[i] == id)
        {
            for(int j = i; j < total - 1; j++)
            {
                empId[j] = empId[j + 1];
                empName[j] = empName[j + 1];
                department[j] = department[j + 1];
                salary[j] = salary[j + 1];
            }

            total--;

            cout << "\nEmployee Deleted Successfully.\n";
            return;
        }
    }

    cout << "\nEmployee Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n=====================================\n";
        cout << "     EMPLOYEE MANAGEMENT SYSTEM\n";
        cout << "=====================================\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";

        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateEmployee();
                break;

            case 5:
                deleteEmployee();
                break;

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while(choice != 6);

    return 0;
}