class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
          unordered_set<int>s(begin(nums),end(nums));
        
          int longest=0;
        
          for(auto &x:nums){
              
               int cur_longest=1;
              
              for(int i=1;s.count(x-i);i++){
                  s.erase(x-i);
                  cur_longest++;
              }
              for(int i=1;s.count(x+i);i++){
                  s.erase(x+i);
                  cur_longest++;
              }
             longest=max(longest,cur_longest);
          }
        return longest;
    }
};