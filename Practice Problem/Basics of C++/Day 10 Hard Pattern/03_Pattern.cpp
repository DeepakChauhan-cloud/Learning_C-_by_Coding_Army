/*

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
    int row,col,n;
    cout<<"Enter the number of row: ";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        int num=n;
        for(col=1;col<=row;col++)
        {
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
}