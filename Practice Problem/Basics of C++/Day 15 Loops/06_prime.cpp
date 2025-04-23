#include<iostream>
using namespace std;

int main()
{
    int n,i=2;
    cout<<"Enter the number weather it is prime or not: ";
    cin>>n;

    if(n<2)
    {
        cout<<"Not Prime";
        return 0;
    }

    while (n>i)
    {
        if(n%i==0)
        {
            cout<<"Not prime";
            return 0;
            
        }
        i++;
    }
    cout<<"Prime";
    return 0;
    
}
