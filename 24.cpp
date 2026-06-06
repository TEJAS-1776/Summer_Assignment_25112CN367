#include <iostream>
using namespace std;

int main()
{
    int x, n;

    cout << "Enter Base :- ";
    cin >> x;

    cout << "Enter Power :- ";
    cin >> n;

    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result = result * x;
    }

    cout << "Answer :- " << result;

    return 0;
}