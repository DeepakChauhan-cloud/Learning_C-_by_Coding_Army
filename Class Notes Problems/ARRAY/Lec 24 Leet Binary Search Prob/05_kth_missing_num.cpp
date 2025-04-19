#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1,kthmissing;
    cin>>kthmissing;
    int index=-1,value=-1;

    while(start<=end){
        int mid=(start+end)/2;
        int newa=arr[mid]-mid-1;
        if(newa==kthmissing){
            index=mid;
            break;
        }
        else if(newa<kthmissing){
            start=mid+1;
        }
        else{
            index=mid;
            end=mid-1;
        }

    }
    cout<<index+kthmissing<<endl;
}