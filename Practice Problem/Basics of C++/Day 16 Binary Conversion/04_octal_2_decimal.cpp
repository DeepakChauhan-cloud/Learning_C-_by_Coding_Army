#include<iostream>
using namespace std;

int main(){
    int n,sum=0,mul=1;
    cin>>n;
    while (n)
    {
        /* code */
        int rem=n%10;
        n=n/10;
        sum=sum+rem*mul;
        mul=mul*8;
    }
    cout<<sum;
    
}