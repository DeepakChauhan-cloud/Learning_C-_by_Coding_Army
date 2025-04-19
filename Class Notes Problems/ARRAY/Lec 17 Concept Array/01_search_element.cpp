#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of element: ";
    cin>>n;
    int a[n];
    cout<<"Enter the element : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int find,ans=-1;
    cout<<"Enter the element you want to find ";
    cin>>find;

    for(int i=0;i<n;i++)
    {
        if(find==a[i]){
            cout<<"we got the element and index is "<<i;
            ans=i;
            break;
        }
    }
    if(ans==-1){
        cout<<"we cannot find the element as it is not possible in the array ";
    }
    return 0;
}