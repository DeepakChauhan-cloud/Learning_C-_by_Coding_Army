/*    PATTERN PRINT
    a b c d e
    a b c d e
    a b c d e
    a b c d e
    a b c d e

 */

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the pattern row: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(char j='a';j<=n+'a';j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}