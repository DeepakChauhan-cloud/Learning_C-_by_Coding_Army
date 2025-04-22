#include<iostream>
using namespace std;

int main()
{   int n,i=1;
    cout<<"Enter the number: ";
    cin>>n;
    for(char name='A';i<=n+'A';i++)
    {
        for(int i=n;i>=n;i--)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}