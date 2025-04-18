#include<iostream>
using namespace std;

int main()
{
    char name;
    cout<<"Enter the alphbhate: ";
    cin>>name;

    char Name=name+'a'-'A';
    // 0 - 9 : 48 - 57
    // A - Z : 65 - 90
    // a - z : 97 -122 
    cout<<name<<" "<<Name;
}