#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter Starting Number :- ";
    cin >> start;

    cout << "Enter Ending Number :- ";
    cin >> end;

    for (int i = start; i <= end; i++)
    {
        int n = i;
        int sum = 0;

        while (n != 0)
        {
            int digit = n % 10;

            sum = sum + (digit * digit * digit);

            n = n / 10;
        }

        if (sum == i)
        {
            cout << i << " ";
        }
    }

    return 0;
}