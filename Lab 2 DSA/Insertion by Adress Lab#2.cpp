#include <iostream>
using namespace std;

int main() {
    int arr[50] = {10, 20, 30, 50, 70};
    int n = 5;
    int address, value;

    // Take address (index) and value from user
    cout << "Enter address to insert: ";
    cin >> address;
    cout << "Enter value to insert: ";
    cin >> value;

    for (int i = n; i > address; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert value at address
    arr[address] = value;
    n++;

    cout << "New Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
