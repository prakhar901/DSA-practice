#include<iostream>
using namespace std;
int sum(int arr[],int n){
int sum=0;
for (int i = 0; i <n; i++)
{
sum=sum+arr[i];	
}
return sum;
}
int main()
{


	int n;
	cout<<"enter the size of array";
	cin>>n;
int arr [n];


cout<<"Enter Array Elements: ";
  for (int i = 0; i < n; i++) 
  {
    cin>>arr[i];
  }
cout<<endl;

cout<<"sum is"<<sum(arr,n);

cout<<endl;

return 0;
}