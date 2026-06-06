#include <iostream>
using namespace std;

int main()
{
    int a, b, lcm;

    cout << "Enter two numbers :- ";
    cin >> a >> b;

    int max = (a > b) ? a : b;

    for (int i = max ; ; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    cout << "LCM = " << lcm;

    return 0;
}