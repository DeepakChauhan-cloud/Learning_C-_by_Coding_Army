#include<iostream>
using namespace std;

int main(){
    int n,sqrt;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i*i<=n){
            sqrt=i;
        }
    }
    cout<<sqrt;
}