#include<iostream>
using namespace std;

int main(){
    int n=26;
    char arr[n];
    arr[0]='a';
    for(int i=0;i<n;i++){
        char name=arr[0]+i;
        cout<<name<<" ";
    }

}