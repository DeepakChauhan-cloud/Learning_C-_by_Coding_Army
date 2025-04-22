/*

        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

*/

#include<iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"Enter the number of row: ";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        int p=row+1;
        for(col=row-1;col>=1;col--)
        {
            
            cout<<p<<" ";
            p++;
            
        }
        cout<<endl;
    }
}