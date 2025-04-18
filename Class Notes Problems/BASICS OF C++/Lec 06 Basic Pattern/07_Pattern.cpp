/*    PATTERN PRINT
    a a a a a
    b b b b b
    c c c c c
    d d d d d
    e e e e e

 */

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the pattern row: ";
    cin>>n;
    for(char i='a';i<=n+'a';i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

}