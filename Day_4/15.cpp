#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int temp = n;
    int digits = 0;

    // Count digits
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;

    while (temp != 0)
    {
        int digit = temp % 10;

        int power = 1;
        for (int i = 1; i <= digits; i++)
        {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}