#include<iostream>
using namespace std;

int main(){
    int arr[9], sum=0;
    for (int i = 0; i < 9; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 9; i++)
    {
        /* code */
        sum=sum+arr[i];
    }
    cout<<sum/9;
    
}
