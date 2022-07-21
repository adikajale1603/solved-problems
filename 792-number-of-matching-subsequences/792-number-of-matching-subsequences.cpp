class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
       
        map<char,vector<int>>mp;
        int n=s.size();
        
        for(int i=0;i<n;i++){
            mp[s[i]].push_back(i);
        }
        int ans=0;
        for(auto &s1:words){
            int pos=-1;
            bool ok=true;
            for(auto &x:s1){
                int new_pos=upper_bound(mp[x].begin(),mp[x].end(),pos)-mp[x].begin();
                if(new_pos>=mp[x].size()){
                    ok=false;
                    break;
                }else{
                    pos=mp[x][new_pos];
                }
            }
            if(ok){
                ans++;
            }
        }
        return ans;
    }
};