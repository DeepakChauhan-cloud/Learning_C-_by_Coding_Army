/*
           *
         * *
       * * *
     * * * *
   * * * * *
*/

#include<iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"Enter the value of row: ";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=5-row;col++)
        {
            cout<<"  ";
        }
        for(col=row;col>=1;col--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}