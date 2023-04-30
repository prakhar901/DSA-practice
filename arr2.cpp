#include<iostream>
using namespace std;

void printarray(int arr[],int size){
	cout<<"printing the array"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" "<<endl;
	}
	cout<<"priniting done"<<endl;
}

int main()
{

char ch[5]={'b','v','g','r','i'};
cout<<ch[3]<<endl;
cout<<"priniting the array"<<endl;
for(int i=0;i<5;i++){
    cout<<ch[i]<<" ";}
}

