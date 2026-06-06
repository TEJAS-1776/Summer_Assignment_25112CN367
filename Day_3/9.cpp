#include <iostream>
using namespace std;
int main()
{

    int n, isPrime = 0;

    cout << "Enter Number :- ";
    cin >> n;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 1;
        }
    }
    if (n == 1)
    {
        cout << "Number is Neither Prime nor Composite" << endl;
    }
    else if (isPrime == 0)
    {
        cout << "Number is Prime" << endl;
    }

    else
    {
        cout << "Number is Not Prime" << endl;
    }
    return 0;
}