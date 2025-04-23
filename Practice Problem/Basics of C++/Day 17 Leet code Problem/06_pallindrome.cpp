#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;

    if(n<0){
        cout<<"Not Pallindrome";
        return 0;
        
    }
    int p=n;
    while(p){
        int rem=p%10;
        p=p/10;
        sum=sum*10+rem;
    }
    if(sum==n){
        cout<<"A Pallindrome";
    }
    else{
        cout<<"Not Pallindrome";
    }
}