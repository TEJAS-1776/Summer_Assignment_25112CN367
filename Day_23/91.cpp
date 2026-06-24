#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    int count1[256] = {0};
    int count2[256] = {0};

    int i = 0;

    while (str1[i] != '\0') {
        count1[(int)str1[i]]++;
        i++;
    }

    i = 0;

    while (str2[i] != '\0') {
        count2[(int)str2[i]]++;
        i++;
    }

    bool anagram = true;

    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "Strings are Anagrams";
    else
        cout << "Strings are Not Anagrams";

    return 0;
}