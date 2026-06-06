#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number :- ";
    cin >> n;

    int largestPrimeFactor = 1;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            int isPrime = 1;

            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime == 1)
            {
                largestPrimeFactor = i;
            }
        }
    }

    cout << "Largest Prime Factor :- " << largestPrimeFactor;

    return 0;
}