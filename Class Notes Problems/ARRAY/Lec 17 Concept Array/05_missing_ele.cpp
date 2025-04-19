// if number are in continous form

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int total=n*(n+1)/2;
    cout<<total<<" ";

    for(int i=0;i<n-1;i++){
        sum=sum+a[i];
    }
    cout<<sum<<" ";
    cout<<"The missing number is : "<<total-sum<<endl;
    return 0;

}