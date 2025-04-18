#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,mul=1;
    cout<<"Enter the number : ";
    cin>>n;

    if(n<0){
        cout<<"it is not a Pallindrome number ";
        return 0;
    }
    int pal=n;
    while (pal)
    {
        int rem=pal%10;
        pal=pal/10;
        sum=rem+sum*10;
    }
    if (sum==n)
    {
        cout<<"it is a Pallindrome number ";
    }
    else
    {
        cout<<"it is not a Pallindrome number ";
    }
    return 0;
}