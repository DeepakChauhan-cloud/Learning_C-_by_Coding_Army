#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=arr[0],index=0;
    int start =0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[0]<arr[mid]){
            start=mid+1;
        }
        else if(arr[0]>arr[mid]){
            ans=arr[mid];
            index=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<"Your value is "<<ans<<" and his index is "<<index;
}