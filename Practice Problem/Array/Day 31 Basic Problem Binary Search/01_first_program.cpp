#include<iostream>
using namespace std;

int main(){
    int arr[7]={2,4,5,5,5,8,9};
    int start=0,end=(sizeof(arr)/sizeof(arr[0]))-1,mid,key;
    cin>>key;
    // first occurance
    int first,last;
    while (start<=end)
    {
            mid=(start+end)/2;
            if(arr[mid]==key){
                first=mid;
                end=mid-1;
            }
            else if(arr[mid]<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
    }
    //last occurance
    start=0;
    end=(sizeof(arr)/sizeof(arr[0]))-1;
    while (start<=end)
    {
            mid=(start+end)/2;
            if(arr[mid]==key){
                last=mid;
                start=mid+1;
            }
            else if(arr[mid]<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
    }
    cout<<first<<"  "<<last<<endl;
    
}