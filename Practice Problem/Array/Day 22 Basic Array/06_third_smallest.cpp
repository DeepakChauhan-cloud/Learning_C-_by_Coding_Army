#include<iostream>
using namespace std;

int main(){
    int count,a[20];
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        /* code */
        cin>>a[i];
    }
    //smallest element
    int small1=a[0],small2=a[0],small3=a[0],index=-1;
    for (int i = 0; i < count; i++)
    {
        /* code */
        if(a[i]<small1){
            small1=a[i];
            index=i;
        }

    }
    cout<<small1<<" "<<index<<endl;

    for (int i = 0; i < count; i++)
    {
        /* code */
        if(small1 != a[i]){
            if(a[i]<small2){
            small2=a[i];
            index=i;
        }
        }

    }
    cout<<small2<<" "<<index<<endl;

    for (int i = 0; i < count; i++)
    {
        /* code */
        if(small1!=a[i] && small2 !=a[i]){
            if(a[i]<small3){
            small3=a[i];
            index=i;
        }
        }

    }
    cout<<small3<<" "<<index<<endl;
    return 0;
    
}