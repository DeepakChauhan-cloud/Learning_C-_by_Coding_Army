#include<iostream>
using namespace std;
int findarr(int p[],int a){
    int n=sizeof(p),index=-1;
    for(int i=0;i<n;i++){
        if(a==p[i]){
            index=i;
            return index;
        }
    }
    return index;
}

int main(){
    int arr[10],n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    int find;
    cin>>find;
    cout<<findarr(arr,find);
    

}