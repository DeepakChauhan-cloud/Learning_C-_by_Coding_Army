#include<iostream>
using namespace std;

int main(){
    int n,sum=0,mul=1;
    cin>>n;
    while(n){
        int rem=n%8;
        n=n/8;
        sum=sum+rem*mul;
        mul=mul*10;

    }
    cout<<sum;
}