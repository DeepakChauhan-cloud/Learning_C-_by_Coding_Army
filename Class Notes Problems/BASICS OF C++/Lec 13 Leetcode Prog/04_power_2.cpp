#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of power of 2: ";
    cin>>n;

    if(n<1)
    {
        cout<<"Not the power of 2";
        return 0;
    }

    while (n!=1)
    {
        if(n%2==1){
            cout<<"Not the power of 2";
            return 0;
        }
        n=n/2;
        
    }
    cout<<"The number is power of 2";
    return 0;
}