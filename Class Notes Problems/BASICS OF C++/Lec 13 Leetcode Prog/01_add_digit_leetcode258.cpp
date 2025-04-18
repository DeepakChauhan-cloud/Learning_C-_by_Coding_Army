#include<iostream>
using namespace std;

int main()
{
    int n,rem;
    cout<<"Enter the number : ";
    cin>>n;

    while(n>9)
    {
        int sum=0;
        while (n)
        {
             rem=n%10;
             n=n/10;
             sum=sum+rem;
        }
        n=sum;
    }
    cout<<n;
    return 0;
}