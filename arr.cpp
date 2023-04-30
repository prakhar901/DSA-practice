#include<iostream>
using namespace std;

void printarray(int arr[],int size){
	cout<<"printing th array";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"priniting done"<<endl;
}

int main()
{
int num[15];

int sec[5]={1,2,3,4,5};

int third[3]={1,4,5};
int n=10;
printarray(third,3)
int fourth[10]={0};
n=10;
printarray(fourth,10);
}