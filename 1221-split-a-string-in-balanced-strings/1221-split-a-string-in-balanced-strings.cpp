class Solution {
public:
    int balancedStringSplit(string s) {
        
        int n=s.size();
        
       vector<int>L(n+1);
       vector<int>R(n+1);
        
        for(int i=0;i<n;i++){
            L[i+1]=L[i]+(s[i]=='L');
            R[i+1]=R[i]+(s[i]=='R');
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(L[i]==R[i] && (L[n]-L[i])==(R[n]-R[i])){
                cnt++;
            }
        }
        return cnt;
    }
};