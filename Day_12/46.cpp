#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int temp = n, sum = 0;

    while(temp != 0)
    {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int n;
    cin >> n;

    if(isArmstrong(n))
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}