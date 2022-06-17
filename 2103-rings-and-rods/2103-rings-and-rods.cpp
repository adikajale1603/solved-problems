class Solution {
public:
    int countPoints(string rings) {
        
         vector<vector<int>>v(10,vector<int>(3,0));
         
         
         vector<int>vis(10);
        
         int n=rings.size();
        
        for(int i=1;i<n;i+=2){
         
              if(rings[i-1]=='R'){
                  v[rings[i]-'0'][0]++;
                  
              }
                 if(rings[i-1]=='G'){
                     v[rings[i]-'0'][1]++;
                  
              }
                 if(rings[i-1]=='B'){
                  v[rings[i]-'0'][2]++;
              }
              if(v[rings[i]-'0'][0]>0 && v[rings[i]-'0'][1]>0 && v[rings[i]-'0'][2]>0){
                  vis[rings[i]-'0']=1;
              }
        }
        int cnt=0;
        for(int i=0;i<10;i++){
            cnt+=(vis[i]);
        }
        return cnt;
    }
};