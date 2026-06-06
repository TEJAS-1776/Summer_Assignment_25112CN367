#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter starting number :- ";
    cin >> start;

    cout << "Enter ending number :- ";
    cin >> end;

    for (int n = start; n <= end; n++)
    {
        int isPrime = 1;

        if (n <= 1)
        {
            isPrime = 0;
        }

        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            cout << n << " ";
        }
    }

    return 0;
}