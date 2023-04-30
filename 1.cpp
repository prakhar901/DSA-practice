#include<iostream>
using namespace std;
void print(int n){
if (n==0)
	return ;

cout<<n<<" ";
print(n-1);
} 
int main()
{
	int n;
	cout<<"enter value of n"<<endl;
	cin>>n;
	cout<<"priniting in dec order";
	print (n);
	return 0;
}
