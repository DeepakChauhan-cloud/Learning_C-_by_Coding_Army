/*    PATTERN PRINT
    10 10 10 10
    10 10 10 10
    10 10 10 10
    10 10 10 10

 */

#include<iostream>
using namespace std;

int main()
{
    int i,j,n,num;
    cout<<"Enter the pattern row: ";
    cin>>n;
    cout<<"Enter the number which you want to print: ";
    cin>>num;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }

}