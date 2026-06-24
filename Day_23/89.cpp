#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        int count = 0;

        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j])
                count++;
        }

        if (count == 1) {
            cout << "First Non-Repeating Character = " << str[i];
            return 0;
        }
    }

    cout << "No Non-Repeating Character Found";

    return 0;
}