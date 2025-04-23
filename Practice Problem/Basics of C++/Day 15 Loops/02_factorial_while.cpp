#include<iostream>
using namespace std;

int main()
{
    int n,pro=1,i=1;
    cout<<"Enter the number of which you want to find factorial: ";
    cin>>n;

    while (i<=n)
    {
        pro=i*pro;
        i++;
    }
    cout<<pro<<" ";
    return 0;
}