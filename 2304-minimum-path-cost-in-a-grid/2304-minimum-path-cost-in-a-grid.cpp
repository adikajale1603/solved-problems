class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
           
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>dp(2,vector<int>(m,0));
          
        for(int i=0;i<m;i++){
            dp[0][i]=grid[0][i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
               for(int k=0;k<m;k++){
                   dp[i%2][j]=min((k==0?INT_MAX:dp[i%2][j]),grid[i][j]+moveCost[grid[i-1][k]][j]+dp[(i-1)%2][k]);
               }
            }
            
        }
        return *min_element(dp[(n-1)%2].begin(),dp[(n-1)%2].end());
    }
};