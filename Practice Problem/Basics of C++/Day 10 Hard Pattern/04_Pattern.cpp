/*

        E
      E D
    E D C
  E D C B
E D C B A

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
        char name=(n-1)+'A';
        for(col=1;col<=row;col++)
        {
            cout<<name<<" ";
            name--;

        }
        cout<<endl;
    }
}