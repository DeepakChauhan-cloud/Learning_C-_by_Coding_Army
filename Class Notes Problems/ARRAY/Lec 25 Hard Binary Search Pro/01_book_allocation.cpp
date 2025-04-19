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
	int student;
	cin>>student;
	
	int start=0,end=0,maxi=arr[0],ans;
	
	for(int i=0;i<n;i++){
	    if(arr[i]>maxi){
	        maxi=arr[i];
	    }
	    start=maxi;
	    end=end+arr[i];
	}
	//cout<<start<<" "<<end<<endl;
	
	while(start<=end){
	    int mid=(start+end)/2;
	    int pages=0,count=1;
	    for(int i=0;i<n;i++){
	        pages+=arr[i];
	        if(mid<pages){
	            pages=arr[i];
	            count++;
	        }
	    }
	    if(count<=student){
	        ans=mid;
	        end=mid-1;
	    }
	    else{
	        start=mid+1;
	    }
	}
	cout<<ans;

}
