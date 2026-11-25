#include<iostream>
using namespace std;
int main()
{
int arr[50]={10,20,30,50,70,90,100};
//displaying all values
cout<<"All elements are:"<<endl;
for(int i=0; i<=6; i++)
{
	cout<<arr[i]<<endl;
}

//inserting
for(int i=7; i<=3;i--){
arr[i]=arr[i-1];
}
arr[3-1]=80;
cout<<"After insertion:"<<endl;
for(int i=0;i<=6; i++){
	cout<<arr[i]<<endl;
}
return 0;
}
