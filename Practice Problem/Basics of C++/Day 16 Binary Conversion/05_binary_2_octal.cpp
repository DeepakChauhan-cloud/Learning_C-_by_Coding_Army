#include<iostream>
using namespace std;

int binary2decimal(int a){
    int sum=0,mul=1;
    while (a)
    {
        int rem=a%10;
        a=a/10;
        sum=sum+rem*mul;
        mul=mul*2;
    }
    return sum;
}

int decimal2octal(int a){
    int sum=0,mul=1;
    while (a)
    {
        /* code */
        int rem=a%8;
        a=a/8;
        sum=sum+rem*mul;
        mul=mul*10;
    }
    return sum;
    
}

int main(){
    int n,d,o;
    cin>>n;
    d=binary2decimal(n);
    o=decimal2octal(d);
    cout<<d<<endl;
    cout<<o;
}