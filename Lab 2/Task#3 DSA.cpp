#include<iostream>
using namespace std;
int main()
{
    int num[5] = {50, 20, 35, 40, 10};
    int n=5;
    int pos=3; // delete element at index 3

    cout << "Before deletion: ";
    for(int i=0; i<n; i++) 
    {
        cout << num[i] << " ";
    }
    cout << endl;

    //Deletion
    for(int i=pos; i<n-1; i++)
    {
        num[i] = num[i+1];
    }
    n = n-1;

    cout << "After deletion: "<<endl;
    for(int i=0; i<n; i++) 
    {
        cout << num[i] << " "<<endl;
    }
    return 0;
}
