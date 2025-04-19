#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no of elements :";
    cin>>n;
    int a[n];
    cout<<"The element are : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // cout<<sizeofarr[n];

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}