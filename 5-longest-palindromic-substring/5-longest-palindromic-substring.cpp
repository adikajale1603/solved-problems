class Solution {
public:
    string longestPalindrome(string s) {
           
        int n=s.size();
        
        vector<vector<int>>dp(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        int mx=1;
        int l=0,len=1;
        for(int i=2;i<=n;i++){
            for(int j=0;j<=n-i;j++){
                if(i==2){
                    if(s[j]==s[j+1]){
                        dp[j][j+1]=1;
                        l=j;
                        len=i;
                    }
                    continue;
                }
                if(s[j]==s[j+i-1] && dp[j+1][j+i-2]){
                     dp[j][j+i-1]=1;
                     l=j;
                     len=i;
                }
            }
        }
     
        return s.substr(l,len);
    }
};