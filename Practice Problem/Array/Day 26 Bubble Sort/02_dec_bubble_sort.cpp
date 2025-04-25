#include<iostream>
using namespace std;

int main(){
    int arr[5]={12,58,96,17,9};

    for(int i=5-1;i>=0;i--){
        for(int j=1;j<i;j++){
            if(arr[j-1]<arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}