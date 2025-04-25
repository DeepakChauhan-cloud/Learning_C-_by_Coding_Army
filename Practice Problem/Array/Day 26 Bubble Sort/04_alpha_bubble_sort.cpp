#include<iostream>
using namespace std;

int main(){
    int arr[5]={'b','t','e','h','m'};

    for(int i=5-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<char(arr[i])<<" ";
    }
    return 0;
}