/*

* * * * * * * *
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *

*/

#include<iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"Ente the number of row: ";
    cin>>n;
    //PART A
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-(row-1);col++)
        {
            cout<<"* ";
        }
        for(col=1;col<=2*(row-1);col++)
        {
            cout<<"  "; 
        }
        for(col=1;col<=n-(row-1);col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    //PART B
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        for(col=1;col<=2*(n-row);col++)
        {
            cout<<"  ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}