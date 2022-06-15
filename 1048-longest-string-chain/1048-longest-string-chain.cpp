class Solution {
public:
    static bool cmp(string &s1,string &s2){
        return s1.size()<s2.size();
    }
    void dfs(string src,map<string,vector<string>>&V,map<string,int>&vis,map<string,int>&dp,int &lph){
        vis[src]=1;
        dp[src]=0;
        for(auto u:V[src]){
            if(!vis[u]){
                dfs(u,V,vis,dp,lph);
                dp[src]=max(dp[src],1+dp[u]);
                lph=max(dp[src],lph);
            }
        }
    }
    int longestStrChain(vector<string>& s) {
           
        int n=s.size();
        sort(s.begin(),s.end(),cmp);
        map<string,vector<string>>v;
        map<string,int>vis;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs((int)s[i].size()-(int)s[j].size())==1){
                map<char,int>mp1;
                map<char,int>mp2;
                int cnt=0;
                int n=s[i].size(),m=s[j].size();
                int k=0,p=0;
                for(;p<max(n,m)&&k<min(n,m);k++,p++){
                    if(n<m){
                        if(s[i][k]!=s[j][p]){
                            cnt++;
                            k--;
                        }
                    }else{
                        cout<<"yes";
                        if(s[i][p]!=s[j][k]){
                            cnt++;
                            k--;
                        }
                    }
                }
                cout<<cnt<<"\n";
                if(cnt<=1){
                    if((int)s[i].size()>int(s[j].size())){
                        v[s[j]].push_back(s[i]);
                    }else{
                    v[s[i]].push_back(s[j]);
                    }  
                }
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<s[i]<<" ->";
            for(auto x:v[s[i]]){
                cout<<x<<" ";
            }
            cout<<"\n";
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            if(!vis[s[i]]){
                map<string,int>dp;
                dfs(s[i],v,vis,dp,cnt);
                ans=max(cnt+1,ans);
                
            }
        }
        
        return ans;
        
    }
};