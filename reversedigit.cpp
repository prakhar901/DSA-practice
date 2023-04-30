#include<iostream>
using namespace std;
class Solution {
    public:
    int reverse (int x ){
        cout<<"enter value";
        int ans=0;
        while (x!=0){
            int digit=x%10;
            ans=(ans* 10)+digit;
            x=x/10;
        }
        return ans;
    }
};