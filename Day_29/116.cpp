#include <iostream>
using namespace std;

struct Item{
    int id;
    string name;
    int quantity;
};

int main(){

    Item item[20];
    int n=0,choice,id;

    do{
        cout<<"\n--- INVENTORY MANAGEMENT SYSTEM ---\n";
        cout<<"1. Add Item\n";
        cout<<"2. Search Item\n";
        cout<<"3. Display Items\n";
        cout<<"4. Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice){

        case 1:
            cout<<"Enter Item ID: ";
            cin>>item[n].id;

            cout<<"Enter Item Name: ";
            cin>>item[n].name;

            cout<<"Enter Quantity: ";
            cin>>item[n].quantity;

            n++;
            break;

        case 2:
            cout<<"Enter Item ID: ";
            cin>>id;

            for(int i=0;i<n;i++){
                if(item[i].id==id){
                    cout<<"Item Found\n";
                    cout<<"ID: "<<item[i].id<<endl;
                    cout<<"Name: "<<item[i].name<<endl;
                    cout<<"Quantity: "<<item[i].quantity<<endl;
                }
            }
            break;

        case 3:
            cout<<"\nInventory List\n";
            for(int i=0;i<n;i++){
                cout<<item[i].id<<" "
                    <<item[i].name<<" "
                    <<item[i].quantity<<endl;
            }
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