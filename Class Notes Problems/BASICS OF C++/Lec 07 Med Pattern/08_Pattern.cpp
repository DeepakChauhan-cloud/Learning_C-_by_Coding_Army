/*    PATTERN PRINT
    5
    5 4
    5 4 3
    5 4 3 2
    5 4 3 2 1
 */

#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the pattern row: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        
        for(j=5;j>=i;j--)
        {
            cout<<j<<" ";
            
        }
        cout<<endl;
    }

}