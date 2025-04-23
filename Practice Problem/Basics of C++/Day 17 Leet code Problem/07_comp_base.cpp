#include<iostream>
using namespace std;

int main(){
    int n,sum=0,mul=1;
    cin>>n;
    while(n){
        int rem=n%2;
        rem=rem^1;
        n=n/2;
        sum=sum+mul*rem;
        mul=mul*2;
    }
    cout<<sum;
}