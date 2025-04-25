#include<iostream>
using namespace std;

int main(){
    //int arr[5]={25 ,58,5,69,12};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-1;i>=0;i--){
        int index=i;
        for(int j=0;j<i;j++){
            if(arr[index]<arr[j]){
                index=j;
            }
        }
        swap(arr[index],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}