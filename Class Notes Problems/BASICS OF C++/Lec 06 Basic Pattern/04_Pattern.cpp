/*    PATTERN PRINT
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
 */

#include<iostream>
using namespace std;

int main()
{
    int i,j,n,num;
    cout<<"Enter the pattern row: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}