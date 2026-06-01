#include <iostream>
using namespace std;
int main (){ 

int n , product=1 ;
cout<<"Enter Number :- ";
cin>>n;

for(int i=1; i<=n ;i++){
   product*=i;
}

cout<<"Factorial of "<<n<<" is :- "<<product<<endl;

// int can't store large values so this can't calculate factorials of large values

    return 0; 
}