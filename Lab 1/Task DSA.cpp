#include<iostream>
using namespace std;
int main()
{
    //array
    int num[5] = {10, 20, 30, 40, 50};
    cout << "First element: " << num[0] << endl;

    //Print all elements using for-loop
    cout << "All elements in array: ";
    for(int i = 0; i < 5; i++) 
	{
        cout << num[i] << " ";
    }
    return 0;
}	
