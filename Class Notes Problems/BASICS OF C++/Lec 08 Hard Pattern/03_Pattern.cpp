/*
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
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
        for(col=1;col<=5-row;col++)
        {
            cout<<"  ";

        }
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
