class Solution {
public:
    int longestSubsequence(string s, int k) {
           int n=s.size();
           int cnt=0;
           for(int i=0;i<n-32;i++){
                  if(s[i]=='0'){
                      cnt++;
                  }
           }
        for(int i=n-32;i<n;i++){
            if(i>=0){
             if(s[i]=='1'){
                 long long tot=0;
                 for(int j=n-1;j>=i;j--){
                      if(s[j]=='1'){
                          tot+=(1ll<<(n-1-j));
                      }
                 }
                 if(tot<=(long long)k){
                     cnt++;
                 }
             }else
             { 
                 cnt++;
             }
            }
        }
        return cnt;
    }
};