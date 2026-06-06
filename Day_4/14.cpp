#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n :- ";
    cin >> n;

    int a = 0, b = 1;
     if (n == 0)
    {
        cout << "nth Fibonacci term is :- " << a;
    }
    else if (n == 1)
    {
        cout << "nth Fibonacci term is :- " << b;
    }
    else
    {
        int c;

        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }

        cout << "nth Fibonacci term is :- " << b;
    }

    return 0;
}