class Solution {
public:
    int coinChange(vector<int>& coins, int n) {
        
        
        vector<int>dp(n+1,INT_MAX);
        
        dp[0]=0;
        
        for(int i=1;i<=n;i++){
            for(int j=0;j<coins.size();j++){
                if(i-coins[j]>=0 && dp[i-coins[j]]!=INT_MAX){
                    dp[i]=min(dp[i],1+dp[i-coins[j]]);
                }
            }
        }
        
        return (dp[n]==INT_MAX?-1:dp[n]);
         
    }
};