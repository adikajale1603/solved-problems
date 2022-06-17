class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
               
        
        int index=0;
        if(ruleKey=="color"){
            index=1;
        }else if(ruleKey=="name"){
            index=2;
        }
        
        int n=items.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=(items[i][index]==ruleValue);
        }
        return cnt;
        
    }
};