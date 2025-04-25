#include<iostream>
using namespace std;

int main(){
    int arr[6]={94,89,81,73,52,37};
    int key,start=0,end=(sizeof(arr)/sizeof(arr[0]))-1,mid;
    cin>>key;
    while (start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<mid<<endl;
            return 0;
        }
        else if(arr[mid]>key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(arr[mid]!=key){
            cout<<"not found"<<endl;
    }


}