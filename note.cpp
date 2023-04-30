#include<iostream>
using namespace std;
int main(){
	int amount;
  cin>>amount;
  int rs100 , rs50 , rs20 , rs10,rs5;

  switch(1)
  {
      

case 1 :rs100=amount/100;
amount=amount%100;
cout<<"no of 100 note"<<rs100<<endl;


case 2 :rs50=amount/50;
amount=amount%50;
cout<<"no of 100 note"<<rs50<<endl;

case 3: rs10=amount/10;
amount=amount%10;
cout<<"amount of 10 note"<<rs10<<endl;


case 3: rs1=amount/1;
amount=amount%1;
cout<<"amount of 10 note"<<rs1<<endl;


        }

return 0;

}











