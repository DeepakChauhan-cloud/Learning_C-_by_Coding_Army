#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of element: ";
    cin>>n;
    int a[n];
    cout<<"Enter the eleemnt: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int start=0,end=n-1;
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}