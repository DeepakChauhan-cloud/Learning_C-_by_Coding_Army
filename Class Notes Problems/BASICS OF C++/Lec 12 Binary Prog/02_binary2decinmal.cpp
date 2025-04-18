#include<iostream>
using namespace std;

int main()
{
    int num,ans=0,mul=1,rem;
    cout<<"Enter the Binary number: ";
    cin>>num;

    while (num)
    {
        rem=num%10;
        num=num/10;
        ans=ans+rem*mul;
        mul=mul*2;
    }
    cout<<ans;
    

}