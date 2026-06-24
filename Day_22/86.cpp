#include <iostream>
using namespace std;

int main() {
    char str[100];
    
    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    int words = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            words++;
    }

    cout << "Number of words = " << words;

    return 0;
}