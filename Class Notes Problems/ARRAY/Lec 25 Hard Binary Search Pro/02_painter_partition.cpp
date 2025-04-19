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
	int painter;
	cin>>painter;
	int start=0,end=0,maxi=arr[0];
	for(int i=0;i<n;i++){
	    if(arr[i]>maxi){
	        maxi=arr[i];
	    }
	    start=maxi;
	    end=end+arr[i];
	}
	//cout<<start<<" "<<end;
	
	int ans;
	while(start<=end){
	    int mid=(start+end)/2;
	    int length=0,person=1;
	    for(int i=0;i<n;i++){
	        length+=arr[i];
	        if(mid<length){
	            length=arr[i];
	            person++;
	        }
	    }
	    if(person<=painter){
	        ans=mid;
	        end=mid-1;
	    }
	    else{
	        start=mid+1;
	    }
	}
	cout<<ans;

}
