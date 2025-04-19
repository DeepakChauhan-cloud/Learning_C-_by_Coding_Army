#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Find the key elemnet: ";
    int key;
    cin>>key;
    bool cas=0;
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(key==a[mid]){
            cout<<"We got the key element and index is "<<mid;
            cas=1;
            break;
        }
        else if(a[mid]<key){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        
    }
    if(cas==0){
        cout<<"the key element is not present in th array ";
    }
}