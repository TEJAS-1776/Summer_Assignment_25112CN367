#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char str1[100], str2[100];
    int choice;

    cout<<"Enter String: ";
    cin>>str1;

    do{
        cout<<"\n--- STRING OPERATIONS ---\n";
        cout<<"1. Find Length\n";
        cout<<"2. Reverse String\n";
        cout<<"3. Copy String\n";
        cout<<"4. Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice){

        case 1:
            cout<<"Length = "<<strlen(str1);
            break;

        case 2:
            strrev(str1);
            cout<<"Reverse = "<<str1;
            break;

        case 3:
            strcpy(str2,str1);
            cout<<"Copied String = "<<str2;
            break;

        case 4:
            cout<<"Program Ended";
            break;

        default:
            cout<<"Invalid Choice";
        }

    }while(choice!=4);

    return 0;
}