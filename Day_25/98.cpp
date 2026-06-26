#include <iostream>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    cout << "Common characters: ";

    for (int i = 0; i < str1.length(); i++) {
        bool found = false;

        for (int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j]) {
                found = true;
                break;
            }
        }

        if (found)
            cout << str1[i] << " ";
    }

    return 0;
}