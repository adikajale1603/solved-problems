class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
            
          
            int n=heights.size();
            
            vector<int>v;
            
            int l=0,r=n-1;
            int ans=0;
            while(l<=r){
                int mid=(l+r)>>1;
             
                vector<int>v;
                
                for(int i=0;i<=min((mid-1),n-2);i++){
                    if(heights[i+1]-heights[i]>0)
                    v.push_back(heights[i+1]-heights[i]);
                }
                sort(v.begin(),v.end());
                   int sum=0;
                if(v.size()-ladders>=0){
                for(int i=0;i<(int(v.size())-ladders);i++){
                    sum+=v[i];
                }
                }
                if(sum<=bricks){
                    ans=mid;
                    l=mid+1;
                }else{
                    r=mid-1;
                }
                
            }
        
        return ans;
           
    } 
};