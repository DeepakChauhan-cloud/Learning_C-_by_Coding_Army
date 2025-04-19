#include<iostream>
#include<limits.h>
using namespace std;
    
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int Fmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(Fmax<a[i]){
            Fmax=a[i];
        }
    }
    int Smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]!=Fmax){
            Smax=max(Smax,a[i]);
        }
    }
    cout<<Smax;
}