#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, sum = 0;

    cout << "Enter Size of Array: ";
    cin >> n;

    cout << "Enter Elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    do{
        cout<<"\n--- ARRAY OPERATIONS ---\n";
        cout<<"1. Display Array\n";
        cout<<"2. Find Sum\n";
        cout<<"3. Find Largest Element\n";
        cout<<"4. Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice){

        case 1:
            for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
            break;

        case 2:
            sum=0;
            for(int i=0;i<n;i++)
                sum+=arr[i];
            cout<<"Sum = "<<sum;
            break;

        case 3:
            int max=arr[0];
            for(int i=1;i<n;i++)
                if(arr[i]>max)
                    max=arr[i];
            cout<<"Largest = "<<max;
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