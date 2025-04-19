#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int a[100],n;
    cout<<"Enter the number of element: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(ans<a[i]){
            ans=a[i];
        }
    }
    cout<<ans;
    return 0;
}