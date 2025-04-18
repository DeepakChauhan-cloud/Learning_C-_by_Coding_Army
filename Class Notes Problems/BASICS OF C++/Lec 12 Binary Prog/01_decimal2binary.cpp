#include<iostream>
using namespace std;

int main()
{
    int n,rem,sum=0,mul=1;
    cout<<"Enter the number : ";
    cin>>n;
    while (n)
    {
        
        //rem=n%2;
        //n=n/2;
        //sum=rem*mul+sum;
        //mul=mul*10;

        //Altornate Method
        rem=n&1;
        n=n>>1;
        sum=rem*mul+sum;
        mul=mul*10;
    }
    cout<<sum;
    
}