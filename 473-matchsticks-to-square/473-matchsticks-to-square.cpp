#define ll long long
class Solution {
public:
    bool checkMakeSquarePossible(vector<int>&matchsticks,int n,vector<int>&v,int target){
        if(n==0){
            bool ok=true;
            for(int i=1;i<4;i++){
                ok=ok&&(v[i]==v[i-1]);
            }
            return ok;
        }
        
        for(int i=0;i<4;i++){
            if(v[i]+matchsticks[n-1]>target){
                continue;
            }
             int j = i;
            while (--j >= 0) // third
                if (v[i] == v[j]) 
                    break;
            if (j != -1) continue;
            v[i]+=matchsticks[n-1];
            if(checkMakeSquarePossible(matchsticks,n-1,v,target)){
                return true;
            }
            v[i]-=matchsticks[n-1];
        }
        
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
         int n=matchsticks.size();
        if(n<4){
            return false;
        }
         vector<int>v(4,0);
         int sum=0;
        // sort(matchsticks.begin(),matchsticks.end(), [](const int &l, const int &r){return l > r;});
         for(auto &x:matchsticks){
             sum+=x;
         }
        
         if(sum%4){
             return false;
         }
         sum/=4;
         bool ans=checkMakeSquarePossible(matchsticks,n,v,sum);
         return ans;
    }
};