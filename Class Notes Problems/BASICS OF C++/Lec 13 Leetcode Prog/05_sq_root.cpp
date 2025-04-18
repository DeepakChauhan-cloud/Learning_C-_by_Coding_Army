#include<iostream>
using namespace std;

int main()
{
    int n,i=0;
    cout<<"Enter the number: ";
    cin>>n;

    while (i<n)
    {
        if(i*i>n){
            cout<<i-1<<endl;
            return 0;
        }
        i++;
    }
    
}