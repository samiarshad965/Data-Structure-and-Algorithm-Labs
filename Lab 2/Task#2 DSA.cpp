#include <iostream>
using namespace std;
int main()
{
    int arr[50] = {10,20,30,40,50,60};
    int n = 6;
    int value;

    cout<<"Enter value to search: ";
    cin>>value;
    
    // Searching:
    for(int i=0; i<n; i++)
    {
        if(arr[i] == value)
        {
            cout<<"Value is available"<<endl;
            return 0;
        }
    }
    cout<<"Data not found"<<endl;
    return 0;
}
