class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
          unordered_set<int>s(begin(nums),end(nums));
        
          int longest=0;
        
          for(auto &x:nums){
              
             if(s.count(x-1))
                 continue;
              
              int j=1;
              while(s.count(x+j))j++;
              longest=max(longest,j);
          }
        return longest;
    }
};