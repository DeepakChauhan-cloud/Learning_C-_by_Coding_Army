#include<iostream>
using namespace std;

void exch(int a,int b,int c){
    int temp;
    temp=b;
    b=a;
    a=c;
    c=temp;
    cout<<a<<" "<<b<<" "<<c;
    return ;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    exch(a,b,c);
}