#include<iostream>
using namespace std;

int main()
{
    int i=1, f1=0,f2=1,n;
    cout<<"Enter the number : "; 
    cin>>n;
    cout<<f1<<" "<<f2<<" ";
    while(n>=i)
    {
        int f3=f1+f2;
        f1=f2;
        f2=f3;
        cout<<f3<<" ";
        i++;
    }
}