#include<iostream>
using namespace std;

int main(){
    int n,sum=0,mul=1;
    cin>>n;
    while (n)
    {
        /* code */
        int rem;
        rem=n%2;
        n=n/2;
        sum=sum+rem*mul;
        mul=mul*10;
    }
    cout<<sum;
}