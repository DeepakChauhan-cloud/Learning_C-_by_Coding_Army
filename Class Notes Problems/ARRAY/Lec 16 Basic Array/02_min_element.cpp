#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int a[100],n;
    cout<<"Enter the element : ";
    cin>>n;
    cout<<"The element are: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    //int a[5]={25,15,85,63,6};                

    int ans=INT_MAX;

    for(int i=0;i<n;i++){
        if(ans>a[i]){
            ans=a[i];
            
        }
    }
    cout<<"Minimum element of the array is: "<<ans;
}