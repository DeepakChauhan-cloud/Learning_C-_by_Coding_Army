#include<iostream>
using namespace std;

int rev(int a){
    int sum=0;
    while(a){
        int rem=a%10;
        a=a/10;
        sum=sum*10+rem;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<rev(n);
}