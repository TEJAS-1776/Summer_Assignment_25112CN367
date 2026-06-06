#include <iostream>
using namespace std;
int main (){

 int n , product=1 ;

 cout<<"Enter Number :- ";
 cin>>n;

 int x= n;

while(n!=0) {
    int digit = n%10;
    product *=digit ;
    n = n/10;
}

cout<<"Product of the digits of the number "<<x<<" is :- "<<product<<endl;

    return 0; 

}