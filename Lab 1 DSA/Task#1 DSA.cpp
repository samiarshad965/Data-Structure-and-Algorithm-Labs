#include <iostream>
using namespace std;
int main() 
{
    int arr[5];
    int sum = 0;
    cout << "Enter 5 numbers: " << endl;

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Numbers Entered: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl << "Sum = " << sum << endl;
    return 0;
}
