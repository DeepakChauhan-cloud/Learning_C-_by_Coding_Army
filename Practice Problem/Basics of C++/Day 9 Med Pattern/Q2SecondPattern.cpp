#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i='A';i<'A'+n;i++)
    {
        for(char j='A';j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}