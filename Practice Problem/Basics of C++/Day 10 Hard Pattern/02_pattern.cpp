/*

        A
      B B
    C C C
  D D D D
E E E E E

*/

#include<iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"Enter the naumbe rof row: ";
    cin>>n;

    char name='A';

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        
        for(col=row;col>=1;col--)
        {
            cout<<name<<" ";
        }
        name++;
        cout<<endl;

    }
}