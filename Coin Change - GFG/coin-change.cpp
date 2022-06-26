// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int count(int S[], int m, int n) {

        // code here.
        vector<vector<long long int>>dp(n+1,vector<long long int>(m+1,0));
        
        for(int i=0;i<=m;i++){
            dp[0][i]=1;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                long long int op1=(S[j-1]<=i?dp[i-S[j-1]][j]:0);
                long long int op2=(j>0?dp[i][j-1]:0);
                dp[i][j]=op1+op2;
            }
        }
        return dp[n][m];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends