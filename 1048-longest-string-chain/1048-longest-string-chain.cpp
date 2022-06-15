class Solution {
public:
    static bool cmp(string &s1,string &s2){
        return s1.size()<s2.size();
    }

    int longestStrChain(vector<string>& s) {
           
        int n=s.size();
        sort(s.begin(),s.end(),cmp);
        int ans=0;
        
        unordered_map<string,int>dp;
       
        for(int i=0;i<n;i++){
            
            for(int j=0;j<s[i].size();j++){
                string s1="";
                for(int k=0;k<=j-1;k++){
                    s1.push_back(s[i][k]);
                }
               
                for(int k=j+1;k<s[i].size();k++){
                    s1.push_back(s[i][k]);
                }
                dp[s[i]]=max(dp[s[i]],1+dp[s1]);
            }
            ans=max(ans,dp[s[i]]);
        }
        
      return ans;
        
        
    }
};