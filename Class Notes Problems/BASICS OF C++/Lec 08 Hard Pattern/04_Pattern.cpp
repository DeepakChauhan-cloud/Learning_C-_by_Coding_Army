/*
        A
      A B
    A B C
  A B C D
A B C D E
*/

#include<iostream>
using namespace std;

int main()
{
    int row,n;
    cout<<"Enter the value of row: ";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        
        for(char name='A';name<='A'+row-1;name++)
        {
            cout<<name<<" ";
    
        }
        cout<<endl;

    }
}