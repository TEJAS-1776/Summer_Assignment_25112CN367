#include <iostream>
using namespace std;

const int SIZE = 100;

int roll[SIZE];
string name[SIZE];
int age[SIZE];
float marks[SIZE];

int total = 0;

void addStudent()
{
    if(total==SIZE)
    {
        cout<<"\nDatabase Full!\n";
        return;
    }

    cout<<"\nEnter Roll No : ";
    cin>>roll[total];

    cin.ignore();

    cout<<"Enter Name : ";
    getline(cin,name[total]);

    cout<<"Enter Age : ";
    cin>>age[total];

    cout<<"Enter Marks : ";
    cin>>marks[total];

    total++;

    cout<<"\nStudent Added Successfully.\n";
}

void displayStudent()
{
    if(total==0)
    {
        cout<<"\nNo Records Found.\n";
        return;
    }

    cout<<"\n-------------------------------\n";

    for(int i=0;i<total;i++)
    {
        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Roll No : "<<roll[i]<<endl;
        cout<<"Name    : "<<name[i]<<endl;
        cout<<"Age     : "<<age[i]<<endl;
        cout<<"Marks   : "<<marks[i]<<endl;
    }

    cout<<"\n-------------------------------\n";
}

void searchStudent()
{
    int r;
    cout<<"\nEnter Roll Number : ";
    cin>>r;

    for(int i=0;i<total;i++)
    {
        if(roll[i]==r)
        {
            cout<<"\nStudent Found\n";
            cout<<"Roll : "<<roll[i]<<endl;
            cout<<"Name : "<<name[i]<<endl;
            cout<<"Age : "<<age[i]<<endl;
            cout<<"Marks : "<<marks[i]<<endl;
            return;
        }
    }

    cout<<"\nStudent Not Found.\n";
}

void updateStudent()
{
    int r;

    cout<<"\nEnter Roll Number : ";
    cin>>r;

    for(int i=0;i<total;i++)
    {
        if(roll[i]==r)
        {
            cin.ignore();

            cout<<"Enter New Name : ";
            getline(cin,name[i]);

            cout<<"Enter New Age : ";
            cin>>age[i];

            cout<<"Enter New Marks : ";
            cin>>marks[i];

            cout<<"\nRecord Updated.\n";
            return;
        }
    }

    cout<<"\nStudent Not Found.\n";
}

void deleteStudent()
{
    int r;

    cout<<"\nEnter Roll Number : ";
    cin>>r;

    for(int i=0;i<total;i++)
    {
        if(roll[i]==r)
        {
            for(int j=i;j<total-1;j++)
            {
                roll[j]=roll[j+1];
                name[j]=name[j+1];
                age[j]=age[j+1];
                marks[j]=marks[j+1];
            }

            total--;

            cout<<"\nRecord Deleted Successfully.\n";
            return;
        }
    }

    cout<<"\nStudent Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout<<"\n========== STUDENT RECORD SYSTEM ==========\n";
        cout<<"1. Add Student\n";
        cout<<"2. Display Students\n";
        cout<<"3. Search Student\n";
        cout<<"4. Update Student\n";
        cout<<"5. Delete Student\n";
        cout<<"6. Exit\n";

        cout<<"\nEnter Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout<<"\nThank You!\n";
                break;

            default:
                cout<<"\nInvalid Choice.\n";
        }

    }while(choice!=6);

    return 0;
}