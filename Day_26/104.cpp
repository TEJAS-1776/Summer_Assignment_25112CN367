#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << " Simple Quiz \n";

    cout << "\nQ1. How many days are there in a week?\n";
    cout << "1. 5\n2. 7\n3. 10\n";
    cin >> ans;

    if (ans == 2)
        score++;

    cout << "\nQ2. What is 2 + 2?\n";
    cout << "1. 3\n2. 4\n3. 5\n";
    cin >> ans;

    if (ans == 2)
        score++;

    cout << "\nQ3. Which color is the sky on a clear day?\n";
    cout << "1. Blue\n2. Green\n3. Red\n";
    cin >> ans;

    if (ans == 1)
        score++;

    cout << "\nYour Score = " << score << " out of 3";

    return 0;
}