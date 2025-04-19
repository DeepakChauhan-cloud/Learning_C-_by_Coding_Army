#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int value,index;
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            value=arr[mid];
            index=mid;
            break;
        }
        else if(arr[mid-1]<arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<value<<" "<<index<<endl;
}
