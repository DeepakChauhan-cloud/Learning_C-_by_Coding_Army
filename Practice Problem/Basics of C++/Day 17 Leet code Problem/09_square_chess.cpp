//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        long long p,sum=0,i;
        for(i=1;i<=N;i++){
            sum=sum+i*i;
        }
        return sum;
    }
};
