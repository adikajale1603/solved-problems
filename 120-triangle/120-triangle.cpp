class Solution {
public:
    int minimumTotal(vector<vector<int>>& v) {
         
        
        
        int n=v.size();
        vector<vector<int>>dp(2,vector<int>(n,INT_MAX));
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                for(int k=0;k<2;k++){
                    if(i==0 && j==0){
                        dp[i%2][j]=v[i][j];
                        continue;
                    }
                    if(j==i && k==0){
                        continue;
                    }
                    dp[i%2][j]=min(k==0?INT_MAX:dp[i%2][j],(j-k>=0?v[i][j]+dp[(i-1)%2][j-k]:INT_MAX));
                   
                }
            }
        }
        
        return *min_element(dp[(n-1)%2].begin(),dp[(n-1)%2].end());
        
        
    }
};
