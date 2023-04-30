#include<iostream>
using namespace std;
void updatearr(int n,int arr[]){
    cout<<"inside the main";
    arr[0]=4;
for (int i = 0; i < 4; i++)
{
	cout<<arr[i]<<" ";
}
cout<<"going back to main"<<endl;
}
int main(){
int arr[4]={1,2,3,4};
updatearr(4,arr);
cout<<"printing the araay"
for (int i = 0; i < 4; i++)
{
	cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}