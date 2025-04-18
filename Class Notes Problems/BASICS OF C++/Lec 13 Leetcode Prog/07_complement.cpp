#include<iostream>
using namespace std;

int main()
{
    int n,rem,ans=0,mul=1;
    cout<<"Enter the number : ";
    cin>>n;

    while (n)
    {
        rem=n%2;
        rem=rem^1;
        n=n/2;
        ans=ans+rem*mul;
        mul=mul*2;
    }
    cout<<ans;
    
}