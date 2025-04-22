#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=10;i<=n+10;i++)
    {
        for(int j=10;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}