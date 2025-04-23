#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    while(n){
        int rem=n%10;
        n=n/10;
        sum=sum*10+rem;
    }
    cout<<sum;
}