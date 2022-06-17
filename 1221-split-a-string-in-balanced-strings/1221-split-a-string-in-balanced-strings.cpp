class Solution {
public:
    int balancedStringSplit(string s) {
        
        int n=s.size();
        
        int cnt=0;
        int ans=0;
        for(int i=0;i<n;i++){
            cnt+=(s[i]=='R');
            cnt-=(s[i]=='L');
            if(cnt==0){
                ans++;
            }
        }
        return ans;
    }
};