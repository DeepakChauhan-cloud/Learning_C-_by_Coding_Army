#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of element of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sizeof(a)<<endl;
    cout<<sizeof(a)/sizeof(a[0]);
    return 0;

}