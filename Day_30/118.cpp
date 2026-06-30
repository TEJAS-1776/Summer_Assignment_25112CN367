#include <iostream>
using namespace std;

const int SIZE = 100;

int bookId[SIZE];
string title[SIZE];
string author[SIZE];
bool issued[SIZE];

int total = 0;

void addBook()
{
    if(total==SIZE)
    {
        cout<<"Library Full!\n";
        return;
    }

    cout<<"Enter Book ID : ";
    cin>>bookId[total];
    cin.ignore();

    cout<<"Enter Book Title : ";
    getline(cin,title[total]);

    cout<<"Enter Author Name : ";
    getline(cin,author[total]);

    issued[total]=false;

    total++;

    cout<<"Book Added Successfully.\n";
}

void displayBooks()
{
    if(total==0)
    {
        cout<<"No Books Available.\n";
        return;
    }

    for(int i=0;i<total;i++)
    {
        cout<<"\nBook "<<i+1<<endl;
        cout<<"ID : "<<bookId[i]<<endl;
        cout<<"Title : "<<title[i]<<endl;
        cout<<"Author : "<<author[i]<<endl;
        cout<<"Status : "<<(issued[i] ? "Issued":"Available")<<endl;
    }
}

void searchBook()
{
    int id;
    cout<<"Enter Book ID : ";
    cin>>id;

    for(int i=0;i<total;i++)
    {
        if(bookId[i]==id)
        {
            cout<<"\nBook Found\n";
            cout<<"Title : "<<title[i]<<endl;
            cout<<"Author : "<<author[i]<<endl;
            cout<<"Status : "<<(issued[i] ? "Issued":"Available")<<endl;
            return;
        }
    }

    cout<<"Book Not Found.\n";
}

void issueBook()
{
    int id;
    cout<<"Enter Book ID : ";
    cin>>id;

    for(int i=0;i<total;i++)
    {
        if(bookId[i]==id)
        {
            if(issued[i])
                cout<<"Book Already Issued.\n";
            else
            {
                issued[i]=true;
                cout<<"Book Issued Successfully.\n";
            }
            return;
        }
    }

    cout<<"Book Not Found.\n";
}

void returnBook()
{
    int id;
    cout<<"Enter Book ID : ";
    cin>>id;

    for(int i=0;i<total;i++)
    {
        if(bookId[i]==id)
        {
            if(!issued[i])
                cout<<"Book Already Available.\n";
            else
            {
                issued[i]=false;
                cout<<"Book Returned Successfully.\n";
            }
            return;
        }
    }

    cout<<"Book Not Found.\n";
}

void deleteBook()
{
    int id;
    cout<<"Enter Book ID : ";
    cin>>id;

    for(int i=0;i<total;i++)
    {
        if(bookId[i]==id)
        {
            for(int j=i;j<total-1;j++)
            {
                bookId[j]=bookId[j+1];
                title[j]=title[j+1];
                author[j]=author[j+1];
                issued[j]=issued[j+1];
            }

            total--;
            cout<<"Book Deleted.\n";
            return;
        }
    }

    cout<<"Book Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout<<"\n===== MINI LIBRARY SYSTEM =====\n";
        cout<<"1.Add Book\n2.Display Books\n3.Search Book\n4.Issue Book\n5.Return Book\n6.Delete Book\n7.Exit\n";

        cin>>choice;

        switch(choice)
        {
            case 1:addBook();break;
            case 2:displayBooks();break;
            case 3:searchBook();break;
            case 4:issueBook();break;
            case 5:returnBook();break;
            case 6:deleteBook();break;
            case 7:break;
            default:cout<<"Invalid Choice\n";
        }

    }while(choice!=7);

    return 0;
}