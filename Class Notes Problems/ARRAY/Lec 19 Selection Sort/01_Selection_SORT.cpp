#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++){
            if(a[index]>a[j]){
               index=j;
              }
            }
        swap(a[index],a[i]);
    }
    cout<<"The sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}