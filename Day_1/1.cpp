#include <iostream>
using namespace std;
int main (){

int n , sum = 0;
cout<<"Enter the no.  ";
cin>>n;

for(int i=1; i<=n; i++){
    sum +=i;
}

cout<<"The sum of first " << n << " terms is "<<sum;

return 0; 

}