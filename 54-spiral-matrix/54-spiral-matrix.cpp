class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
          int n=v[0].size();
          int m=v.size();
          
        int top=0,right=n-1,bottom=m-1,left=0;
        int startX=0,startY=0;
        vector<int>ans;
        while(1){
            bool flag=false;
         for(int i=left;i<=right;i++){
             ans.push_back(v[top][i]);
             flag=true;
         }
          
            if(!flag){
                break;
            }
              flag=false;
         top++;
         for(int j=top;j<=bottom;j++){
             ans.push_back(v[j][right]);
             flag=true;
           
             
         }
            
           if(!flag){
                break;
            }
              flag=false;
         right--;
         for(int i=right;i>=left;i--){
             ans.push_back(v[bottom][i]);
             flag=true;
         }
              if(!flag){
                break;
            }
            flag=false;
        bottom--;
        for(int i=bottom;i>=top;i--){
            ans.push_back(v[i][left]);
            flag=true;
        }
              if(!flag){
                break;
            }
        left++;
      
        }
        return ans;
    }
};