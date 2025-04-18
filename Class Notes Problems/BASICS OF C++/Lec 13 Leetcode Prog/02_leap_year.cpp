#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Year: ";
    cin>>n;

    if(n<0)
    {
        cout<<"Not Leap Year ";
    }
    else if(n%4==0 && n%100!=0)
    {
        cout<<"Leap Year";
    }
    else
    {
        cout<<"Not Leap Year ";
    }
}