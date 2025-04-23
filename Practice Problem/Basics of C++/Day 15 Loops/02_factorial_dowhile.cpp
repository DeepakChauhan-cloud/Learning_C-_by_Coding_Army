#include<iostream>
using namespace std;

int main()
{
    int n,i=1,pro=1;
    cout<<"Enter the number of which you want to find factorial: ";
    cin>>n;

    do{
        pro=pro*i;
        i++;
    }while(i<=n);

    cout<<pro<<endl;
}