class Solution {
public:
  
    int minimumUnfairness(int n,int k,vector<int>&v,vector<int>&c){
        if(n==0){
            int res=0;
            for(auto x:v){
                res=max(x,res);
            }
            return res;
        }
          int res=INT_MAX;
          for(int i=0;i<k;i++){
              v[i]+=c[n-1];
              res=min(res,minimumUnfairness(n-1,k,v,c));
              v[i]-=c[n-1];
          }
        return res;
    }
    int distributeCookies(vector<int>& c, int k) {
           
           int n=c.size();
        
           vector<int>v(k);
           return minimumUnfairness(n,k,v,c);
           
    }
};