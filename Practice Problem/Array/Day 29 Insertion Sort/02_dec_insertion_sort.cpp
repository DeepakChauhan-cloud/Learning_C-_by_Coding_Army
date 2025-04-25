#include<iostream>
using namespace std;

int main(){
    int arr[5]={45,12,19,25,9};

    for(int i=4;i>0;i--){
        for(int j=i;j<5;j++){
            if(arr[j-1]<arr[j]){
                swap(arr[j-1],arr[j]);
            }
            else{
                break;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}