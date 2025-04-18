#include<iostream>
using namespace std;

int main()
{
    int n,rem,sum=0,mul=1;
    cout<<"Enter the number: ";
    cin>>n;

    while (n)
    {
        rem=n%10;
        n=n/10;
        sum=sum*mul+rem;
        mul=mul*10;
    }
    cout<<sum;
    
}