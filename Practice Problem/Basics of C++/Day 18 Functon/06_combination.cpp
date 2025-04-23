#include<iostream>
using namespace std;

int fact(int a){
    int pro=1;
    while(a){
        pro=pro*a;
        a--;
    }
    return pro;
}

int main(){
    int n,r;
    cin>>n>>r;
    int A=fact(n),B=fact(r),C=fact(n-r);
    cout<<A/(B*C);
}