#include <iostream>
using namespace std;

int main() {
    int arr[50] = {10, 20, 30, 50, 70};
    int n = 5;
    int address;

    // Take address (index) from user to delete
    cout << "Enter address to delete: ";
    cin >> address;

    for (int i = address; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
    cout << "New Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
