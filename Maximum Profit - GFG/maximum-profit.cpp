// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  int getMaxProfit(int i, int k, int a[], int n,vector<vector<int>>&dp) {
    
    if (k == 0 || i == n) {
        return 0;
    }
    if(dp[i][k]!=-1){
        return dp[i][k];
    }
    int op1 = 0;
    for (int j = i + 1; j < n; j++) {
        op1 = max(op1, a[j] - a[i] + getMaxProfit(j + 1, k - 1, a, n,dp));
    }

    int op2 = getMaxProfit(i + 1, k, a, n,dp);

    return dp[i][k]=max(op2, op1);
}
    int maxProfit(int K, int N, int A[]) {
        // code here
        vector<vector<int>>dp(N,vector<int>(K+1,-1));
        for(int i=0;i<N;i++){
            for(int j=0;j<=K;j++){
                dp[i][j]=-1;
            }
        }
        return getMaxProfit(0,K,A,N,dp);
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}  // } Driver Code Ends