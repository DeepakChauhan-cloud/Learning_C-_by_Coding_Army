#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the your age: ";
    cin>>n;

    if(n<=19 && n>=13)
    {
        cout<<"Teenager";
    }
    else
    {
        cout<<"Adult";
    }
    return 0;
}