#include <iostream>
using namespace std;
int main()
{
    int arr[50] = {10,20,30,50,70,90,100};
    int n = 7;
    int value;

    cout<<"Enter value to search: ";
    cin>>value;

    // Searching
    for(int i=0; i<n; i++)
    {
        if(arr[i] == value)
        {
            cout<<"Value is Available"<<endl;
            cout<<"At Index = "<< i << endl;
            return 0;
        }
    }

    cout<<"Data not found"<<endl;
    return 0;
}
