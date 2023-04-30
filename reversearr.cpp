#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
  int start=0;
  int end=n-1;i

while(start<=end)
{
  swap(arr[start],arr[end]);
  start++;
  end--;
}
}
void printarray(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}



int main()
{

int arr[6]={1,3,4,6,23,4};

int lrr[5]={3,6,78,23,1};

reverse(arr,6);
reverse(lrr,5);

printarray(arr,6);
printarray(lrr,5);

return 0;
}