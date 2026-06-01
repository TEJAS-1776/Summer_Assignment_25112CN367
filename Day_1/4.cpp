#include <iostream>
using namespace std;
int main (){

 int n , sum=0 ;

 cout<<"Enter Number :- ";
 cin>>n;

 int x= n;

while(n!=0) {
    int digit = n%10;
    sum +=digit;
    n = n/10;
}

cout<<"Sum of the digits of the number "<<x<<" is :- "<<sum<<endl;

    return 0; 

}