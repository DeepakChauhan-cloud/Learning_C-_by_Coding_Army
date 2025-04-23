#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cout<<"Enter the natural nummber to print: ";
    cin>>n;

    while (i<=n)
    {
        if(i%3==0 && i%5==0)
        {
            continue;
        }
        cout<<i<<" ";
        i++;
    }
    return 0;
    
}