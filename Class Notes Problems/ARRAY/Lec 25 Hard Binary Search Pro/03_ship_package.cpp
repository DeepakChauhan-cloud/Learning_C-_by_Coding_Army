#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int days,ans;
	cin>>days;
	
	int start=0,end=0,maxi;
	for(int i=0;i<n;i++){
	    if(arr[i]>maxi){
	        maxi=arr[i];
	    }
	    start=maxi;
	    end+=arr[i];
	}
	
	while(start<=end){
	    int mid=(start+end)/2;
	    int totalwt=0,count=1;
	    for(int i=0;i<n;i++){
	        totalwt+=arr[i];
	        if(mid<totalwt){
	            count++;
	            totalwt=arr[i];
	        }
	    }
	    if(count<=days){
	        ans=mid;
	        end=mid-1;
	    }
	    else{
	        start=mid+1;
	    }
	}
	cout<<ans;

}
