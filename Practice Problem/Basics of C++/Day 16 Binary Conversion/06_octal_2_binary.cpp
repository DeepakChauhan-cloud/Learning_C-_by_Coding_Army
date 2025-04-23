#include<iostream>
using namespace std;

int octal2decimal(int a){
    int sum=0,mul=1;
    while (a)
    {
        int rem=a%10;
        a=a/10;
        sum=sum+rem*mul;
        mul=mul*8;
    }
    return sum;
    
}


int decimal2binary(int a){
    int sum=0,mul=1;
    while (a)
    {
        int rem=a%2;
        a=a/2;
        sum=sum+mul*rem;
        mul=mul*10;
    }
    return sum;
    
}

int main(){
    int num;
    cin>>num;
    int d=octal2decimal(num);
    int b=decimal2binary(d);
    cout<<d<<endl;
    cout<<b;
}