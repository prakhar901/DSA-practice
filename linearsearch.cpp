#include<iostream>
using namespace std;

bool search(int arr[],int key,int size){
	for (int i = 0; i < size; i++)
	{
		if(arr[i]==key)
{
return 1;
}
else
 return 0;
	}
}

int main()

{
	int arr[10]={5,2,5,8,1,-1,-3,-8,-4,5};

cout<<"enter the searching element";
cin>>key;

bool found=search(arr,key,10)

if (found)
{
	cout<<"key present";
}
else{
	cout<<"key not present";
}

	return 0;
}