class Solution {
public:
    int maximumUniqueSubarray(vector<int>& v) {
          
        int last=-1;
        int n=v.size();
        
        unordered_map<int,int>ump;
        int sum=0;
        vector<int>prefix(n+1);
        
        for(int i=0;i<n;i++){
            prefix[i+1]=v[i]+prefix[i];
        }
        for(int i=0;i<n;i++){
            if(ump.count(v[i])){
               last=max(last,ump[v[i]]);
            }
            ump[v[i]]=i;
            sum=max(sum,prefix[i+1]-prefix[last+1]);
        }
        return sum;
    }
};