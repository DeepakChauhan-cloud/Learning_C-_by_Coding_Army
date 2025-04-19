#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elemnt : ";
    cin>>n;
    int a[n];
    cout<<"Enter the element : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=n;
    int temp[j];
    for(int i=0;i<n;i++){
        temp[i]=a[n-i-1];
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;

}