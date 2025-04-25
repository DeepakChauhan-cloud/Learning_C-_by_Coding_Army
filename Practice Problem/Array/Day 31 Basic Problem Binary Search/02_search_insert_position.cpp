#include<iostream>
using namespace std;

int main(){
    int arr[6]={3,5,6,8,9,11};
    int start=0,end=sizeof(arr)/sizeof(arr[0])-1,mid,find,index;
    cin>>find;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==find){
            cout<<mid<<endl;
            return 0;
        }
        else if(arr[mid]>find){
            end=mid-1;
            index=mid;
        }
        else{
            start=mid+1;
        }
    }
    cout<<index<<endl;

}