class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
           
        
        sort(words.begin(), words.end(), [](const string &l, const string &r) { return l.size() > r.size(); });
        
        unordered_map<string,int>mp;
        
        int n=words.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(!mp.count(words[i])){
                ans+=(words[i].size()+1);
                for(int j=0;j<words[i].size();j++){
                    string temp="";
                    for(int k=j;k<words[i].size();k++){
                       temp.push_back(words[i][k]);
                    }
                    mp[temp]=1;
                }
            }
        }
        return ans;
          
    }
};