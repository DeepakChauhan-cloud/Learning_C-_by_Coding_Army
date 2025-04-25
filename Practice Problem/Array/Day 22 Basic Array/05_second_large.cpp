#include<iostream>
using namespace std;

int main(){
    int a[20],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //for maxium element
    int maxel=-1,second=-2,index=0;
    for (int i = 0; i < n; i++)
    {
        if(maxel<a[i]){
            maxel=a[i];
            index=i;
        }
    }
    cout<<maxel<<" "<<index<<endl;

    for(int i=0 ;i<n;i++){
        if(maxel!=a[i]){
            if(second<a[i]){
                second=a[i];
                index=i;
            }
        }
    }
    cout<<second<<" "<<index<<endl;
    

}