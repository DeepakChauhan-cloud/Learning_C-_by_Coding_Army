#include<iostream>
using namespace std;

int main()
{
    int a=1,n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    while(a<=n)
    {
        sum=sum+a*a*a;
        a++;
    }
    cout<<sum<<endl;
}
