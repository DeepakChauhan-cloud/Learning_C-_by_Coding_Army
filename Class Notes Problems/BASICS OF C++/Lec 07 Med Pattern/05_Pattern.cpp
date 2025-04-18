/*    PATTERN PRINT
    a
    b b
    c c c
    d d d d
    e e e e e
 */

#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the pattern row: ";
    cin>>n;
    char name='a';
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            cout<<name<<" ";
            
        }
        cout<<endl;
        name++;
    }

}