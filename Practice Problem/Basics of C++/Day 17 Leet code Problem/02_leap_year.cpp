#include<iostream>
using namespace std;

bool leapyear(int a){
    if(a%400==0){
        return 1;
    }
    else if(a%4==0 && a%100!=0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<leapyear(n);
}