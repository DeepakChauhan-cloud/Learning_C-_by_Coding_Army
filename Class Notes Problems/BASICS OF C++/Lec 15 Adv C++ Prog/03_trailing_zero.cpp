#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"Enter the number : ";
    cin>>n;
    while(n>=5)
    {
        count=count+n/5;
        n=n/5;
    }
    cout<<count;

}
