#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter required sum: ";
    cin >> sum;

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "Pair found: " << arr[i] << " " << arr[j] << endl;
                found = true;
            }
        }
    }

    if (!found)
        cout << "No pair found";

    return 0;
}