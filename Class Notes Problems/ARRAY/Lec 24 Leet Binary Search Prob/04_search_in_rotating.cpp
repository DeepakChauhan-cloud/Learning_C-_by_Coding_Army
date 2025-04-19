#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1,key;
    cin>>key;
    int index=-1,value=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            index=mid;
            value=arr[mid];
            break;
        }
        else if(arr[0]<=arr[mid] ){
           if(arr[start]<=key && key<arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(arr[mid]<key && key>=arr[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<"the value is "<<value<<" and his index is "<<index<<endl;
}