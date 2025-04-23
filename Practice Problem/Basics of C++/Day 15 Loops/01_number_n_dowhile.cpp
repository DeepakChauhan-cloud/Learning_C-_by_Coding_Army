#include<iostream>
using namespace std;

int main()
{
    int n,i=2;
    cout<<endl<<"Enter the any number till you want to print even number: ";
    cin>>n;

    do{
        cout<<i<<" ";
        i=i+2;
    }while (i<=n);

    return 0;
    
}