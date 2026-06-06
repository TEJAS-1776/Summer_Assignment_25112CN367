#include <iostream>
using namespace std;

int main()
{
    int binary;

    cout << "Enter Binary Number :- ";
    cin >> binary;

    int decimal = 0;
    int place = 1;

    while (binary > 0)
    {
        int digit = binary % 10;

        decimal = decimal + (digit * place);

        place = place * 2;

        binary = binary / 10;
    }

    cout << "Decimal Number :- " << decimal;

    return 0;
}