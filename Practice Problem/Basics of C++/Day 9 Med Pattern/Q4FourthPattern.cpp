/*

A B C D E
A B C D
A B C
A B
A

*/

#include<iostream>
using namespace std;

int main()
{   int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int row=n;row>=1;row--)
    {
        char name='A';
        for(int col=row;col>=1;col--)
        {
            cout<<name<<" ";
            name++;
        }
        cout<<endl;
    
    }
}