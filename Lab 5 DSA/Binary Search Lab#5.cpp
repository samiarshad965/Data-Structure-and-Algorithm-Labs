#include <iostream>
using namespace std;
int main() {
    int arr[50] = {10, 20, 30, 50, 70, 90, 100};
    int n = 7;
    int value;
    int start = 0; // Starting index
    int end = 6;
    int mid;       

    cout << "Enter value to search: ";
    cin >> value;

    // Binary Search starts
    while (start <= end) 
	{
        mid = (start + end) / 2;

        if (arr[mid] == value) {
            cout << "Value is Available" << endl;
            cout << "At Index = " << mid;
            return 0;
        }
        if (arr[mid] < value) {
            start = mid + 1;
        }
        
        else {
            end = mid - 1;
        }
    }

    // If value is not found
    cout << "Data not found";
    return 0;
}
