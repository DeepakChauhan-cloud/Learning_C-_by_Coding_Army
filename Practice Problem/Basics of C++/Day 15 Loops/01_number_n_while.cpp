#include<iostream>
using namespace std;

int main()
{
    int n,i=2;
    cout<<endl;
    cout<<"Enter the any number till you want to print even number: ";
    cin>>n;
    while (i<=n)
    {
        cout<<i<<" ";
        i=i+2;
    }
    return 0;
    
}