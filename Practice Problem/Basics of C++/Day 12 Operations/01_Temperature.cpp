#include<iostream>
using namespace std;

int main()
{
    int F;
    cout<<"Enter the Temperatur of swimming water in fahrenheit: ";
    cin>>F;
    if(F>=70 && F<=90)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}