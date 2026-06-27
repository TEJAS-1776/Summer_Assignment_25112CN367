#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    int marks;
};

int main()
{
    Student s[100];
    int n = 0, choice;

    do
    {
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Roll No: ";
                cin >> s[n].roll;

                cout << "Enter Name: ";
                cin >> s[n].name;

                cout << "Enter Marks: ";
                cin >> s[n].marks;

                n++;
                cout << "Student Added Successfully!\n";
                break;

            case 2:
                cout << "\nStudent Records\n";
                for(int i=0;i<n;i++)
                {
                    cout << "Roll: " << s[i].roll
                         << " Name: " << s[i].name
                         << " Marks: " << s[i].marks << endl;
                }
                break;

            case 3:
            {
                int roll, found=0;
                cout << "Enter Roll No: ";
                cin >> roll;

                for(int i=0;i<n;i++)
                {
                    if(s[i].roll==roll)
                    {
                        cout << "Roll: " << s[i].roll
                             << " Name: " << s[i].name
                             << " Marks: " << s[i].marks << endl;
                        found=1;
                    }
                }

                if(found==0)
                    cout << "Student Not Found\n";

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