#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //int arr[5]={35,13,89,54,5};

    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[index]<arr[j]){
                index=j;
            }
        }
        swap(arr[index],arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}