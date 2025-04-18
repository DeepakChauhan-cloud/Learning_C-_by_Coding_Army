#include<iostream>
#include<cmath>
using namespace std;

int digit(int a)
{
    int n=0;
    while(a)
    {
        a=a/10;
        n++;
    }
    return n;
}

int main()
{
    int n,rem,dig,sum=0;
    cout<<"Enter the number wheather it is armstrong or not : ";
    cin>>n;
    int temp=n;
    dig=digit(temp);
    cout<<dig<<" ";

    while (temp)
    {
        rem=temp%10;
        temp=temp/10;
        rem=pow(rem,dig);
        sum= sum + rem;

    }
    cout<<sum;

    if(sum==n){
        cout<<"It is a armstrong number ";
    }
    else{
        cout<<"It is not a armstrong number ";
    }


    return 0;
    
}