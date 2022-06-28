class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            int n=digits.size();
        
            bool carry=false;
            vector<int>ans(n+1);
            digits[n-1]++;
            ans[n]=digits[n-1];
            for(int i=n-1;i>=1;i--){
                 ans[i]=digits[i-1]+(ans[i+1]==10?1:0);
                 if(ans[i+1]==10){
                     ans[i+1]=0;
                 }
            }
            if(ans[1]==10){
                ans[1]=0;
                ans[0]=1;
            }
        
           if(ans[0]==1){
               return ans;
           }else{
               return vector<int>(ans.begin()+1,ans.end());
           }
    }
};