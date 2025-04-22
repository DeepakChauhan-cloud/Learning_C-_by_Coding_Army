/*

          A
        A B A
      A B C B A
    A B C D C B A
  A B C D E D C B A

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
        
    for(col=n-row+1;col>=1;col--)
    {
        cout<<"  ";
    }
    char name1='A';
    for(col=row;col>=1;col--)
    {
        cout<<name1<<" ";
        name1++;
    }

    char name2='A'+row-2;
    for(col=1;col<=row-1;col++)
    {
        cout<<name2<<" ";
        name2--;
    }
    cout<<endl;
    }
}