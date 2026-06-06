#include <iostream>
using namespace std;
int main (){

 int n ,reverse=0  ;

 cout<<"Enter Number :- ";
 cin>>n;

 int x= n;

while(n!=0) {
    int digit = n%10;
    reverse= (10*reverse) + digit ;
    n = n/10;
}

// cout<<"Reverse of the digits of the number "<<x<<" is :- "<<reverse<<endl;
 // For palindrome

 if(x==reverse){
     cout<<"Its a Palindrome Number";
 }
else{
    cout<<"Number is not Palindrome";
}


    return 0; 

}