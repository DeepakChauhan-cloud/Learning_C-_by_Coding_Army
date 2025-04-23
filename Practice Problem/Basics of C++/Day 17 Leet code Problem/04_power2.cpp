#include<iostream>
using namespace std;

bool powerof2(int a){
    if(a<0){
        return 0;
    }
    while (a!=1)
    {
        if(a%2==1){
            return 0;
        }
        a=a/2;
    }
    return 1;
    
}

int main(){
    int n;
    cin>>n;
    cout<<powerof2(n);
}