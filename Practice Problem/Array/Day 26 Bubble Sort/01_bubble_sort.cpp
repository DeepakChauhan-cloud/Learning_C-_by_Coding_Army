#include<iostream>
using namespace std;

int main(){
    int arr[5]={25,12 ,19,25,9};

    for(int i=5-1;i>=0;i--){
        bool swapped=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}